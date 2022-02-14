
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long frequency; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 unsigned long* VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_11)
{
 unsigned long VAR_12;
 int VAR_13;

 FUNC_1(VAR_12);


 FUNC_3(VAR_5, 0);

 FUNC_3(VAR_5, VAR_0 | 0);

 FUNC_3(VAR_5, VAR_0 |
        VAR_9[VAR_11]);


 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  unsigned long VAR_14 = FUNC_2(VAR_6);

  if ((VAR_14 & VAR_3) == 0 &&
      (((VAR_14 >> VAR_4) ^
        (VAR_9[VAR_11] >> VAR_1)) & 0x3)
      == 0)
   break;
  if (VAR_14 & VAR_2)
   break;
  FUNC_4(100);
 }

 FUNC_0(VAR_12);

 VAR_8 = VAR_11;
 VAR_10 = VAR_7[VAR_11].frequency * 1000ul;

 return 0;
}
