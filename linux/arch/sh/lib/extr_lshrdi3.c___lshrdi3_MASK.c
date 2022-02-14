
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int word_type ;
struct TYPE_3__ {unsigned int high; unsigned int low; } ;
struct TYPE_4__ {long long ll; TYPE_1__ s; } ;
typedef TYPE_2__ DWunion ;



long long FUNC_0(long long VAR_0, word_type VAR_1)
{
 DWunion VAR_2, VAR_3;
 word_type VAR_4;

 if (VAR_1 == 0)
  return VAR_0;

 VAR_2.ll = VAR_0;
 VAR_4 = 32 - VAR_1;

 if (VAR_4 <= 0) {
  VAR_3.s.high = 0;
  VAR_3.s.low = (unsigned int) VAR_2.s.high >> -VAR_4;
 } else {
  const unsigned int VAR_5 = (unsigned int) VAR_2.s.high << VAR_4;

  VAR_3.s.high = (unsigned int) VAR_2.s.high >> VAR_1;
  VAR_3.s.low = ((unsigned int) VAR_2.s.low >> VAR_1) | VAR_5;
 }

 return VAR_3.ll;
}
