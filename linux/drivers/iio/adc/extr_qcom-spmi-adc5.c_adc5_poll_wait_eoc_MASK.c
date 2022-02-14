
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adc5_chip {int dummy; } ;
typedef int status1 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adc5_chip*,int ,int *,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct adc5_chip *VAR_7)
{
 unsigned int VAR_8, VAR_9 = VAR_2;
 u8 VAR_10;
 int VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_11 = FUNC_0(VAR_7, VAR_3, &VAR_10,
       sizeof(VAR_10));
  if (VAR_11)
   return VAR_11;

  VAR_10 &= VAR_5;
  if (VAR_10 == VAR_4)
   return 0;

  FUNC_1(VAR_1, VAR_0);
 }

 return -VAR_6;
}
