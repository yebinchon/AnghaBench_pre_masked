
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frequency; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,int,unsigned int,...) ;
 int FUNC_6 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_9(unsigned int VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12 = VAR_0;
 unsigned int VAR_13 = 0;

 if (VAR_6 > 0x1)
  return;


 FUNC_7();
 FUNC_3(VAR_11);

 VAR_8 = (VAR_4 & 0xffffff00) | (VAR_2 & 0xff);

 FUNC_5("trying to set frequency to state %u "
  "with command %x at port %x\n",
  VAR_6, VAR_8, VAR_3);

 do {
  if (VAR_13) {
   FUNC_5("retry %u, previous result %u, waiting...\n",
     VAR_13, VAR_7);
   FUNC_1();
   FUNC_4(VAR_13 * 50);
   FUNC_0();
  }
  VAR_13++;
  __asm__ __volatile__(
   "push %%ebp\n"
   "out %%al, (%%dx)\n"
   "pop %%ebp"
   : "=b" (VAR_9), "=D" (VAR_7),
     "=c" (VAR_10), "=a" (VAR_10),
     "=d" (VAR_10), "=S" (VAR_10)
   : "a" (VAR_8), "b" (VAR_12), "c" (VAR_6),
     "d" (VAR_3), "S" (0), "D" (0)
   );
 } while ((VAR_9 != VAR_6) && (VAR_13 <= VAR_1));


 FUNC_2(VAR_11);
 FUNC_8();

 if (VAR_9 == VAR_6)
  FUNC_5("change to %u MHz succeeded after %u tries "
   "with result %u\n",
   (VAR_5[VAR_9].frequency / 1000),
   VAR_13, VAR_7);
 else
  FUNC_6("change to state %u failed with new_state %u and result %u\n",
         VAR_6, VAR_9, VAR_7);

 return;
}
