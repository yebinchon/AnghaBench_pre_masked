
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int*,unsigned long*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static unsigned long FUNC_7(void)
{
 int VAR_2;
 u64 VAR_3, VAR_4;
 unsigned long VAR_5, VAR_6;

 if (!FUNC_1())
  return 0;


 FUNC_3((FUNC_2(0x61) & ~0x02) | 0x01, 0x61);
 FUNC_3(0xb0, 0x43);


 FUNC_3(0xff, 0x42);
 FUNC_3(0xff, 0x42);







 FUNC_5(0);

 if (FUNC_4(0xff, &VAR_3, &VAR_5)) {
  for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
   if (!FUNC_4(0xff-VAR_2, &VAR_4, &VAR_6))
    break;

   VAR_4 -= VAR_3;





   if (VAR_2 == 1 &&
       VAR_5 + VAR_6 >= (VAR_4 * VAR_0) >> 11)
    return 0;




   if (VAR_5+VAR_6 >= VAR_4 >> 11)
    continue;
   if (!FUNC_5(0xfe - VAR_2))
    break;
   goto success;
  }
 }
 FUNC_6("Fast TSC calibration failed\n");
 return 0;

success:
 VAR_4 *= VAR_1;
 FUNC_0(VAR_4, VAR_2*256*1000);
 FUNC_6("Fast TSC calibration using PIT\n");
 return VAR_4;
}
