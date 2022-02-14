
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_caam_priv {int dfs_root; int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int ,struct dpaa2_caam_priv*,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3(struct dpaa2_caam_priv *VAR_1)
{
 VAR_1->dfs_root = FUNC_0(FUNC_2(VAR_1->dev), ((void*)0));

 FUNC_1("fq_stats", 0444, VAR_1->dfs_root, VAR_1,
       &VAR_0);
}
