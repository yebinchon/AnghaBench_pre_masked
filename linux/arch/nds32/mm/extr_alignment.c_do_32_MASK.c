
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (void*,int) ;
 int FUNC_7 (unsigned long,unsigned long*,int) ;
 unsigned long* FUNC_8 (struct pt_regs*,int ) ;
 int FUNC_9 (void*,unsigned long,int) ;
 unsigned long FUNC_10 (unsigned long,int) ;

__attribute__((used)) static inline int FUNC_11(unsigned long VAR_2, struct pt_regs *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;

 VAR_9 = *FUNC_8(VAR_3, FUNC_2(VAR_2));

 switch ((VAR_2 >> 25) << 1) {

 case 0x02:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 1;
  VAR_7 = 2;
  VAR_8 = 0;
  break;
 case 0x0A:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 1;
  VAR_7 = 2;
  VAR_8 = 0;
  break;
 case 0x22:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 1;
  VAR_7 = 2;
  VAR_8 = 1;
  break;
 case 0x2A:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 1;
  VAR_7 = 2;
  VAR_8 = 1;
  break;
 case 0x04:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 1;
  VAR_7 = 4;
  VAR_8 = 0;
  break;
 case 0x0C:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 1;
  VAR_7 = 4;
  VAR_8 = 0;
  break;
 case 0x12:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 0;
  VAR_7 = 2;
  VAR_8 = 0;
  break;
 case 0x1A:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 0;
  VAR_7 = 2;
  VAR_8 = 0;
  break;
 case 0x14:
  VAR_4 = 1;
  VAR_5 = 1;
  VAR_6 = 0;
  VAR_7 = 4;
  VAR_8 = 0;
  break;
 case 0x1C:
  VAR_4 = 1;
  VAR_5 = 0;
  VAR_6 = 0;
  VAR_7 = 4;
  VAR_8 = 0;
  break;

 default:
  switch (VAR_2 & 0xff) {

  case 0x01:
   VAR_4 = 0;
   VAR_5 = 1;
   VAR_6 = 1;
   VAR_7 = 2;
   VAR_8 = 0;
   break;
  case 0x05:
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = 1;
   VAR_7 = 2;
   VAR_8 = 0;
   break;
  case 0x11:
   VAR_4 = 0;
   VAR_5 = 1;
   VAR_6 = 1;
   VAR_7 = 2;
   VAR_8 = 1;
   break;
  case 0x15:
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = 1;
   VAR_7 = 2;
   VAR_8 = 1;
   break;
  case 0x02:
   VAR_4 = 0;
   VAR_5 = 1;
   VAR_6 = 1;
   VAR_7 = 4;
   VAR_8 = 0;
   break;
  case 0x06:
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = 1;
   VAR_7 = 4;
   VAR_8 = 0;
   break;
  case 0x09:
   VAR_4 = 0;
   VAR_5 = 1;
   VAR_6 = 0;
   VAR_7 = 2;
   VAR_8 = 0;
   break;
  case 0x0D:
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = 0;
   VAR_7 = 2;
   VAR_8 = 0;
   break;
  case 0x0A:
   VAR_4 = 0;
   VAR_5 = 1;
   VAR_6 = 0;
   VAR_7 = 4;
   VAR_8 = 0;
   break;
  case 0x0E:
   VAR_4 = 0;
   VAR_5 = 0;
   VAR_6 = 0;
   VAR_7 = 4;
   VAR_8 = 0;
   break;

  default:
   return -VAR_1;
  }
 }

 if (VAR_4)
  VAR_11 = FUNC_0(FUNC_1(VAR_2)) * VAR_7;
 else
  VAR_11 = *FUNC_8(VAR_3, FUNC_3(VAR_2)) << FUNC_5(VAR_2);

 if (VAR_5)
  VAR_9 += VAR_11;

 if (VAR_6) {

  if (!FUNC_6((void *)VAR_9, VAR_7))
   return -VAR_0;

  FUNC_7(VAR_9, &VAR_10, VAR_7);

  if (VAR_8)
   *FUNC_8(VAR_3, FUNC_4(VAR_2)) =
       FUNC_10(VAR_10, VAR_7);
  else
   *FUNC_8(VAR_3, FUNC_4(VAR_2)) = VAR_10;
 } else {

  if (!FUNC_6((void *)VAR_9, VAR_7))
   return -VAR_0;

  VAR_10 = *FUNC_8(VAR_3, FUNC_4(VAR_2));
  FUNC_9((void *)VAR_9, VAR_10, VAR_7);
 }

 if (!VAR_5)
  *FUNC_8(VAR_3, FUNC_2(VAR_2)) = VAR_9 + VAR_11;

 VAR_3->ipc += 4;

 return 0;
fault:
 return -VAR_0;
}
