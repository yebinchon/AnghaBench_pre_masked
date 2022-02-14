
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,unsigned short) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 unsigned char VAR_14;
 static int VAR_15 = 1;
 static unsigned short VAR_16;
 static unsigned short VAR_17;

 FUNC_5(&VAR_11);

 VAR_14 = FUNC_0(VAR_10 + VAR_5);

 if (~VAR_14 & VAR_4) {
  VAR_15 = 1;
  goto end;
 }

 if (~VAR_14 & VAR_6) {
  VAR_15 = 1;
  FUNC_2(VAR_9, VAR_2, 0);
  goto end;
 }

 if (VAR_15) {
  VAR_15 = 0;
  goto end;
 }

 FUNC_2(VAR_9, VAR_2, 1);
 FUNC_1(VAR_9, VAR_0, VAR_16);
 FUNC_1(VAR_9, VAR_1, VAR_17);

 end:
 VAR_16 = FUNC_4(VAR_10 + VAR_7) & 0x0fff;
 VAR_17 = FUNC_4(VAR_10 + VAR_8) & 0x0fff;
 FUNC_3(VAR_9);
 FUNC_6(&VAR_11);
 return VAR_3;
}
