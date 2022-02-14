
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long*,int ,int ) ;
 int FUNC_2 (unsigned long*,int ,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long *VAR_10,
      u8 VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0x800; VAR_12 <= 0x8ff; VAR_12 += VAR_4) {
  unsigned VAR_13 = VAR_12 / VAR_4;
  VAR_10[VAR_13] = (VAR_11 & VAR_6) ? 0 : ~0;
  VAR_10[VAR_13 + (0x800 / sizeof(long))] = ~0;
 }

 if (VAR_11 & VAR_5) {




  FUNC_1(VAR_10, FUNC_0(VAR_2), VAR_8);
  if (VAR_11 & VAR_6) {
   FUNC_2(VAR_10, FUNC_0(VAR_3), VAR_7);
   FUNC_1(VAR_10, FUNC_0(VAR_0), VAR_9);
   FUNC_1(VAR_10, FUNC_0(VAR_1), VAR_9);
  }
 }
}
