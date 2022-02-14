
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (unsigned long,unsigned long*,int) ;
 unsigned long* FUNC_7 (struct pt_regs*,unsigned long) ;
 int FUNC_8 (void*,unsigned long,int) ;

__attribute__((used)) static inline int FUNC_9(unsigned long VAR_2, struct pt_regs *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12, VAR_13,
     VAR_14 = 0;
 switch ((VAR_2 >> 9) & 0x3F) {

 case 0x12:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 1;
  VAR_7 = 2;
  VAR_8 = 3;
  VAR_9 = 3;
  break;
 case 0x10:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 1;
  VAR_7 = 4;
  VAR_8 = 3;
  VAR_9 = 3;
  break;
 case 0x11:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 1;
  VAR_7 = 4;
  VAR_8 = 3;
  VAR_9 = 3;
  break;
 case 0x1A:
  VAR_4 = 0;
  VAR_5 = 1;
  VAR_6 = 1;
  VAR_7 = 4;
  VAR_8 = 5;
  VAR_9 = 4;
  break;
 case 0x16:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 0;
  VAR_7 = 2;
  VAR_8 = 3;
  VAR_9 = 3;
  break;
 case 0x14:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 0;
  VAR_7 = 4;
  VAR_8 = 3;
  VAR_9 = 3;
  break;
 case 0x15:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 0;
  VAR_7 = 4;
  VAR_8 = 3;
  VAR_9 = 3;
  break;
 case 0x1B:
  VAR_4 = 0;
  VAR_5 = 1;
  VAR_6 = 0;
  VAR_7 = 4;
  VAR_8 = 5;
  VAR_9 = 4;
  break;

 default:
  return -VAR_1;
 }

 if (VAR_8 == 3) {
  VAR_10 = *FUNC_7(VAR_3, FUNC_1(VAR_2));
  VAR_12 = FUNC_1(VAR_2);
 } else {
  VAR_10 = *FUNC_7(VAR_3, FUNC_2(VAR_2));
  VAR_12 = FUNC_2(VAR_2);
 }

 if (VAR_9 == 3)
  VAR_13 = FUNC_3(VAR_2);
 else
  VAR_13 = FUNC_4(VAR_2);

 if (VAR_4)
  VAR_14 = FUNC_0(VAR_2) * VAR_7;

 if (VAR_5)
  VAR_10 += VAR_14;

 if (VAR_6) {
  if (!FUNC_5((void *)VAR_10, VAR_7))
   return -VAR_0;

  FUNC_6(VAR_10, &VAR_11, VAR_7);
  *FUNC_7(VAR_3, VAR_13) = VAR_11;
 } else {
  if (!FUNC_5((void *)VAR_10, VAR_7))
   return -VAR_0;
  VAR_11 = *FUNC_7(VAR_3, VAR_13);
  FUNC_8((void *)VAR_10, VAR_11, VAR_7);
 }

 if (!VAR_5)
  *FUNC_7(VAR_3, VAR_12) = VAR_10 + VAR_14;
 VAR_3->ipc += 2;

 return 0;
fault:
 return -VAR_0;
}
