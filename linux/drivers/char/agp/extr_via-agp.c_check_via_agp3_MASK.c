
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct agp_bridge_data {int * driver; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1 (struct agp_bridge_data *VAR_2)
{
 u8 VAR_3;

 FUNC_0(VAR_2->dev, VAR_0, &VAR_3);

 if ((VAR_3 & (1<<1))==0)
  VAR_2->driver = &VAR_1;
}
