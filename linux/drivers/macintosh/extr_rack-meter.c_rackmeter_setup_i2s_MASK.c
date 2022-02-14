
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rackmeter {scalar_t__ i2s_regs; int * i2s; TYPE_2__* mdev; } ;
struct macio_chip {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {struct macio_chip* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,int *,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct rackmeter *VAR_7)
{
 struct macio_chip *VAR_8 = VAR_7->mdev->bus->chip;


 FUNC_5(VAR_5, ((void*)0), VAR_6, 5);





 FUNC_5(VAR_4, VAR_7->i2s, 0, 1);





 FUNC_1(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_2);
 (void)FUNC_2(VAR_0);
 FUNC_6(10);





 FUNC_4(VAR_7->i2s_regs + 0x10, 0x01fa0000);
 (void)FUNC_3(VAR_7->i2s_regs + 0x10);
 FUNC_6(10);


 FUNC_1(VAR_0, VAR_1 |
    VAR_2);
 (void)FUNC_2(VAR_0);
 FUNC_6(10);
}
