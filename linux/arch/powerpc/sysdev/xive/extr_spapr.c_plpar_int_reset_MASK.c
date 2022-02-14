
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (long) ;
 long FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (char*,long) ;

__attribute__((used)) static long FUNC_3(unsigned long VAR_1)
{
 long VAR_2;

 do {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 } while (FUNC_0(VAR_2));

 if (VAR_2)
  FUNC_2("H_INT_RESET failed %ld\n", VAR_2);

 return VAR_2;
}
