
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int efi_guid_t ;
struct TYPE_2__ {char* name; int vendor; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,size_t,char*,int*) ;
 TYPE_1__* VAR_0 ;

bool
FUNC_2(efi_guid_t VAR_1, const char *VAR_2,
        size_t VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;
 int VAR_6 = 0;




 for (VAR_4 = 0; VAR_0[VAR_4].name[0] != '\0'; VAR_4++) {
  if (FUNC_0(VAR_0[VAR_4].vendor, VAR_1))
   continue;

  if (FUNC_1(VAR_2, VAR_3,
         VAR_0[VAR_4].name, &VAR_6)) {
   VAR_5 = 1;
   break;
  }
 }




 return VAR_5;
}
