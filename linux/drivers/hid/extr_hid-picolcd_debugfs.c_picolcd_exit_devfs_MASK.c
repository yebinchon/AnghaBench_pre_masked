
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int mutex_flash; struct dentry* debug_flash; struct dentry* debug_eeprom; struct dentry* debug_reset; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct picolcd_data *VAR_0)
{
 struct dentry *VAR_1;

 VAR_1 = VAR_0->debug_reset;
 VAR_0->debug_reset = ((void*)0);
 FUNC_0(VAR_1);
 VAR_1 = VAR_0->debug_eeprom;
 VAR_0->debug_eeprom = ((void*)0);
 FUNC_0(VAR_1);
 VAR_1 = VAR_0->debug_flash;
 VAR_0->debug_flash = ((void*)0);
 FUNC_0(VAR_1);
 FUNC_1(&VAR_0->mutex_flash);
}
