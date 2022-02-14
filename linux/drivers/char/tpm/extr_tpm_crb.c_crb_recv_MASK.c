
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dev; } ;
struct crb_priv {int * rsp; TYPE_1__* regs_t; } ;
typedef int __be32 ;
struct TYPE_2__ {int ctrl_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (int *) ;
 struct crb_priv* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 struct crb_priv *VAR_6 = FUNC_1(&VAR_3->dev);
 unsigned int VAR_7;




 if (VAR_5 < VAR_2)
  return -VAR_1;




 if (FUNC_2(&VAR_6->regs_t->ctrl_sts) & VAR_0)
  return -VAR_1;





 FUNC_3(VAR_4, VAR_6->rsp, 8);

 VAR_7 = FUNC_0((__be32 *)&VAR_4[2]);
 if (VAR_7 > VAR_5 || VAR_7 < VAR_2)
  return -VAR_1;

 FUNC_3(&VAR_4[8], &VAR_6->rsp[8], VAR_7 - 8);

 return VAR_7;
}
