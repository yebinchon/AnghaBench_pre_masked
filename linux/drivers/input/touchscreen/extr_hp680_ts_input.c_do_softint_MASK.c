
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct work_struct {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_13)
{
 int VAR_14 = 0, VAR_15 = 0;
 u8 VAR_16;
 int VAR_17 = 0;

 if (FUNC_0(VAR_6) & VAR_7) {
  VAR_16 = FUNC_0(VAR_8);
  VAR_16 |= VAR_9;
  VAR_16 &= ~VAR_11;
  FUNC_1(VAR_16, VAR_8);
  FUNC_7(30);

  VAR_15 = FUNC_2(VAR_3);

  VAR_16 = FUNC_0(VAR_8);
  VAR_16 |= VAR_11;
  VAR_16 &= ~VAR_10;
  FUNC_1(VAR_16, VAR_8);
  FUNC_7(30);

  VAR_14 = FUNC_2(VAR_2);

  VAR_16 = FUNC_0(VAR_8);
  VAR_16 |= VAR_10;
  VAR_16 &= ~VAR_9;
  FUNC_1(VAR_16, VAR_8);
  FUNC_7(100);
  VAR_17 = FUNC_0(VAR_6) & VAR_7;
 }

 if (VAR_17) {
  FUNC_5(VAR_12, VAR_4, 1);
  FUNC_4(VAR_12, VAR_0, VAR_14);
  FUNC_4(VAR_12, VAR_1, VAR_15);
 } else {
  FUNC_5(VAR_12, VAR_4, 0);
 }

 FUNC_6(VAR_12);
 FUNC_3(VAR_5);
}
