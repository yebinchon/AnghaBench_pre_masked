
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpodd {int zp_ready; } ;
struct ata_device {struct zpodd* zpodd; } ;



bool FUNC_0(struct ata_device *VAR_0)
{
 struct zpodd *VAR_1 = VAR_0->zpodd;
 return VAR_1->zp_ready;
}
