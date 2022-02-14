
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct stv {scalar_t__* vth; scalar_t__ regoff; } ;
struct slookup {int member_0; int member_1; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct slookup const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct stv*,scalar_t__,int*,int) ;
 scalar_t__ FUNC_2 (struct slookup const*,int ,int) ;
 int FUNC_3 (struct stv*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stv *VAR_2)
{
 static const struct slookup VAR_3[] = {
  {250, 8780},
  {100, 7405},
  {40, 6330},
  {12, 5224},
  {5, 4236}
 };

 int VAR_4;
 u8 VAR_5[2];
 int VAR_6 = FUNC_1(VAR_2,
          VAR_0 + VAR_2->regoff,
          VAR_5, 2);
 u16 VAR_7 = (VAR_5[0] << 8) | VAR_5[1];
 s32 VAR_8 = FUNC_2(VAR_3, FUNC_0(VAR_3),
         VAR_7);

 for (VAR_4 = 0; VAR_4 < 6; VAR_4 += 1)
  if (VAR_2->vth[VAR_4] > VAR_8)
   VAR_2->vth[VAR_4] = VAR_8;

 FUNC_3(VAR_2, VAR_1 + VAR_2->regoff + 0, VAR_2->vth[0]);
 FUNC_3(VAR_2, VAR_1 + VAR_2->regoff + 1, VAR_2->vth[1]);
 FUNC_3(VAR_2, VAR_1 + VAR_2->regoff + 2, VAR_2->vth[2]);
 FUNC_3(VAR_2, VAR_1 + VAR_2->regoff + 3, VAR_2->vth[3]);
 FUNC_3(VAR_2, VAR_1 + VAR_2->regoff + 4, VAR_2->vth[4]);
 FUNC_3(VAR_2, VAR_1 + VAR_2->regoff + 5, VAR_2->vth[5]);
 return VAR_6;
}
