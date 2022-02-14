
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct vmctx {int dummy; } ;
struct smbios_structure {int dummy; } ;
struct smbios_entry_point {int dummy; } ;
typedef int (* initializer_func_t ) (struct smbios_structure*,char const**,char*,char**,scalar_t__*,scalar_t__*) ;
struct TYPE_2__ {char** strings; int (* initializer ) (struct smbios_structure*,char const**,char*,char**,scalar_t__*,scalar_t__*) ;struct smbios_structure* entry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (struct vmctx*,scalar_t__,int) ;
 int FUNC_3 (struct smbios_entry_point*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct smbios_entry_point*,scalar_t__) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct smbios_structure*,char const**,char*,char**,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct vmctx*) ;
 int FUNC_7 (struct vmctx*) ;

int
FUNC_8(struct vmctx *VAR_7)
{
 struct smbios_entry_point *VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 char *VAR_11, *VAR_12, *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_4 = FUNC_7(VAR_7);
 VAR_3 = FUNC_6(VAR_7);

 VAR_12 = FUNC_2(VAR_7, VAR_1, VAR_2);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_6, "smbios table requires mapped mem\n");
  return (VAR_0);
 }

 VAR_11 = VAR_12;

 VAR_8 = (struct smbios_entry_point *)VAR_11;
 FUNC_4(VAR_8, VAR_1 +
     sizeof(struct smbios_entry_point));
 VAR_11 += sizeof(struct smbios_entry_point);
 VAR_13 = VAR_11;

 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_14 = 0; VAR_5[VAR_14].entry != ((void*)0); VAR_14++) {
  struct smbios_structure *VAR_16;
  const char **VAR_17;
  initializer_func_t VAR_18;
  char *VAR_19;
  uint16_t VAR_20;

  VAR_16 = VAR_5[VAR_14].entry;
  VAR_17 = VAR_5[VAR_14].strings;
  VAR_18 = VAR_5[VAR_14].initializer;

  VAR_15 = (*VAR_18)(VAR_16, VAR_17, VAR_11, &VAR_19,
      &VAR_9, &VAR_20);
  if (VAR_15 != 0)
   return (VAR_15);

  if (VAR_20 > VAR_10)
   VAR_10 = VAR_20;

  VAR_11 = VAR_19;
 }

 FUNC_0(VAR_11 - VAR_12 < VAR_2);
 FUNC_3(VAR_8, VAR_11 - VAR_13, VAR_9, VAR_10);

 return (0);
}
