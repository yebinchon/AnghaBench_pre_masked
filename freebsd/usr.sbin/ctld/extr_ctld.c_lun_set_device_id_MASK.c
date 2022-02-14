
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int l_device_id; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct lun *VAR_0, const char *VAR_1)
{
 FUNC_1(VAR_0->l_device_id);
 VAR_0->l_device_id = FUNC_0(VAR_1);
}
