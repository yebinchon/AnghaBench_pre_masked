
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_mt_pos {int y; int x; } ;
struct ektf2127_ts {int input; int prop; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (int const*,unsigned int,struct input_mt_pos*) ;
 int FUNC_2 (int ,int*,struct input_mt_pos*,unsigned int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct ektf2127_ts *VAR_2, const u8 *VAR_3)
{
 struct input_mt_pos VAR_4[VAR_0];
 int VAR_5[VAR_0];
 unsigned int VAR_6, VAR_7;

 VAR_6 = VAR_3[1] & 0x07;
 if (VAR_6 > VAR_0) {
  FUNC_0(&VAR_2->client->dev,
   "Too many touches %d > %d\n",
   VAR_6, VAR_0);
  VAR_6 = VAR_0;
 }

 FUNC_1(VAR_3, VAR_6, VAR_4);
 FUNC_2(VAR_2->input, VAR_5, VAR_4,
         VAR_6, 0);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_4(VAR_2->input, VAR_5[VAR_7]);
  FUNC_3(VAR_2->input, VAR_1, 1);
  FUNC_7(VAR_2->input, &VAR_2->prop,
           VAR_4[VAR_7].x, VAR_4[VAR_7].y, 1);
 }

 FUNC_5(VAR_2->input);
 FUNC_6(VAR_2->input);
}
