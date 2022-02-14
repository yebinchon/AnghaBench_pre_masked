
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct file {int dummy; } ;
struct dpaa2_caam_priv {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,int ,struct dpaa2_caam_priv*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;
 struct dpaa2_caam_priv *VAR_4;

 VAR_4 = (struct dpaa2_caam_priv *)VAR_1->i_private;

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_4);
 if (VAR_3 < 0)
  FUNC_0(VAR_4->dev, "single_open() failed\n");

 return VAR_3;
}
