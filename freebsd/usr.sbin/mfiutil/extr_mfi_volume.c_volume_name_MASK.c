
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_ld_props {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ,struct mfi_ld_props*) ;
 scalar_t__ FUNC_3 (int,struct mfi_ld_props*) ;
 scalar_t__ FUNC_4 (int,char*,int *) ;
 int FUNC_5 (int,int ) ;
 int VAR_4 ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(int VAR_5, char **VAR_6)
{
 struct mfi_ld_props VAR_7;
 int VAR_8, VAR_9;
 uint8_t VAR_10;

 if (VAR_5 != 3) {
  FUNC_11("name: volume and name required");
  return (VAR_0);
 }

 if (FUNC_9(VAR_6[2]) >= sizeof(VAR_7.name)) {
  FUNC_11("name: new name is too long");
  return (VAR_1);
 }

 VAR_9 = FUNC_5(VAR_4, VAR_2);
 if (VAR_9 < 0) {
  VAR_8 = VAR_3;
  FUNC_10("mfi_open");
  return (VAR_8);
 }

 if (FUNC_4(VAR_9, VAR_6[1], &VAR_10) < 0) {
  VAR_8 = VAR_3;
  FUNC_10("Invalid volume: %s", VAR_6[1]);
  FUNC_1(VAR_9);
  return (VAR_8);
 }

 if (FUNC_2(VAR_9, VAR_10, &VAR_7) < 0) {
  VAR_8 = VAR_3;
  FUNC_10("Failed to fetch volume properties");
  FUNC_1(VAR_9);
  return (VAR_8);
 }

 FUNC_7("mfi%u volume %s name changed from \"%s\" to \"%s\"\n", VAR_4,
     FUNC_6(VAR_9, VAR_10), VAR_7.name, VAR_6[2]);
 FUNC_0(VAR_7.name, sizeof(VAR_7.name));
 FUNC_8(VAR_7.name, VAR_6[2]);
 if (FUNC_3(VAR_9, &VAR_7) < 0) {
  VAR_8 = VAR_3;
  FUNC_10("Failed to set volume properties");
  FUNC_1(VAR_9);
  return (VAR_8);
 }

 FUNC_1(VAR_9);

 return (0);
}
