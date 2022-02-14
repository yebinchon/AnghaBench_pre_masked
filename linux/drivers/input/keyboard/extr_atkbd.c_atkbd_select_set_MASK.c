
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct atkbd {int extra; int id; scalar_t__ translated; struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct atkbd *VAR_7, int VAR_8, int VAR_9)
{
 struct ps2dev *VAR_10 = &VAR_7->ps2dev;
 unsigned char VAR_11[2];

 VAR_7->extra = 0;






 if (VAR_7->translated)
  return 2;

 if (VAR_7->id == 0xaca1) {
  VAR_11[0] = 3;
  FUNC_0(VAR_10, VAR_11, VAR_5);
  return 3;
 }

 if (VAR_9) {
  VAR_11[0] = 0x71;
  if (!FUNC_0(VAR_10, VAR_11, VAR_0)) {
   VAR_7->extra = 1;
   return 2;
  }
 }

 if (VAR_6) {
  FUNC_0(VAR_10, VAR_11, VAR_3);
  return 3;
 }

 if (VAR_8 != 3)
  return 2;

 if (!FUNC_0(VAR_10, VAR_11, VAR_2)) {
  VAR_7->id = VAR_11[0] << 8 | VAR_11[1];
  return 2;
 }

 VAR_11[0] = 3;
 if (FUNC_0(VAR_10, VAR_11, VAR_5))
  return 2;

 VAR_11[0] = 0;
 if (FUNC_0(VAR_10, VAR_11, VAR_1))
  return 2;

 if (VAR_11[0] != 3) {
  VAR_11[0] = 2;
  if (FUNC_0(VAR_10, VAR_11, VAR_5))
   return 2;
 }

 FUNC_0(VAR_10, VAR_11, VAR_4);

 return 3;
}
