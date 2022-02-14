
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_9, void *VAR_10)
{
 int VAR_11;






 VAR_11 = FUNC_0(VAR_8, 1, ~(VAR_7 |
         VAR_6));
 VAR_11 += FUNC_0(VAR_0, 1, ~0);
 VAR_11 += FUNC_0(VAR_4, 1, ~0);
 if (FUNC_1() > VAR_5) {
  VAR_11 += FUNC_0(VAR_0, 3, ~0);
  VAR_11 += FUNC_0(VAR_3, 1, ~0);
 }

 return VAR_11 ? VAR_1 : VAR_2;
}
