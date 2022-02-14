
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dirstat_dir {int nr; TYPE_6__* files; scalar_t__ alloc; int cumulative; int permille; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct TYPE_9__ {scalar_t__ dirstat_by_file; int dirstat_cumulative; } ;
struct diff_options {int repo; TYPE_1__ flags; int dirstat_permille; } ;
struct diff_filepair {TYPE_2__* one; TYPE_2__* two; } ;
struct TYPE_11__ {char const* name; unsigned long changed; } ;
struct TYPE_10__ {char* path; unsigned long size; int oid; scalar_t__ oid_valid; } ;


 int FUNC_0 (TYPE_6__*,int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_6__*,size_t,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;
 struct diff_queue_struct VAR_1 ;
 int FUNC_5 (int ,TYPE_2__*,TYPE_2__*,int *,int *,unsigned long*,unsigned long*) ;
 int VAR_2 ;
 int FUNC_6 (struct diff_options*,struct dirstat_dir*,unsigned long,char*,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct diff_options *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct dirstat_dir VAR_6;
 struct diff_queue_struct *VAR_7 = &VAR_1;

 VAR_6.files = ((void*)0);
 VAR_6.alloc = 0;
 VAR_6.nr = 0;
 VAR_6.permille = VAR_3->dirstat_permille;
 VAR_6.cumulative = VAR_3->flags.dirstat_cumulative;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_7->nr; VAR_4++) {
  struct diff_filepair *VAR_8 = VAR_7->queue[VAR_4];
  const char *VAR_9;
  unsigned long VAR_10, VAR_11, VAR_12;

  VAR_9 = VAR_8->two->path ? VAR_8->two->path : VAR_8->one->path;

  if (VAR_8->one->oid_valid && VAR_8->two->oid_valid &&
      FUNC_7(&VAR_8->one->oid, &VAR_8->two->oid)) {





   VAR_12 = 0;
   goto found_damage;
  }

  if (VAR_3->flags.dirstat_by_file) {







   VAR_12 = 1;
   goto found_damage;
  }

  if (FUNC_1(VAR_8->one) && FUNC_1(VAR_8->two)) {
   FUNC_4(VAR_3->repo, VAR_8->one, 0);
   FUNC_4(VAR_3->repo, VAR_8->two, 0);
   FUNC_5(VAR_3->repo,
            VAR_8->one, VAR_8->two, ((void*)0), ((void*)0),
            &VAR_10, &VAR_11);
   FUNC_3(VAR_8->one);
   FUNC_3(VAR_8->two);
  } else if (FUNC_1(VAR_8->one)) {
   FUNC_4(VAR_3->repo, VAR_8->one, VAR_0);
   VAR_10 = VAR_11 = 0;
   FUNC_3(VAR_8->one);
  } else if (FUNC_1(VAR_8->two)) {
   FUNC_4(VAR_3->repo, VAR_8->two, VAR_0);
   VAR_10 = 0;
   VAR_11 = VAR_8->two->size;
   FUNC_3(VAR_8->two);
  } else
   continue;
  VAR_12 = (VAR_8->one->size - VAR_10) + VAR_11;
  if (!VAR_12)
   VAR_12 = 1;

found_damage:
  FUNC_0(VAR_6.files, VAR_6.nr + 1, VAR_6.alloc);
  VAR_6.files[VAR_6.nr].name = VAR_9;
  VAR_6.files[VAR_6.nr].changed = VAR_12;
  VAR_5 += VAR_12;
  VAR_6.nr++;
 }


 if (!VAR_5)
  return;


 FUNC_2(VAR_6.files, VAR_6.nr, VAR_2);
 FUNC_6(VAR_3, &VAR_6, VAR_5, "", 0);
}
