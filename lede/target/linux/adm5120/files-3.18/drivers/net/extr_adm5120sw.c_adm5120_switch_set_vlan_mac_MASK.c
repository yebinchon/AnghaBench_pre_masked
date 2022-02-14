
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_13, unsigned char *VAR_14)
{
 u32 VAR_15;

 VAR_15 = VAR_14[2] | (VAR_14[3] << VAR_8)
  | (VAR_14[4] << VAR_9)
  | (VAR_14[5] << VAR_10);
 FUNC_1(VAR_12, VAR_15);

 VAR_15 = (VAR_14[0] << VAR_0) | (VAR_14[1] << VAR_1) |
  VAR_2 | VAR_6 | (VAR_13 << VAR_7) |
  (VAR_5 << VAR_4);
 FUNC_1(VAR_11, VAR_15);

 do {
  VAR_15 = FUNC_0(VAR_11);
 } while ((VAR_15 & VAR_3) == 0);
}
