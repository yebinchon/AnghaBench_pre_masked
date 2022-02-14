
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fInt ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static fInt FUNC_6(fInt VAR_0)
{
 uint32_t VAR_1;
 fInt VAR_2 = FUNC_1(8, 1000);
 fInt VAR_3 = FUNC_0(-1);
 fInt VAR_4 = FUNC_0(0);
 fInt VAR_5;

 static const uint32_t VAR_6[10] = {160000, 40000, 20000, 15000, 12500, 11250, 10625, 10313, 10156, 10078};
 static const uint32_t VAR_7[10] = {27726, 13863, 6931, 4055, 2231, 1178, 606, 308, 155, 78};

 while (FUNC_3(FUNC_4(VAR_0, VAR_3), VAR_2)) {
  for (VAR_1 = 0; VAR_1 < 10; VAR_1++) {
   if (FUNC_3(VAR_0, FUNC_2(VAR_6[VAR_1], 10000))) {
    VAR_0 = FUNC_5(VAR_0, FUNC_2(VAR_6[VAR_1], 10000));
    VAR_4 = FUNC_4(VAR_4, FUNC_2(VAR_7[VAR_1], 10000));
   }
  }
 }

 VAR_5 = FUNC_4(VAR_3, VAR_0);

 return (FUNC_4(VAR_4, VAR_5));
}
