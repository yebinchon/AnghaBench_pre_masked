
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int efi_guid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,size_t) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,int **,size_t*,int *) ;
 int FUNC_5 (int *,size_t,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int *,size_t) ;
 scalar_t__ VAR_6 ;
 int * FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int *,char**) ;
 int FUNC_12 (char*,...) ;
 size_t FUNC_13 (int,int *,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (int *,size_t) ;

__attribute__((used)) static void
FUNC_15(efi_guid_t *VAR_9, char *VAR_10)
{
 uint32_t VAR_11;
 uint8_t *VAR_12;
 size_t VAR_13;
 char *VAR_14 = ((void*)0);
 int VAR_15;

 if (VAR_9)
  FUNC_11(VAR_9, &VAR_14);
 if (VAR_7 || VAR_5) {
  if (VAR_5) {
   int VAR_16;

   VAR_16 = FUNC_10(VAR_5, VAR_2);
   if (VAR_16 < 0)
    FUNC_6(1, "open %s", VAR_5);
   VAR_12 = FUNC_9(64 * 1024);
   if (VAR_12 == ((void*)0))
    FUNC_6(1, "malloc");
   VAR_13 = FUNC_13(VAR_16, VAR_12, 64 * 1024);
   if (VAR_13 <= 0)
    FUNC_6(1, "read");
   FUNC_2(VAR_16);
  } else {
   VAR_15 = FUNC_4(*VAR_9, VAR_10, &VAR_12, &VAR_13, &VAR_11);
   if (VAR_15 < 0)
    FUNC_6(1, "fetching %s-%s", VAR_14, VAR_10);
  }


  if (!VAR_1)
   FUNC_12("%s-%s\n", VAR_14, VAR_10);
  if (VAR_6)
   FUNC_5(VAR_12, VAR_13, VAR_0, VAR_3, VAR_8);
  else if (VAR_0)
   FUNC_0(VAR_12, VAR_13);
  else if (VAR_8)
   FUNC_14(VAR_12, VAR_13);
  else if (VAR_3)
   FUNC_1(VAR_12, VAR_13);
  else if (VAR_4)
   FUNC_3(VAR_12, VAR_13);
  else
   FUNC_8(VAR_12, VAR_13);
 } else {
  FUNC_12("%s-%s", VAR_14, VAR_10);
 }
 FUNC_7(VAR_14);
 if (!VAR_1)
  FUNC_12("\n");
}
