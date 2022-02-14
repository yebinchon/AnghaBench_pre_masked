
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int addr; } ;
struct TYPE_2__ {int temp; int overheat_temp; int overheat_hyst; struct i2c_client* thermostat; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_3( struct i2c_client *VAR_1 )
{
 int VAR_2, VAR_3, VAR_4;

 if( VAR_0.thermostat )
  goto out;

 if( (VAR_4=FUNC_2(VAR_1, 0, 2)) < 0 )
  goto out;


 if( VAR_4 < 0x1600 || VAR_4 > 0x3c00 )
  goto out;
 VAR_2 = FUNC_2(VAR_1, 2, 2);
 VAR_3 = FUNC_2(VAR_1, 3, 2);
 if( VAR_2 < 0 || VAR_3 < 0 )
  goto out;

 FUNC_1("DS1775 digital thermometer [@%02x]\n", VAR_1->addr );
 FUNC_0("Temp: ", VAR_4 );
 FUNC_0("  Hyst: ", VAR_2 );
 FUNC_0("  OS: ", VAR_3 );
 FUNC_1("\n");

 VAR_0.temp = VAR_4;
 VAR_0.overheat_temp = VAR_3;
 VAR_0.overheat_hyst = VAR_2;
 VAR_0.thermostat = VAR_1;
out:
 return 0;
}
