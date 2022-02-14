
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ee_version; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char const*,int,int) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1)
{
 FUNC_0("%s undefined for version %d.%d format EEPROM", VAR_1,
     VAR_0.ee_version >> 12, VAR_0.ee_version & 0xfff);
}
