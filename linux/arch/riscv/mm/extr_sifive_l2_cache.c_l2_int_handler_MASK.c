
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ,char*) ;
 int* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_18, void *VAR_19)
{
 unsigned int VAR_20, VAR_21;

 if (VAR_18 == VAR_15[VAR_2]) {
  VAR_20 = FUNC_2(VAR_16 + VAR_11);
  VAR_21 = FUNC_2(VAR_16 + VAR_12);
  FUNC_1("L2CACHE: DirError @ 0x%08X.%08X\n", VAR_20, VAR_21);

  FUNC_2(VAR_16 + VAR_10);
  FUNC_0(&VAR_17, VAR_13,
        "DirECCFix");
 }
 if (VAR_18 == VAR_15[VAR_0]) {
  VAR_20 = FUNC_2(VAR_16 + VAR_8);
  VAR_21 = FUNC_2(VAR_16 + VAR_9);
  FUNC_1("L2CACHE: DataError @ 0x%08X.%08X\n", VAR_20, VAR_21);

  FUNC_2(VAR_16 + VAR_7);
  FUNC_0(&VAR_17, VAR_13,
        "DatECCFix");
 }
 if (VAR_18 == VAR_15[VAR_1]) {
  VAR_20 = FUNC_2(VAR_16 + VAR_5);
  VAR_21 = FUNC_2(VAR_16 + VAR_6);
  FUNC_1("L2CACHE: DataFail @ 0x%08X.%08X\n", VAR_20, VAR_21);

  FUNC_2(VAR_16 + VAR_4);
  FUNC_0(&VAR_17, VAR_14,
        "DatECCFail");
 }

 return VAR_3;
}
