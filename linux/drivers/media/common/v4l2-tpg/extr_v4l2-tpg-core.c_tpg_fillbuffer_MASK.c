
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct tpg_data {int buffers; } ;


 scalar_t__ FUNC_0 (struct tpg_data*,unsigned int) ;
 int FUNC_1 (struct tpg_data*,int ,unsigned int,int *) ;
 unsigned int FUNC_2 (struct tpg_data*) ;

void FUNC_3(struct tpg_data *VAR_0, v4l2_std_id VAR_1, unsigned VAR_2, u8 *VAR_3)
{
 unsigned VAR_4 = 0;
 unsigned VAR_5;

 if (VAR_0->buffers > 1) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_0); VAR_5++) {
  FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3 + VAR_4);
  VAR_4 += FUNC_0(VAR_0, VAR_5);
 }
}
