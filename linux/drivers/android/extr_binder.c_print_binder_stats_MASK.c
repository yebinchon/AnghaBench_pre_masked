
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct binder_stats {int * obj_deleted; int * obj_created; int * br; int * bc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (struct seq_file*,char*,char const*,int ,int,...) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_3, const char *VAR_4,
          struct binder_stats *VAR_5)
{
 int VAR_6;

 FUNC_1(FUNC_0(VAR_5->bc) !=
       FUNC_0(VAR_0));
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->bc); VAR_6++) {
  int VAR_7 = FUNC_2(&VAR_5->bc[VAR_6]);

  if (VAR_7)
   FUNC_3(VAR_3, "%s%s: %d\n", VAR_4,
       VAR_0[VAR_6], VAR_7);
 }

 FUNC_1(FUNC_0(VAR_5->br) !=
       FUNC_0(VAR_2));
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->br); VAR_6++) {
  int VAR_8 = FUNC_2(&VAR_5->br[VAR_6]);

  if (VAR_8)
   FUNC_3(VAR_3, "%s%s: %d\n", VAR_4,
       VAR_2[VAR_6], VAR_8);
 }

 FUNC_1(FUNC_0(VAR_5->obj_created) !=
       FUNC_0(VAR_1));
 FUNC_1(FUNC_0(VAR_5->obj_created) !=
       FUNC_0(VAR_5->obj_deleted));
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->obj_created); VAR_6++) {
  int VAR_9 = FUNC_2(&VAR_5->obj_created[VAR_6]);
  int VAR_10 = FUNC_2(&VAR_5->obj_deleted[VAR_6]);

  if (VAR_9 || VAR_10)
   FUNC_3(VAR_3, "%s%s: active %d total %d\n",
    VAR_4,
    VAR_1[VAR_6],
    VAR_9 - VAR_10,
    VAR_9);
 }
}
