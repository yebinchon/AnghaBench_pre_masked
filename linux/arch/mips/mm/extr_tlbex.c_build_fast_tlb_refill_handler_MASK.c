
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uasm_reloc {int dummy; } ;
struct uasm_label {int dummy; } ;
struct mips_huge_tlb_info {int huge_pte; int restore_scratch; int need_reload_pte; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,unsigned int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int **,unsigned int,unsigned int,int) ;
 int FUNC_2 (int **,unsigned int,int const,unsigned int) ;
 int FUNC_3 (int **,int const,int,unsigned int) ;
 int FUNC_4 (int **,int const,int const,unsigned int) ;
 int FUNC_5 (int **,int const,int ,...) ;
 int FUNC_6 (int **,int const,int ,...) ;
 int FUNC_7 (int **,int const,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int **,unsigned int) ;
 int FUNC_9 (int **,struct uasm_label**,struct uasm_reloc**,int ) ;
 int FUNC_10 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int ) ;
 int VAR_20 ;
 int FUNC_13 (int **,int const,int const,int) ;
 int FUNC_14 (int **,unsigned int,unsigned int,int const) ;
 int FUNC_15 (int **,unsigned int,int ,int ,int) ;
 int FUNC_16 (int **,unsigned int,unsigned int,int) ;
 int FUNC_17 (int **,int const,unsigned int,int) ;
 int FUNC_18 (int **) ;
 int FUNC_19 (int **) ;
 int FUNC_20 (int **,unsigned int,int ,unsigned int) ;
 int FUNC_21 (int **) ;
 int FUNC_22 (int **,unsigned int,unsigned int,int) ;
 int FUNC_23 (int **,struct uasm_reloc**,int const,int,int ) ;
 int FUNC_24 (int **,struct uasm_reloc**,unsigned int,int ) ;
 int FUNC_25 (int **,struct uasm_reloc**,int const,int ) ;
 int FUNC_26 (struct uasm_label**,int *) ;
 int FUNC_27 (struct uasm_label**,int *) ;
 scalar_t__ FUNC_28 () ;

