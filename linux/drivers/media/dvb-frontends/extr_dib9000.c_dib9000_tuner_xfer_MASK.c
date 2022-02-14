
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int t ;
struct i2c_msg {int flags; int len; int* buf; scalar_t__ addr; } ;
struct i2c_adapter {int dummy; } ;
struct dib9000_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib9000_state*,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;
 int FUNC_2 (char*) ;
 struct dib9000_state* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_1, struct i2c_msg VAR_2[], int VAR_3)
{
 struct dib9000_state *VAR_4 = FUNC_3(VAR_1);
 u16 VAR_5, VAR_6, VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_2[VAR_8].flags & VAR_0) {
   VAR_6 = VAR_2[VAR_8].len;
   if (VAR_6 > 16)
    VAR_6 = 16;

   if (FUNC_0(VAR_4, 790) != 0)
    FUNC_2("TunerITF: read busy\n");

   FUNC_1(VAR_4, 784, (u16) (VAR_2[VAR_8].addr));
   FUNC_1(VAR_4, 787, (VAR_6 / 2) - 1);
   FUNC_1(VAR_4, 786, 1);

   VAR_5 = 1000;
   while (FUNC_0(VAR_4, 790) != (VAR_6 / 2) && VAR_5)
    VAR_5--;

   if (VAR_5 == 0)
    FUNC_2("TunerITF: read failed\n");

   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += 2) {
    VAR_7 = FUNC_0(VAR_4, 785);
    VAR_2[VAR_8].buf[VAR_5] = (VAR_7 >> 8) & 0xff;
    VAR_2[VAR_8].buf[VAR_5 + 1] = (VAR_7) & 0xff;
   }
   if (FUNC_0(VAR_4, 790) != 0)
    FUNC_2("TunerITF: read more data than expected\n");
  } else {
   VAR_5 = 1000;
   while (FUNC_0(VAR_4, 789) && VAR_5)
    VAR_5--;
   if (VAR_5 == 0)
    FUNC_2("TunerITF: write busy\n");

   VAR_6 = VAR_2[VAR_8].len;
   if (VAR_6 > 16)
    VAR_6 = 16;

   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5 += 2)
    FUNC_1(VAR_4, 785, (VAR_2[VAR_8].buf[VAR_5] << 8) | VAR_2[VAR_8].buf[VAR_5 + 1]);
   FUNC_1(VAR_4, 784, (u16) VAR_2[VAR_8].addr);
   FUNC_1(VAR_4, 787, (VAR_6 / 2) - 1);
   FUNC_1(VAR_4, 786, 0);

   VAR_5 = 1000;
   while (FUNC_0(VAR_4, 791) > 0 && VAR_5)
    VAR_5--;
   if (VAR_5 == 0)
    FUNC_2("TunerITF: write failed\n");
  }
 }
 return VAR_3;
}
