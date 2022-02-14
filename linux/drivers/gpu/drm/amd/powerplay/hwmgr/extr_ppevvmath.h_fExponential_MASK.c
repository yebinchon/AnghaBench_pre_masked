
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
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static fInt FUNC_9(fInt VAR_0)
{
 uint32_t VAR_1;
 bool VAR_2 = 0;

 fInt VAR_3 = FUNC_0(1);
 fInt VAR_4 = FUNC_0(0);

 fInt VAR_5 = FUNC_1(78, 10000);
 fInt VAR_6 = VAR_3;
 fInt VAR_7;

 static const uint32_t VAR_8[11] = {55452, 27726, 13863, 6931, 4055, 2231, 1178, 606, 308, 155, 78};
 static const uint32_t VAR_9[11] = {2560000, 160000, 40000, 20000, 15000, 12500, 11250, 10625, 10313, 10156, 10078};

 if (FUNC_3(VAR_4, VAR_0)) {
  VAR_0 = FUNC_7(VAR_0);
  VAR_2 = 1;
 }

 while (FUNC_3(VAR_0, VAR_5)) {
  for (VAR_1 = 0; VAR_1 < 11; VAR_1++) {
   if (FUNC_3(VAR_0, FUNC_2(VAR_8[VAR_1], 10000))) {
    VAR_0 = FUNC_8(VAR_0, FUNC_2(VAR_8[VAR_1], 10000));
    VAR_6 = FUNC_6(VAR_6, FUNC_2(VAR_9[VAR_1], 10000));
   }
  }
 }

 VAR_7 = FUNC_4(VAR_3, VAR_0);

 VAR_6 = FUNC_6(VAR_6, VAR_7);

 if (VAR_2)
  VAR_6 = FUNC_5(VAR_3, VAR_6);

 return VAR_6;
}
