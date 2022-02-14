
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct block_header {int * input_ids; int pipeline_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int*) ;

__attribute__((used)) static u32 FUNC_3(struct block_header *VAR_0)
{
 u32 VAR_1 = 0, VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0->pipeline_info); VAR_3++) {
  FUNC_2(VAR_0->input_ids[VAR_3], ((void*)0), &VAR_2);
  if (VAR_2 == 0xFFFFFFFF)
   continue;
  VAR_1 |= FUNC_0(VAR_2);
 }

 return VAR_1;
}
