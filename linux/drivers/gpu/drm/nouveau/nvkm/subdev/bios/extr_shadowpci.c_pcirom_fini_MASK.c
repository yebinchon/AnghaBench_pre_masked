
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int pdev; int rom; } ;


 int FUNC_0 (struct priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct priv *VAR_1 = VAR_0;
 FUNC_2(VAR_1->pdev, VAR_1->rom);
 FUNC_1(VAR_1->pdev);
 FUNC_0(VAR_1);
}
