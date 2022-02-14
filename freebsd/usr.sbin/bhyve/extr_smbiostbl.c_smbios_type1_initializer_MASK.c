
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
struct smbios_table_type1 {int uuid; } ;
struct smbios_structure {int dummy; } ;
typedef int hostname ;
typedef int digest ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int * VAR_1 ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (struct smbios_structure*,char const**,char*,char**,int *,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static int
FUNC_9(struct smbios_structure *VAR_4,
    const char **VAR_5, char *VAR_6, char **VAR_7,
    uint16_t *VAR_8, uint16_t *VAR_9)
{
 struct smbios_table_type1 *VAR_10;

 FUNC_5(VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8, VAR_9);
 VAR_10 = (struct smbios_table_type1 *)VAR_6;

 if (VAR_1 != ((void*)0)) {
  uuid_t VAR_11;
  uint32_t VAR_12;

  FUNC_8(VAR_1, &VAR_11, &VAR_12);
  if (VAR_12 != VAR_2)
   return (-1);

  FUNC_7(&VAR_10->uuid, &VAR_11);
 } else {
  MD5_CTX VAR_13;
  u_char VAR_14[16];
  char VAR_15[VAR_0];






  if (FUNC_3(VAR_15, sizeof(VAR_15)))
   return (-1);

  FUNC_1(&VAR_13);
  FUNC_2(&VAR_13, VAR_3, FUNC_6(VAR_3));
  FUNC_2(&VAR_13, VAR_15, sizeof(VAR_15));
  FUNC_0(VAR_14, &VAR_13);




  VAR_14[6] &= 0x0F;
  VAR_14[6] |= 0x30;
  VAR_14[8] &= 0x3F;
  VAR_14[8] |= 0x80;

  FUNC_4(&VAR_10->uuid, VAR_14, sizeof (VAR_14));
 }

 return (0);
}
