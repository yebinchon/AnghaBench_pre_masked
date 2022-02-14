
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7879 {int irq; int cmd_crtl1; int cmd_crtl3; int cmd_crtl2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad7879*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ad7879 *VAR_3)
{
 FUNC_0(VAR_3, VAR_1, VAR_3->cmd_crtl2);
 FUNC_0(VAR_3, VAR_2, VAR_3->cmd_crtl3);
 FUNC_0(VAR_3, VAR_0, VAR_3->cmd_crtl1);

 FUNC_1(VAR_3->irq);
}
