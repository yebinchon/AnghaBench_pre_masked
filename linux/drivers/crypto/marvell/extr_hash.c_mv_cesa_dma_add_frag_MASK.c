
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_tdma_chain {int dummy; } ;
struct mv_cesa_op_ctx {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mv_cesa_op_ctx* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mv_cesa_op_ctx*) ;
 int FUNC_2 (struct mv_cesa_tdma_chain*,int ) ;
 struct mv_cesa_op_ctx* FUNC_3 (struct mv_cesa_tdma_chain*,struct mv_cesa_op_ctx*,int,int ) ;
 scalar_t__ FUNC_4 (struct mv_cesa_op_ctx*) ;
 int FUNC_5 (struct mv_cesa_op_ctx*,unsigned int) ;
 int FUNC_6 (struct mv_cesa_op_ctx*,int ,int ) ;

__attribute__((used)) static struct mv_cesa_op_ctx *
FUNC_7(struct mv_cesa_tdma_chain *VAR_2,
       struct mv_cesa_op_ctx *VAR_3, unsigned int VAR_4,
       gfp_t VAR_5)
{
 struct mv_cesa_op_ctx *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2, VAR_3, 0, VAR_5);
 if (FUNC_1(VAR_6))
  return VAR_6;


 FUNC_5(VAR_6, VAR_4);


 VAR_7 = FUNC_2(VAR_2, VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);

 if (FUNC_4(VAR_3))
  FUNC_6(VAR_3,
          VAR_1,
          VAR_0);

 return VAR_6;
}
