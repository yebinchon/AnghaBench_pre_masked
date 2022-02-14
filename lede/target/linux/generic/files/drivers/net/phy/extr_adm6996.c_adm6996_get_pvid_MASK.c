
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct adm6996_priv {int* pvid; } ;


 int FUNC_0 (char*,int) ;
 struct adm6996_priv* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_0, int VAR_1, int *VAR_2)
{
 struct adm6996_priv *VAR_3 = FUNC_1(VAR_0);

 FUNC_0("get_pvid port %d\n", VAR_1);
 *VAR_2 = VAR_3->pvid[VAR_1];

 return 0;
}
