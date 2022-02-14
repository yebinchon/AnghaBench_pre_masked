
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(uint64_t VAR_5, int VAR_6, int VAR_7)
{
 uint32_t VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = (1 << VAR_7);


 if (!FUNC_1()) {
  VAR_9 = FUNC_2(VAR_5, VAR_2);
  VAR_9 &= ~VAR_8;
  FUNC_3(VAR_5, VAR_2, VAR_9);
 }


 if (FUNC_0()) {
  VAR_9 = FUNC_2(VAR_5, VAR_0);
  VAR_9 &= ~VAR_8;
  FUNC_3(VAR_5, VAR_0, VAR_9);
 }


 VAR_11 = FUNC_0() ? VAR_1 : VAR_4;
 VAR_9 = FUNC_2(VAR_5, VAR_11);
 VAR_9 &= ~VAR_8;
 FUNC_3(VAR_5, VAR_11, VAR_9);


 if (FUNC_0())
  return 1;


 VAR_10 = 100000;
 do {
  VAR_9 = FUNC_2(VAR_5, VAR_3);
 } while ((VAR_9 & VAR_8) != 0 && --VAR_10 > 0);

 return VAR_10 != 0;
}
