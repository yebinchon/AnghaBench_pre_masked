
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int vlans; } ;
struct psb6970_priv {int* pvid; } ;


 int VAR_0 ;
 struct psb6970_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_1, int VAR_2, int VAR_3)
{
 struct psb6970_priv *VAR_4 = FUNC_0(VAR_1);


 if (VAR_3 >= VAR_1->vlans)
  return -VAR_0;

 VAR_4->pvid[VAR_2] = VAR_3;
 return 0;
}
