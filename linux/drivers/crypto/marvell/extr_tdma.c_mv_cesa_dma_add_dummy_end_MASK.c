
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_tdma_desc {int byte_cnt; } ;
struct mv_cesa_tdma_chain {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mv_cesa_tdma_desc*) ;
 int FUNC_2 (struct mv_cesa_tdma_desc*) ;
 int FUNC_3 (int ) ;
 struct mv_cesa_tdma_desc* FUNC_4 (struct mv_cesa_tdma_chain*,int ) ;

int FUNC_5(struct mv_cesa_tdma_chain *VAR_0, gfp_t VAR_1)
{
 struct mv_cesa_tdma_desc *VAR_2;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_1(VAR_2))
  return FUNC_2(VAR_2);

 VAR_2->byte_cnt = FUNC_3(FUNC_0(31));

 return 0;
}