__attribute__((used)) static struct mips_huge_tlb_info
FUNC_29 (u32 **VAR_21, struct uasm_label **VAR_22,
          struct uasm_reloc **VAR_23, unsigned int VAR_24,
          unsigned int VAR_25, int VAR_26)
{
 struct mips_huge_tlb_info VAR_27;
 unsigned int VAR_28, VAR_29;
 int VAR_30 = 0;
 const int VAR_31 = 1;

 VAR_27.huge_pte = VAR_31;
 VAR_27.restore_scratch = 0;
 VAR_27.need_reload_pte = 0;

 if (VAR_15) {
  FUNC_5(VAR_21, VAR_24, VAR_0);

  if (VAR_19 != -1)
   FUNC_5(VAR_21, VAR_25, FUNC_10(), VAR_19);
  else
   FUNC_5(VAR_21, VAR_25, VAR_1);

  if (VAR_26 >= 0)
   FUNC_6(VAR_21, VAR_31, FUNC_10(), VAR_26);
  else
   FUNC_7(VAR_21, VAR_31, FUNC_12(0), 0);

  FUNC_17(VAR_21, VAR_31, VAR_24,
     VAR_6 + VAR_7 + VAR_5 - 3);
  FUNC_25(VAR_21, VAR_23, VAR_31, VAR_18);

  if (VAR_19 == -1) {
   VAR_30 = 1;

   FUNC_15(VAR_21, VAR_25, 0, 0, 23);
  }
 } else {
  if (VAR_19 != -1)
   FUNC_5(VAR_21, VAR_25, FUNC_10(), VAR_19);
  else
   FUNC_5(VAR_21, VAR_25, VAR_1);

  FUNC_5(VAR_21, VAR_24, VAR_0);

  if (VAR_26 >= 0)
   FUNC_6(VAR_21, VAR_31, FUNC_10(), VAR_26);
  else
   FUNC_7(VAR_21, VAR_31, FUNC_12(0), 0);

  if (VAR_19 == -1)

   FUNC_15(VAR_21, VAR_25, 0, 0, 23);

  FUNC_24(VAR_21, VAR_23, VAR_24, VAR_18);
 }

 if (VAR_19 == -1) {
  VAR_30 = 1;

  FUNC_22(VAR_21, VAR_25, VAR_25, 0x540);
  FUNC_16(VAR_21, VAR_25, VAR_25, 11);
 }







 if (!VAR_30)

  FUNC_17(VAR_21, VAR_31, VAR_24, VAR_6 - 3);

 FUNC_27(VAR_22, *VAR_21);







 if (VAR_30)

  FUNC_17(VAR_21, VAR_31, VAR_24, VAR_6 - 3);




 FUNC_13(VAR_21, VAR_31, VAR_31, (VAR_9 - 1) << 3);

 if (FUNC_28()) {
  FUNC_4(VAR_21, VAR_25, VAR_31, VAR_25);
 } else {
  FUNC_14(VAR_21, VAR_25, VAR_25, VAR_31);
  FUNC_20(VAR_21, VAR_25, 0, VAR_25);
 }



 FUNC_17(VAR_21, VAR_31, VAR_24, VAR_12 - 3);
 FUNC_13(VAR_21, VAR_31, VAR_31, (VAR_11 - 1) << 3);

 if (FUNC_28()) {
  FUNC_4(VAR_21, VAR_25, VAR_31, VAR_25);
 } else {
  FUNC_14(VAR_21, VAR_25, VAR_25, VAR_31);
  FUNC_3(VAR_21, VAR_25, 0, VAR_25);
 }






 FUNC_17(VAR_21, VAR_31, VAR_24, VAR_8 - 3);
 FUNC_13(VAR_21, VAR_31, VAR_31, (VAR_10 - 1) << 3);
 FUNC_0(VAR_21, VAR_24);

 if (FUNC_28()) {
  FUNC_4(VAR_21, VAR_31, VAR_31, VAR_25);
 } else {
  FUNC_14(VAR_21, VAR_25, VAR_25, VAR_31);
  FUNC_3(VAR_21, VAR_31, 0, VAR_25);
 }


 FUNC_8(VAR_21, VAR_24);
 if (FUNC_28()) {
  VAR_28 = VAR_25;
  VAR_29 = VAR_24;
  FUNC_4(VAR_21, VAR_28, VAR_31, VAR_24);
  FUNC_1(VAR_21, VAR_24, VAR_24, sizeof(pte_t));
  FUNC_4(VAR_21, VAR_29, VAR_31, VAR_24);
 } else {
  FUNC_2(VAR_21, VAR_25, VAR_31, VAR_24);
  VAR_28 = VAR_24;
  VAR_29 = VAR_25;
  FUNC_3(VAR_21, VAR_28, 0, VAR_25);
  FUNC_3(VAR_21, VAR_29, sizeof(pte_t), VAR_25);
 }
 if (VAR_16) {
  FUNC_16(VAR_21, VAR_28, VAR_28, FUNC_11(VAR_13));
  FUNC_6(VAR_21, VAR_28, VAR_2);
  FUNC_16(VAR_21, VAR_29, VAR_29, FUNC_11(VAR_13));
 } else {
  FUNC_17(VAR_21, VAR_28, VAR_28, FUNC_11(VAR_13));
  FUNC_6(VAR_21, VAR_28, VAR_2);
  FUNC_17(VAR_21, VAR_29, VAR_29, FUNC_11(VAR_13));
 }
 FUNC_6(VAR_21, VAR_29, VAR_3);

 if (VAR_26 >= 0) {
  FUNC_18(VAR_21);
  FUNC_5(VAR_21, VAR_31, FUNC_10(), VAR_26);
  FUNC_9(VAR_21, VAR_22, VAR_23, VAR_20);
  FUNC_26(VAR_22, *VAR_21);
  VAR_27.restore_scratch = 1;
 } else if (VAR_5 == 14 || VAR_5 == 13) {
  FUNC_9(VAR_21, VAR_22, VAR_23, VAR_20);
  FUNC_26(VAR_22, *VAR_21);
  FUNC_3(VAR_21, VAR_31, FUNC_12(0), 0);
 } else {
  FUNC_3(VAR_21, VAR_31, FUNC_12(0), 0);
  FUNC_9(VAR_21, VAR_22, VAR_23, VAR_20);
  FUNC_26(VAR_22, *VAR_21);
  VAR_27.restore_scratch = 1;
 }

 FUNC_19(VAR_21);

 return VAR_27;
}
