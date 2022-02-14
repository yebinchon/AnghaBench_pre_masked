
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_gang {int aff_flags; int * aff_ref_spu; int aff_sched_count; } ;
struct spu_context {struct spu_gang* gang; int aff_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spu_gang*) ;
 int FUNC_1 (struct spu_gang*) ;
 int FUNC_2 (struct spu_gang*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct spu_context *VAR_2)
{
 struct spu_gang *VAR_3 = VAR_2->gang;

 if (FUNC_4(&VAR_2->aff_list))
  return 0;

 if (FUNC_3(&VAR_2->gang->aff_sched_count) == 0)
  VAR_2->gang->aff_ref_spu = ((void*)0);

 if (!VAR_3->aff_ref_spu) {
  if (!(VAR_3->aff_flags & VAR_0))
   FUNC_0(VAR_3);
  if (!(VAR_3->aff_flags & VAR_1))
   FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }

 return VAR_3->aff_ref_spu != ((void*)0);
}
