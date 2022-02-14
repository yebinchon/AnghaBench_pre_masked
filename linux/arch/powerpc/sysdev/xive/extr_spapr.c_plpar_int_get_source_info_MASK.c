
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (long) ;
 long FUNC_1 (int ,unsigned long*,unsigned long,unsigned long) ;
 int FUNC_2 (char*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (char*,unsigned long,long) ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_2,
          unsigned long VAR_3,
          unsigned long *VAR_4,
          unsigned long *VAR_5,
          unsigned long *VAR_6,
          unsigned long *VAR_7)
{
 unsigned long VAR_8[VAR_1];
 long VAR_9;

 do {
  VAR_9 = FUNC_1(VAR_0, VAR_8, VAR_2, VAR_3);
 } while (FUNC_0(VAR_9));

 if (VAR_9) {
  FUNC_3("H_INT_GET_SOURCE_INFO lisn=%ld failed %ld\n", VAR_3, VAR_9);
  return VAR_9;
 }

 *VAR_4 = VAR_8[0];
 *VAR_5 = VAR_8[1];
 *VAR_6 = VAR_8[2];
 *VAR_7 = VAR_8[3];

 FUNC_2("H_INT_GET_SOURCE_INFO flags=%lx eoi=%lx trig=%lx shift=%lx\n",
  VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3]);

 return 0;
}
