
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
typedef enum hubp_ind_block_size { ____Placeholder_hubp_ind_block_size } hubp_ind_block_size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,int,int ,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dcn20_hubp* FUNC_1 (struct hubp*) ;

void FUNC_2(struct hubp *VAR_5, bool VAR_6,
  enum hubp_ind_block_size VAR_7)
{
 uint32_t VAR_8 = VAR_6 ? 1 : 0;
 uint32_t VAR_9 = VAR_7 ? 1 : 0;
 struct dcn20_hubp *VAR_10 = FUNC_1(VAR_5);

 FUNC_0(VAR_0,
   VAR_1, VAR_8,
   VAR_2, VAR_9,
   VAR_3, VAR_8,
   VAR_4, VAR_9);
}
