
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diffstat_t {int nr; TYPE_1__** files; } ;
struct diff_options {int dummy; } ;
struct TYPE_2__ {int added; int deleted; int is_binary; int is_interesting; scalar_t__ is_unmerged; } ;


 int FUNC_0 (struct diff_options*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct diffstat_t *VAR_0, struct diff_options *VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4 = 0, VAR_5 = VAR_0->nr;

 if (VAR_0->nr == 0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++) {
  int VAR_6 = VAR_0->files[VAR_2]->added;
  int VAR_7 = VAR_0->files[VAR_2]->deleted;

  if (VAR_0->files[VAR_2]->is_unmerged ||
      (!VAR_0->files[VAR_2]->is_interesting && (VAR_6 + VAR_7 == 0))) {
   VAR_5--;
  } else if (!VAR_0->files[VAR_2]->is_binary) {
   VAR_3 += VAR_6;
   VAR_4 += VAR_7;
  }
 }
 FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4);
}
