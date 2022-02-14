
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmic8xxx_kp {int num_rows; int num_cols; int input; int * keycodes; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int,char*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pmic8xxx_kp *VAR_3, u16 *VAR_4,
      u16 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_rows; VAR_6++) {
  int VAR_9 = VAR_4[VAR_6] ^ VAR_5[VAR_6];

  if (!VAR_9)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_3->num_cols; VAR_7++) {
   if (!(VAR_9 & (1 << VAR_7)))
    continue;

   FUNC_1(VAR_3->dev, "key [%d:%d] %s\n", VAR_6, VAR_7,
     !(VAR_4[VAR_6] & (1 << VAR_7)) ?
     "pressed" : "released");

   VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_2);

   FUNC_2(VAR_3->input, VAR_0, VAR_1, VAR_8);
   FUNC_3(VAR_3->input,
     VAR_3->keycodes[VAR_8],
     !(VAR_4[VAR_6] & (1 << VAR_7)));

   FUNC_4(VAR_3->input);
  }
 }
}
