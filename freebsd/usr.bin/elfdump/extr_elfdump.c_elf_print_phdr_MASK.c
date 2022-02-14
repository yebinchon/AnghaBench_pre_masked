
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
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
 scalar_t__ FUNC_0 (int *,void*,int ) ;
 scalar_t__ FUNC_1 (int *,void*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,void*,int ) ;
 scalar_t__ FUNC_4 (int *,void*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_10 ;
 char** VAR_11 ;
 char** VAR_12 ;

__attribute__((used)) static void
FUNC_6(Elf32_Ehdr *VAR_13, void *VAR_14)
{
 u_int64_t VAR_15;
 u_int64_t VAR_16;
 u_int64_t VAR_17;
 u_int64_t VAR_18;
 u_int64_t VAR_19;
 u_int64_t VAR_20;
 u_int64_t VAR_21;
 u_int64_t VAR_22;
 u_int64_t VAR_23;
 u_int64_t VAR_24;
 void *VAR_25;
 int VAR_26;

 VAR_15 = FUNC_2(VAR_13, VAR_13, VAR_0);
 VAR_16 = FUNC_2(VAR_13, VAR_13, VAR_1);
 FUNC_5(VAR_10, "\nprogram header:\n");
 for (VAR_26 = 0; (u_int64_t)VAR_26 < VAR_16; VAR_26++) {
  VAR_25 = (char *)VAR_14 + VAR_26 * VAR_15;
  VAR_17 = FUNC_4(VAR_13, VAR_25, VAR_8);
  VAR_18 = FUNC_1(VAR_13, VAR_25, VAR_6);
  VAR_19 = FUNC_0(VAR_13, VAR_25, VAR_9);
  VAR_20 = FUNC_0(VAR_13, VAR_25, VAR_7);
  VAR_21 = FUNC_3(VAR_13, VAR_25, VAR_3);
  VAR_22 = FUNC_3(VAR_13, VAR_25, VAR_5);
  VAR_23 = FUNC_4(VAR_13, VAR_25, VAR_4);
  VAR_24 = FUNC_3(VAR_13, VAR_25, VAR_2);
  FUNC_5(VAR_10, "\n");
  FUNC_5(VAR_10, "entry: %d\n", VAR_26);
  FUNC_5(VAR_10, "\tp_type: %s\n", VAR_12[VAR_17 & 0x7]);
  FUNC_5(VAR_10, "\tp_offset: %s\n", (intmax_t)VAR_18);
  FUNC_5(VAR_10, "\tp_vaddr: %s\n", (intmax_t)VAR_19);
  FUNC_5(VAR_10, "\tp_paddr: %s\n", (intmax_t)VAR_20);
  FUNC_5(VAR_10, "\tp_filesz: %s\n", (intmax_t)VAR_21);
  FUNC_5(VAR_10, "\tp_memsz: %s\n", (intmax_t)VAR_22);
  FUNC_5(VAR_10, "\tp_flags: %s\n", VAR_11[VAR_23]);
  FUNC_5(VAR_10, "\tp_align: %s\n", (intmax_t)VAR_24);
 }
}
