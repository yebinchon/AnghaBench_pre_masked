
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (long) ;
 long FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (char*,unsigned long,long) ;

__attribute__((used)) static long FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 long VAR_3;

 do {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 } while (FUNC_0(VAR_3));

 if (VAR_3) {
  FUNC_2("H_INT_SYNC lisn=%ld returned %ld\n", VAR_2, VAR_3);
  return VAR_3;
 }

 return 0;
}
