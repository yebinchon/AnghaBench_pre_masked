
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;




 unsigned long VAR_0 ;




 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 int VAR_3 ;



 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (char*,unsigned int,unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 FUNC_4(VAR_7, VAR_6 + VAR_8);

 if (FUNC_1(VAR_8 >= FUNC_0(0))) {
  VAR_9 = (VAR_8 & VAR_2) + VAR_4;
  switch (VAR_8 & ~VAR_2) {
  case 128:
   VAR_10 = 1 << 3;
   break;
  case 130:
   VAR_10 = 1 << 1;
   break;
  case 129:
   VAR_10 = 1 << 0;
   break;
  default:
   return;
  }
 } else {
  switch (VAR_8) {
  case 131:
   VAR_9 = VAR_1;
   VAR_10 = 1 << 16;
   break;
  case 133:
   VAR_9 = VAR_1;
   VAR_10 = 1 << 0;
   break;
  case 132:
   VAR_9 = VAR_1;
   VAR_10 = 1 << 1;
   break;
  case 134:
   VAR_9 = VAR_1;
   VAR_10 = 1 << 2;
   break;
  case 136:
   VAR_9 = VAR_0;
   VAR_10 = 1 << 0;
   break;
  case 135:
   VAR_9 = VAR_0;
   VAR_10 = 1 << 1;
   break;
  default:
   return;
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_5 / 1000 * VAR_3; VAR_11++)
  if (FUNC_3(VAR_6 + VAR_9) & VAR_10) {
   FUNC_4(VAR_10, VAR_6 + VAR_9);
   return;
  }

 FUNC_2("MCT hangs after writing %d (offset:0x%lx)\n", VAR_7, VAR_8);
}
