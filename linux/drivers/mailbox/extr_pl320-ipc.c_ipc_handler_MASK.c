
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int *,int,int*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9[7];

 VAR_8 = FUNC_6(VAR_3 + FUNC_0(1));
 if (VAR_8 & FUNC_2(VAR_1)) {
  FUNC_7(0, VAR_3 + FUNC_1(VAR_1));
  FUNC_5(&VAR_4);
 }
 if (VAR_8 & FUNC_2(VAR_0)) {
  FUNC_3(VAR_0, VAR_9);
  FUNC_4(&VAR_5, VAR_9[0], VAR_9 + 1);
  FUNC_7(2, VAR_3 + FUNC_1(VAR_0));
 }

 return VAR_2;
}
