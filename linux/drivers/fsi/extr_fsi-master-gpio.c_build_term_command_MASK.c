
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fsi_gpio_msg {scalar_t__ msg; scalar_t__ bits; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_gpio_msg*,int ,int) ;
 int FUNC_1 (struct fsi_gpio_msg*) ;

__attribute__((used)) static void FUNC_2(struct fsi_gpio_msg *VAR_1, uint8_t VAR_2)
{
 VAR_1->bits = 0;
 VAR_1->msg = 0;

 FUNC_0(VAR_1, VAR_2, 2);
 FUNC_0(VAR_1, VAR_0, 6);
 FUNC_1(VAR_1);
}
