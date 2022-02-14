
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u32 ;
struct ipu_pre {unsigned int last_bufaddr; unsigned short safe_window_end; scalar_t__ regs; int dev; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int) ;
 unsigned short FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

void FUNC_5(struct ipu_pre *VAR_7, unsigned int VAR_8)
{
 unsigned long VAR_9 = VAR_6 + FUNC_1(5);
 unsigned short VAR_10;
 u32 VAR_11;

 if (VAR_8 == VAR_7->last_bufaddr)
  return;

 FUNC_4(VAR_8, VAR_7->regs + VAR_2);
 VAR_7->last_bufaddr = VAR_8;

 do {
  if (FUNC_3(VAR_6, VAR_9)) {
   FUNC_0(VAR_7->dev, "timeout waiting for PRE safe window\n");
   return;
  }

  VAR_11 = FUNC_2(VAR_7->regs + VAR_3);
  VAR_10 =
   (VAR_11 >> VAR_5) &
   VAR_4;
 } while (VAR_10 == 0 || VAR_10 >= VAR_7->safe_window_end);

 FUNC_4(VAR_0, VAR_7->regs + VAR_1);
}
