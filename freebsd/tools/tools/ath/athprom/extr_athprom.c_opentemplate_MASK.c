
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int filename ;
struct TYPE_2__ {int ee_version; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*,char const*,int,...) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static FILE *
FUNC_3(const char *VAR_4)
{
 char VAR_5[VAR_1];
 FILE *VAR_6;


 FUNC_1(VAR_5, sizeof(VAR_5), "%s/eeprom-%d.%d",
     VAR_4, VAR_2.ee_version >> 12, VAR_2.ee_version & 0xfff);
 VAR_6 = FUNC_0(VAR_5, "r");
 if (VAR_6 == ((void*)0) && VAR_3 == VAR_0) {

  FUNC_1(VAR_5, sizeof(VAR_5), "%s/eeprom-%d",
      VAR_4, VAR_2.ee_version >> 12);
  VAR_6 = FUNC_0(VAR_5, "r");
  if (VAR_6 != ((void*)0))
   FUNC_2("Using template file %s", VAR_5);
 }
 return VAR_6;
}
