
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(unsigned int *VAR_7, unsigned int *VAR_8)
{
 u32 VAR_9, VAR_10 = 0, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = VAR_2;

 if (!(VAR_3.event & 0xFFFF)) {
  FUNC_0("bug #1422 -- can't read freqs from BIOS\n");
  return -VAR_1;
 }

 VAR_9 = (VAR_6 & 0xffffff00) | (VAR_4 & 0xff);

 FUNC_0("trying to determine frequencies with command %x at port %x\n",
   VAR_9, VAR_5);

 __asm__ __volatile__(
  "push %%ebp\n"
  "out %%al, (%%dx)\n"
  "pop %%ebp"
  : "=a" (VAR_10),
    "=b" (VAR_12),
    "=c" (VAR_13),
    "=d" (VAR_15), "=D" (VAR_11), "=S" (VAR_14)
  : "a" (VAR_9),
    "b" (VAR_16),
    "c" (VAR_15),
    "d" (VAR_5), "S" (0), "D" (0)
 );

 FUNC_0("result %x, low_freq %u, high_freq %u\n",
   VAR_10, VAR_13, VAR_12);


 if ((VAR_12 + VAR_13) < 600)
  return -VAR_0;

 *VAR_8 = VAR_12 * 1000;
 *VAR_7 = VAR_13 * 1000;

 return VAR_10;
}
