
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iadc_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iadc_chip*,int ,int *) ;
 int FUNC_1 (struct iadc_chip*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct iadc_chip *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11;

 VAR_9 = VAR_7 / VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_10 = FUNC_0(VAR_6, VAR_3, &VAR_11);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_11 &= VAR_5;
  if (VAR_11 == VAR_4)
   return 0;

  FUNC_2(VAR_2, VAR_1);
 }

 FUNC_1(VAR_6);

 return -VAR_0;
}
