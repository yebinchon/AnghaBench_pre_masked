
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct serio*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(unsigned char VAR_4, unsigned char VAR_5,
      struct serio *VAR_6)
{
 static bool VAR_7 = 0;


 if (VAR_5 & VAR_2)
  return 0;


 if (VAR_4 == 0xe0) {
  VAR_7 = 1;
  return 1;
 }

 if (!VAR_7)
  return 0;

 VAR_7 = 0;

 if (FUNC_3((VAR_4 & 0x7f) != 0x3b)) {
  FUNC_4(VAR_6, 0xe0, 0);
  return 0;
 }

 if (VAR_4 & 0x80) {
  FUNC_1(VAR_3, VAR_1, 0);
 } else {
  FUNC_1(VAR_3, VAR_1, 1);
  FUNC_0(VAR_3, VAR_0, FUNC_5());
 }
 FUNC_2(VAR_3);

 return 1;
}
