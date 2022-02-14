
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_1(VAR_7, (0x60 - VAR_5) / 4, VAR_0);
 FUNC_1(VAR_7, (0x70 - VAR_5) / 4, VAR_6);


 FUNC_1(VAR_7, VAR_2, 0x311);
 FUNC_0(VAR_7, VAR_4);
 FUNC_2(1000);
 FUNC_1(VAR_7, VAR_2, 0x310);


 do {
  FUNC_2(200000);
  if ((FUNC_0(VAR_7, VAR_4) & 0xf) == 3) {
   FUNC_1(VAR_7, VAR_3, ~0);
   VAR_8 = 1;
   break;
  }

 } while (++VAR_9 < VAR_1);

 if (VAR_8) {
  FUNC_2(500000);
 }

 return VAR_8;
}
