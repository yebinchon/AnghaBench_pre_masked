
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s64 ;
struct TYPE_2__ {long timeout; } ;


 long FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_5, s64 VAR_6, long VAR_7)
{
 long VAR_8;


 if (VAR_6 < 0 || VAR_7 < 0)
  return -VAR_0;
 if (VAR_7 > 999999)
  VAR_7 = 999999;

 if (VAR_6 >= VAR_3 - 1) {
  VAR_8 = VAR_2;
 } else {
  VAR_8 = FUNC_0(VAR_7, 1000000/VAR_1);
  VAR_8 += VAR_6 * (long) VAR_1;
 }

 if (VAR_8 <= 0) {
  return -VAR_0;
 }
 VAR_4[VAR_5].timeout = VAR_8;
 return 0;
}
