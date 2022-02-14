
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_11)
{
 int VAR_12;

 if (VAR_11 > 3)
  return -VAR_0;


 switch (VAR_11) {
 case 2:
  VAR_12 = FUNC_3(VAR_9,
                       VAR_6,
         VAR_4, 1);
  if (VAR_12)
   return VAR_12;
  break;
 case 3:
  VAR_12 = FUNC_3(VAR_9,
                       VAR_7,
         VAR_5, 1);
  if (VAR_12)
   return VAR_12;
  break;
 }


 FUNC_4(200);

 FUNC_5(FUNC_0(VAR_8),
        VAR_10 + VAR_1 + (VAR_11 - 1) * 4);
 FUNC_5(VAR_3,
        VAR_10 + VAR_2 + (VAR_11 - 1) * 4);

 FUNC_1();
 FUNC_2();

 return 0;
}
