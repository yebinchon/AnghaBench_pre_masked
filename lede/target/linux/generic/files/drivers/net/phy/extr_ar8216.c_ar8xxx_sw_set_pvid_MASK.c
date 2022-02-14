
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int vlans; } ;
struct ar8xxx_priv {int* pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ar8xxx_priv* FUNC_0 (struct switch_dev*) ;

int
FUNC_1(struct switch_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_0(VAR_2);



 if (VAR_4 < 0 || VAR_4 >= VAR_2->vlans ||
     VAR_3 < 0 || VAR_3 >= VAR_0)
  return -VAR_1;

 VAR_5->pvid[VAR_3] = VAR_4;
 return 0;
}
