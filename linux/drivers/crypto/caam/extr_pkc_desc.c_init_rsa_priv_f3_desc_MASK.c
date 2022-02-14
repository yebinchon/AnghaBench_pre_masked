
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsa_priv_f3_pdb {int p_q_len; int tmp2_dma; int tmp1_dma; int dq_dma; int dp_dma; int q_dma; int p_dma; int c_dma; int f_dma; int g_dma; int sgf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(u32 *VAR_4, struct rsa_priv_f3_pdb *VAR_5)
{
 FUNC_3(VAR_4, 0, VAR_3);
 FUNC_0(VAR_4, VAR_5->sgf);
 FUNC_2(VAR_4, VAR_5->g_dma);
 FUNC_2(VAR_4, VAR_5->f_dma);
 FUNC_2(VAR_4, VAR_5->c_dma);
 FUNC_2(VAR_4, VAR_5->p_dma);
 FUNC_2(VAR_4, VAR_5->q_dma);
 FUNC_2(VAR_4, VAR_5->dp_dma);
 FUNC_2(VAR_4, VAR_5->dq_dma);
 FUNC_2(VAR_4, VAR_5->tmp1_dma);
 FUNC_2(VAR_4, VAR_5->tmp2_dma);
 FUNC_0(VAR_4, VAR_5->p_q_len);
 FUNC_1(VAR_4, VAR_1 | VAR_0 |
    VAR_2);
}
