
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,unsigned int) ;

int FUNC_9(int VAR_0, uint64_t *VAR_1, int VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;
 uint32_t VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;


 VAR_3 = FUNC_7(0);
 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  if (VAR_12 + 1 >= VAR_2)
   break;
  if (FUNC_6()) {
   VAR_7 = FUNC_0(VAR_10);
   VAR_8 = FUNC_1(VAR_10);
   VAR_9 = FUNC_2(VAR_10);
  } else {
   VAR_7 = FUNC_3(VAR_10);
   VAR_8 = FUNC_4(VAR_10);
   VAR_9 = FUNC_5(VAR_10);
  }
  if (VAR_0 >= 0) {

   VAR_6 = FUNC_8(VAR_3, VAR_9);
   VAR_11 = (VAR_6 >> 1) & 0x3;
   if (VAR_11 != VAR_0)
    continue;
  }
  VAR_6 = FUNC_8(VAR_3, VAR_7);
  VAR_6 = (VAR_6 >> 12) & 0xfffff;
  VAR_4 = (uint64_t) VAR_6 << 20;
  VAR_6 = FUNC_8(VAR_3, VAR_8);
  VAR_6 = (VAR_6 >> 12) & 0xfffff;
  if (VAR_6 == 0)
   continue;
  VAR_5 = ((uint64_t)VAR_6 + 1) << 20;
  VAR_1[VAR_12] = VAR_4;
  VAR_1[VAR_12 + 1] = VAR_5;
  VAR_12 += 2;
 }
 return VAR_12;
}
