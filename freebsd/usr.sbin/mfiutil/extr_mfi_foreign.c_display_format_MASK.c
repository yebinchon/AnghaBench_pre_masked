
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_foreign_scan_info {int count; } ;
typedef int mfi_dcmd_t ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int,int) ;
 scalar_t__ FUNC_3 (int,int ,struct mfi_foreign_scan_info*,int,int *,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

int
FUNC_8(int VAR_5, char **VAR_6, int VAR_7, mfi_dcmd_t VAR_8)
{
 struct mfi_foreign_scan_info VAR_9;
 uint8_t VAR_10;
 int VAR_11, VAR_12;

 if (VAR_5 > 2) {
  FUNC_7("foreign display: extra arguments");
                return (VAR_0);
 }

 VAR_12 = FUNC_4(VAR_4, VAR_2);
 if (VAR_12 < 0) {
  VAR_11 = VAR_3;
  FUNC_6("mfi_open");
  return (VAR_11);
 }

 if (FUNC_3(VAR_12, VAR_1, &VAR_9,
     sizeof(VAR_9), ((void*)0), 0, ((void*)0)) < 0) {
  VAR_11 = VAR_3;
  FUNC_6("Failed to scan foreign configuration");
  FUNC_1(VAR_12);
  return (VAR_11);
 }

 if (VAR_9.count == 0) {
  FUNC_7("foreign display: no foreign configs found");
  FUNC_1(VAR_12);
  return (VAR_0);
 }

 if (VAR_5 == 1) {
  for (VAR_10 = 0; VAR_10 < VAR_9.count; VAR_10++) {
   VAR_11 = FUNC_2(VAR_12,
    VAR_8, VAR_10, VAR_7);
   if(VAR_11 != 0) {
    FUNC_1(VAR_12);
    return (VAR_11);
   }
   if (VAR_10 < VAR_9.count - 1)
    FUNC_5("\n");
  }
 } else if (VAR_5 == 2) {
  VAR_11 = FUNC_2(VAR_12,
   VAR_8, FUNC_0(VAR_6[1]), VAR_7);
  if (VAR_11 != 0) {
   FUNC_1(VAR_12);
   return (VAR_11);
  }
 }

 FUNC_1(VAR_12);
 return (0);
}
