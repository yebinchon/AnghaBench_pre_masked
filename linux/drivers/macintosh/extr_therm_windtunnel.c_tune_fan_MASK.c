
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fan_level; scalar_t__ casetemp; scalar_t__ temp; int fan; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_3( int VAR_1 )
{
 int VAR_2 = (VAR_1 << 3) | 7;


 FUNC_2( VAR_0.fan, 0x25, VAR_2, 1 );
 FUNC_2( VAR_0.fan, 0x20, 0, 1 );
 FUNC_0("CPU-temp: ", VAR_0.temp );
 if( VAR_0.casetemp )
  FUNC_0(", Case: ", VAR_0.casetemp );
 FUNC_1(",  Fan: %d (tuned %+d)\n", 11-VAR_1, VAR_0.fan_level-VAR_1 );

 VAR_0.fan_level = VAR_1;
}
