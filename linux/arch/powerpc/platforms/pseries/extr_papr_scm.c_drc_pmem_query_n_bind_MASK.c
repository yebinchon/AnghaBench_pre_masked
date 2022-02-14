
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct papr_scm_priv {int blocks; int block_size; unsigned long bound_addr; TYPE_1__* pdev; int res; int drc_index; } ;
typedef int int64_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct papr_scm_priv*) ;
 int FUNC_3 (struct papr_scm_priv*) ;
 int FUNC_4 (int ,unsigned long*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct papr_scm_priv *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5[VAR_1];
 int64_t VAR_6;


 VAR_6 = FUNC_4(VAR_0, VAR_5,
    VAR_2->drc_index, 0);
 if (VAR_6)
  goto err_out;
 VAR_3 = VAR_5[0];


 VAR_6 = FUNC_4(VAR_0, VAR_5,
    VAR_2->drc_index, VAR_2->blocks - 1);
 if (VAR_6)
  goto err_out;
 VAR_4 = VAR_5[0];

 if ((VAR_4 - VAR_3) != ((VAR_2->blocks - 1) * VAR_2->block_size))
  goto err_out;

 VAR_2->bound_addr = VAR_3;
 FUNC_0(&VAR_2->pdev->dev, "bound drc 0x%x to %pR\n", VAR_2->drc_index, &VAR_2->res);
 return VAR_6;

err_out:
 FUNC_1(&VAR_2->pdev->dev,
   "Failed to query, trying an unbind followed by bind");
 FUNC_3(VAR_2);
 return FUNC_2(VAR_2);
}
