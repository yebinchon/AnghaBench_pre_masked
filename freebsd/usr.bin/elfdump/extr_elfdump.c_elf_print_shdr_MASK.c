
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ intmax_t ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *,void*,int ) ;
 scalar_t__ FUNC_1 (int *,void*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 scalar_t__ FUNC_4 (int *,void*,int ) ;
 scalar_t__ FUNC_5 (int *,void*,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_12 ;
 char** VAR_13 ;
 char* FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_8(Elf32_Ehdr *VAR_15, void *VAR_16)
{
 u_int64_t VAR_17;
 u_int64_t VAR_18;
 u_int64_t VAR_19;
 u_int64_t VAR_20;
 u_int64_t VAR_21;
 u_int64_t VAR_22;
 u_int64_t VAR_23;
 u_int64_t VAR_24;
 u_int64_t VAR_25;
 u_int64_t VAR_26;
 u_int64_t VAR_27;
 u_int64_t VAR_28;
 u_int64_t VAR_29;
 void *VAR_30;
 int VAR_31;

 if (VAR_16 == ((void*)0)) {
  FUNC_6(VAR_12, "\nNo section headers\n");
  return;
 }

 VAR_29 = FUNC_2(VAR_15, VAR_15, VAR_0);
 VAR_17 = FUNC_2(VAR_15, VAR_15, VAR_1);
 VAR_18 = FUNC_3(VAR_15, VAR_16);
 FUNC_6(VAR_12, "\nsection header:\n");
 for (VAR_31 = 0; (u_int64_t)VAR_31 < VAR_18; VAR_31++) {
  VAR_30 = (char *)VAR_16 + VAR_31 * VAR_17;
  VAR_19 = FUNC_5(VAR_15, VAR_30, VAR_8);
  VAR_20 = FUNC_5(VAR_15, VAR_30, VAR_11);
  VAR_21 = FUNC_5(VAR_15, VAR_30, VAR_5);
  VAR_22 = FUNC_0(VAR_15, VAR_30, VAR_2);
  VAR_23 = FUNC_1(VAR_15, VAR_30, VAR_9);
  VAR_24 = FUNC_4(VAR_15, VAR_30, VAR_10);
  VAR_25 = FUNC_5(VAR_15, VAR_30, VAR_7);
  VAR_26 = FUNC_5(VAR_15, VAR_30, VAR_6);
  VAR_27 = FUNC_4(VAR_15, VAR_30, VAR_3);
  VAR_28 = FUNC_4(VAR_15, VAR_30, VAR_4);
  FUNC_6(VAR_12, "\n");
  FUNC_6(VAR_12, "entry: %d\n", VAR_31);
  FUNC_6(VAR_12, "\tsh_name: %ld\n", VAR_14 + VAR_19);
  FUNC_6(VAR_12, "\tsh_type: %s\n", FUNC_7(VAR_29, VAR_20));
  FUNC_6(VAR_12, "\tsh_flags: %s\n", VAR_13[VAR_21 & 0x7]);
  FUNC_6(VAR_12, "\tsh_addr: %#jx\n", VAR_22);
  FUNC_6(VAR_12, "\tsh_offset: %jd\n", (intmax_t)VAR_23);
  FUNC_6(VAR_12, "\tsh_size: %jd\n", (intmax_t)VAR_24);
  FUNC_6(VAR_12, "\tsh_link: %jd\n", (intmax_t)VAR_25);
  FUNC_6(VAR_12, "\tsh_info: %jd\n", (intmax_t)VAR_26);
  FUNC_6(VAR_12, "\tsh_addralign: %jd\n", (intmax_t)VAR_27);
  FUNC_6(VAR_12, "\tsh_entsize: %jd\n", (intmax_t)VAR_28);
 }
}
