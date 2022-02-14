
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {scalar_t__ evca; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hidma_lldev*,int) ;
 int FUNC_1 (scalar_t__) ;

irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct hidma_lldev *VAR_5 = VAR_4;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_1(VAR_5->evca + VAR_1);
 VAR_7 = FUNC_1(VAR_5->evca + VAR_0);
 VAR_8 = VAR_6 & VAR_7;

 while (VAR_8) {
  FUNC_0(VAR_5, VAR_8);





  VAR_6 = FUNC_1(VAR_5->evca + VAR_1);
  VAR_7 = FUNC_1(VAR_5->evca + VAR_0);
  VAR_8 = VAR_6 & VAR_7;
 }

 return VAR_2;
}
