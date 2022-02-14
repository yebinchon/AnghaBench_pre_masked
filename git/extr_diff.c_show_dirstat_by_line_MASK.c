
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirstat_dir {int nr; TYPE_2__* files; scalar_t__ alloc; int cumulative; int permille; } ;
struct diffstat_t {int nr; struct diffstat_file** files; } ;
struct diffstat_file {unsigned long added; unsigned long deleted; int name; scalar_t__ is_binary; } ;
struct TYPE_4__ {int dirstat_cumulative; } ;
struct diff_options {TYPE_1__ flags; int dirstat_permille; } ;
struct TYPE_5__ {unsigned long changed; int name; } ;


 int FUNC_0 (TYPE_2__*,int,scalar_t__) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 int FUNC_2 (TYPE_2__*,size_t,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct diff_options*,struct dirstat_dir*,unsigned long,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct diffstat_t *VAR_1, struct diff_options *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 struct dirstat_dir VAR_5;

 if (VAR_1->nr == 0)
  return;

 VAR_5.files = ((void*)0);
 VAR_5.alloc = 0;
 VAR_5.nr = 0;
 VAR_5.permille = VAR_2->dirstat_permille;
 VAR_5.cumulative = VAR_2->flags.dirstat_cumulative;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  struct diffstat_file *VAR_6 = VAR_1->files[VAR_3];
  unsigned long VAR_7 = VAR_6->added + VAR_6->deleted;
  if (VAR_6->is_binary)







   VAR_7 = FUNC_1(VAR_7, 64);
  FUNC_0(VAR_5.files, VAR_5.nr + 1, VAR_5.alloc);
  VAR_5.files[VAR_5.nr].name = VAR_6->name;
  VAR_5.files[VAR_5.nr].changed = VAR_7;
  VAR_4 += VAR_7;
  VAR_5.nr++;
 }


 if (!VAR_4)
  return;


 FUNC_2(VAR_5.files, VAR_5.nr, VAR_0);
 FUNC_3(VAR_2, &VAR_5, VAR_4, "", 0);
}
