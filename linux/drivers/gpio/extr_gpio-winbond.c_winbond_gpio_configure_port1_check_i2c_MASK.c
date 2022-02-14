
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i2cgpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3)
{
 VAR_2.i2cgpio = !FUNC_1(VAR_3, VAR_1,
      VAR_0);
 if (!VAR_2.i2cgpio)
  FUNC_0("disabling GPIO2.5 and GPIO2.6 as I2C is enabled\n");
}
