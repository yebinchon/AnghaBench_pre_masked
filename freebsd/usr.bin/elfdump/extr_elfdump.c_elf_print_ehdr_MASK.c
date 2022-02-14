
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int64_t ;
typedef char* intmax_t ;
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
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_0 (size_t) ;
 char** VAR_14 ;
 char** VAR_15 ;
 char** VAR_16 ;
 char** VAR_17 ;
 char** VAR_18 ;
 size_t FUNC_1 (int *,int *,int ) ;
 size_t FUNC_2 (int *,int *,int ) ;
 size_t FUNC_3 (int *,int *,int ) ;
 size_t FUNC_4 (int *,int *,int ) ;
 size_t FUNC_5 (int *,void*) ;
 size_t FUNC_6 (int *,void*) ;
 size_t FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_9(Elf32_Ehdr *VAR_20, void *VAR_21)
{
 u_int64_t VAR_22;
 u_int64_t VAR_23;
 u_int64_t VAR_24;
 u_int64_t VAR_25;
 u_int64_t VAR_26;
 u_int64_t VAR_27;
 u_int64_t VAR_28;
 u_int64_t VAR_29;
 u_int64_t VAR_30;
 u_int64_t VAR_31;
 u_int64_t VAR_32;
 u_int64_t VAR_33;
 u_int64_t VAR_34;
 u_int64_t VAR_35;
 u_int64_t VAR_36;
 u_int64_t VAR_37;

 VAR_22 = FUNC_2(VAR_20, VAR_20, VAR_0);
 VAR_23 = FUNC_2(VAR_20, VAR_20, VAR_1);
 VAR_24 = FUNC_2(VAR_20, VAR_20, VAR_6);
 VAR_25 = FUNC_4(VAR_20, VAR_20, VAR_12);
 VAR_26 = FUNC_4(VAR_20, VAR_20, VAR_5);
 VAR_27 = FUNC_7(VAR_20, VAR_20, VAR_13);
 VAR_28 = FUNC_1(VAR_20, VAR_20, VAR_3);
 VAR_29 = FUNC_3(VAR_20, VAR_20, VAR_9);
 VAR_30 = FUNC_3(VAR_20, VAR_20, VAR_11);
 VAR_31 = FUNC_7(VAR_20, VAR_20, VAR_4);
 VAR_32 = FUNC_4(VAR_20, VAR_20, VAR_2);
 VAR_33 = FUNC_4(VAR_20, VAR_20, VAR_7);
 VAR_34 = FUNC_4(VAR_20, VAR_20, VAR_8);
 VAR_35 = FUNC_4(VAR_20, VAR_20, VAR_10);
 FUNC_8(VAR_19, "\nelf header:\n");
 FUNC_8(VAR_19, "\n");
 FUNC_8(VAR_19, "\te_ident: %s %s %s\n", VAR_16[VAR_22], VAR_17[VAR_23],
     VAR_15[VAR_24]);
 FUNC_8(VAR_19, "\te_type: %s\n", VAR_14[VAR_25]);
 FUNC_8(VAR_19, "\te_machine: %s\n", FUNC_0(VAR_26));
 FUNC_8(VAR_19, "\te_version: %s\n", VAR_18[VAR_27]);
 FUNC_8(VAR_19, "\te_entry: %s\n", (intmax_t)VAR_28);
 FUNC_8(VAR_19, "\te_phoff: %s\n", (intmax_t)VAR_29);
 FUNC_8(VAR_19, "\te_shoff: %s\n", (intmax_t)VAR_30);
 FUNC_8(VAR_19, "\te_flags: %s\n", (intmax_t)VAR_31);
 FUNC_8(VAR_19, "\te_ehsize: %s\n", (intmax_t)VAR_32);
 FUNC_8(VAR_19, "\te_phentsize: %s\n", (intmax_t)VAR_33);
 FUNC_8(VAR_19, "\te_phnum: %s\n", (intmax_t)VAR_34);
 FUNC_8(VAR_19, "\te_shentsize: %s\n", (intmax_t)VAR_35);
 if (VAR_21 != ((void*)0)) {
  VAR_36 = FUNC_5(VAR_20, VAR_21);
  VAR_37 = FUNC_6(VAR_20, VAR_21);
  FUNC_8(VAR_19, "\te_shnum: %s\n", (intmax_t)VAR_36);
  FUNC_8(VAR_19, "\te_shstrndx: %s\n", (intmax_t)VAR_37);
 }
}
