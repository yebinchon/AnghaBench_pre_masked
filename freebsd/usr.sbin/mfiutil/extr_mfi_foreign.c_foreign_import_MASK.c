
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_foreign_scan_info {int count; } ;
typedef int mbox ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int ,struct mfi_foreign_scan_info*,int,int*,int,int *) ;
 int FUNC_5 (int,int ) ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(int VAR_6, char **VAR_7)
{
 struct mfi_foreign_scan_info VAR_8;
 int VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13[4];

 if (VAR_6 > 2) {
  FUNC_8("foreign preview: extra arguments");
                return (VAR_0);
 }

 VAR_11 = FUNC_5(VAR_5, VAR_3);
 if (VAR_11 < 0) {
  VAR_10 = VAR_4;
  FUNC_7("mfi_open");
  return (VAR_10);
 }

 if (FUNC_4(VAR_11, VAR_2, &VAR_8,
     sizeof(VAR_8), ((void*)0), 0, ((void*)0)) < 0) {
  VAR_10 = VAR_4;
  FUNC_7("Failed to scan foreign configuration");
  FUNC_2(VAR_11);
  return (VAR_10);
 }

 if (VAR_8.count == 0) {
  FUNC_8("foreign import: no foreign configs found");
  FUNC_2(VAR_11);
  return (VAR_0);
 }

 if (VAR_6 == 1) {
  VAR_12 = 0xff;
  FUNC_6("Are you sure you wish to import ALL foreign "
         "configurations on mfi%u? [y/N] ", VAR_5);
 } else {






  VAR_12 = FUNC_0(VAR_7[1]);
  if (VAR_12 >= VAR_8.count) {
   FUNC_8("Invalid foreign config %d specified max is %d",
         VAR_12, VAR_8.count - 1);
   FUNC_2(VAR_11);
   return (VAR_0);
  }
  FUNC_6("Are you sure you wish to import the foreign "
         "configuration %d on mfi%u? [y/N] ", VAR_12, VAR_5);
 }

 VAR_9 = FUNC_3();
 if (VAR_9 != 'y' && VAR_9 != 'Y') {
  FUNC_6("\nAborting\n");
  FUNC_2(VAR_11);
  return (0);
 }

 FUNC_1(VAR_13, sizeof(VAR_13));
 VAR_13[0] = VAR_12;
 if (FUNC_4(VAR_11, VAR_1, ((void*)0), 0, VAR_13,
     sizeof(VAR_13), ((void*)0)) < 0) {
  VAR_10 = VAR_4;
  FUNC_7("Failed to import foreign configuration");
  FUNC_2(VAR_11);
  return (VAR_10);
 }

 if (VAR_6 == 1)
  FUNC_6("mfi%d: All foreign configurations imported\n",
         VAR_5);
 else
  FUNC_6("mfi%d: Foreign configuration %d imported\n", VAR_5,
         VAR_12);
 FUNC_2(VAR_11);
 return (0);
}
