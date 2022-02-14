
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct agp_bridge_data {int major_version; int minor_version; int capndx; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

void FUNC_1(struct agp_bridge_data *VAR_2)
{
 u32 VAR_3;


 if (VAR_2->major_version != 0)
  return;

 FUNC_0(VAR_2->dev, VAR_2->capndx, &VAR_3);
 VAR_2->major_version = (VAR_3 >> VAR_0) & 0xf;
 VAR_2->minor_version = (VAR_3 >> VAR_1) & 0xf;
}
