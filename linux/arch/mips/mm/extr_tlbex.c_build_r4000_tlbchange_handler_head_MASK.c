
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct work_registers {int r3; int r2; int r1; } ;
struct uasm_reloc {int dummy; } ;
struct uasm_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,int ,int ,int ) ;
 int FUNC_1 (int **,int ,int ,int ) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int **,int ,int ,scalar_t__) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int **,struct uasm_label**,struct uasm_reloc**,int ,int ) ;
 struct work_registers FUNC_6 (int **) ;
 int FUNC_7 (int **,struct uasm_reloc**,int ,int ,int ) ;
 int FUNC_8 (int **) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int **,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 (int **,int ,int ,int) ;
 int FUNC_13 (int **) ;
 int FUNC_14 (int **,int ,int ) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (int **,struct uasm_reloc**,int ,int ) ;
 int FUNC_17 (struct uasm_label**,int *) ;

__attribute__((used)) static struct work_registers
FUNC_18(u32 **VAR_8, struct uasm_label **VAR_9,
       struct uasm_reloc **VAR_10)
{
 struct work_registers VAR_11 = FUNC_6(VAR_8);




 FUNC_4(VAR_8, VAR_11.r1, VAR_11.r2);
 FUNC_2(VAR_8, VAR_11.r1, VAR_0);
 FUNC_1(VAR_8, VAR_11.r2, 0, VAR_11.r2);
 FUNC_3(VAR_8, VAR_11.r1, VAR_11.r1, VAR_2 + VAR_3 - VAR_4);
 FUNC_12(VAR_8, VAR_11.r1, VAR_11.r1, (VAR_5 - 1) << VAR_4);
 FUNC_0(VAR_8, VAR_11.r2, VAR_11.r2, VAR_11.r1);




 FUNC_10(VAR_8, VAR_11.r1, VAR_11.r2);
 if (!FUNC_11()) {
  FUNC_8(VAR_8);
  if (FUNC_9()) {

   FUNC_13(VAR_8);
   FUNC_14(VAR_8, VAR_11.r3, VAR_1);
   FUNC_16(VAR_8, VAR_10, VAR_11.r3, VAR_6);
   FUNC_15(VAR_8);
  }
 }
 return VAR_11;
}
