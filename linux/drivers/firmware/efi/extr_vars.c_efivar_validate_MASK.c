
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
struct TYPE_2__ {char* name; int (* validate ) (int *,int,char*,unsigned long) ;int vendor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int *,int,char*,unsigned long) ;
 int FUNC_4 (char*,int *,unsigned long) ;
 unsigned long FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,unsigned long,char const*,int*) ;
 TYPE_1__* VAR_1 ;

bool
FUNC_7(efi_guid_t VAR_2, efi_char16_t *VAR_3, u8 *VAR_4,
  unsigned long VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 u8 *VAR_8;

 VAR_7 = FUNC_5(VAR_3);
 VAR_8 = FUNC_2(VAR_7 + 1, VAR_0);
 if (!VAR_8)
  return 0;

 FUNC_4(VAR_8, VAR_3, VAR_7);
 VAR_8[VAR_7] = '\0';

 for (VAR_6 = 0; VAR_1[VAR_6].name[0] != '\0'; VAR_6++) {
  const char *VAR_9 = VAR_1[VAR_6].name;
  int VAR_10 = 0;

  if (FUNC_0(VAR_2, VAR_1[VAR_6].vendor))
   continue;

  if (FUNC_6(VAR_8, VAR_7+1, VAR_9, &VAR_10)) {
   if (VAR_1[VAR_6].validate == ((void*)0))
    break;
   FUNC_1(VAR_8);
   return VAR_1[VAR_6].validate(VAR_3, VAR_10,
            VAR_4, VAR_5);
  }
 }
 FUNC_1(VAR_8);
 return 1;
}
