
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int * state; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 static unsigned char VAR_6 = 1;
 unsigned char VAR_7;
 unsigned VAR_8, VAR_9 = VAR_0;
 const char * VAR_10 = VAR_3;
 char * VAR_11 = (char *) &VAR_2.state[4];

 if (!FUNC_0(&VAR_2.lock, VAR_5))
  return 0;
 if (VAR_1 != 0) {
  FUNC_1(&VAR_2.lock, VAR_5);
  return 0;
 }
 if (VAR_4 > VAR_9)
  VAR_9 = VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_9 ; VAR_8++) {
  VAR_7 = VAR_6;
  VAR_6 >>= 1;
  if (VAR_7 & 1)
   VAR_6 ^= 0xE1;
  VAR_7 = VAR_11[VAR_8 % VAR_0];
  VAR_11[VAR_8 % VAR_0] ^= VAR_10[VAR_8 % VAR_4] ^ VAR_6;
  VAR_6 += (VAR_7 << 3) | (VAR_7 >> 5);
 }
 FUNC_1(&VAR_2.lock, VAR_5);
 return 1;
}
