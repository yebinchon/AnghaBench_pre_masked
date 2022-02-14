
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pardevice {long timeout; } ;


 int VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct pardevice *VAR_2, long VAR_3, int VAR_4)
{
 long VAR_5;

 if ((VAR_3 < 0) || (VAR_4 < 0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4);
 VAR_5 += VAR_3 * VAR_1;
 if (VAR_5 <= 0)
  return -VAR_0;

 VAR_2->timeout = VAR_5;
 return 0;
}
