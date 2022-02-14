
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int,int ,int ) ;

int
FUNC_4(int VAR_1, uint64_t VAR_2, uint32_t VAR_3)
{
 uint64_t VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1();
 VAR_5 = FUNC_0(VAR_1, VAR_3);


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_2(VAR_7, &VAR_4, &VAR_6);
  if (VAR_5 == VAR_6 && VAR_2 == VAR_4) {
   FUNC_3(VAR_7, 0, 0);
   return (0);
  }
 }

 return (VAR_0);
}
