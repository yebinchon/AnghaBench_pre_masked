
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int fence; } ;
struct seq_file {int dummy; } ;
struct dma_fence_array {int num_fences; int * fences; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,struct sync_file*,int ,int ) ;
 int FUNC_3 (struct sync_file*,char*,int) ;
 int FUNC_4 (struct seq_file*,int ,int) ;
 int FUNC_5 (int ) ;
 struct dma_fence_array* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_0,
      struct sync_file *VAR_1)
{
 char VAR_2[128];
 int VAR_3;

 FUNC_2(VAR_0, "[%p] %s: %s\n", VAR_1,
     FUNC_3(VAR_1, VAR_2, sizeof(VAR_2)),
     FUNC_5(FUNC_0(VAR_1->fence)));

 if (FUNC_1(VAR_1->fence)) {
  struct dma_fence_array *VAR_4 = FUNC_6(VAR_1->fence);

  for (VAR_3 = 0; VAR_3 < VAR_4->num_fences; ++VAR_3)
   FUNC_4(VAR_0, VAR_4->fences[VAR_3], 1);
 } else {
  FUNC_4(VAR_0, VAR_1->fence, 1);
 }
}
