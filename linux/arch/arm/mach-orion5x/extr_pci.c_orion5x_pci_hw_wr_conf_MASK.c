
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int VAR_5 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(int VAR_6, int VAR_7, u32 VAR_8,
     u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 unsigned long VAR_12;
 int VAR_13 = VAR_1;

 FUNC_7(&VAR_5, VAR_12);

 FUNC_9(FUNC_0(VAR_6) |
  FUNC_1(VAR_7) | FUNC_3(VAR_9) |
  FUNC_2(VAR_8) | VAR_3, VAR_2);

 if (VAR_10 == 4) {
  FUNC_5(VAR_11, VAR_4);
 } else if (VAR_10 == 2) {
  FUNC_6(VAR_11, VAR_4 + (VAR_9 & 0x3));
 } else if (VAR_10 == 1) {
  FUNC_4(VAR_11, VAR_4 + (VAR_9 & 0x3));
 } else {
  VAR_13 = VAR_0;
 }

 FUNC_8(&VAR_5, VAR_12);

 return VAR_13;
}
