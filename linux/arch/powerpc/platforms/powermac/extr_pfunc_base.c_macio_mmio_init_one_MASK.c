
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {int of_node; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,struct macio_chip*) ;

__attribute__((used)) static void FUNC_2(struct macio_chip *VAR_1)
{
 FUNC_0("Installing MMIO functions for macio %pOF\n",
     VAR_1->of_node);

 FUNC_1(VAR_1->of_node, &VAR_0, VAR_1);
}
