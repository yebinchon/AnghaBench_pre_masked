
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct i2c_client {int dummy; } ;
struct cm3232_chip {int regs_cmd; struct i2c_client* client; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {int val; int val2; int it; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cm3232_chip *VAR_5, int VAR_6, int VAR_7)
{
 struct i2c_client *VAR_8 = VAR_5->client;
 u16 VAR_9, VAR_10;
 int VAR_11;
 s32 VAR_12;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  if (VAR_6 == VAR_4[VAR_11].val &&
   VAR_7 == VAR_4[VAR_11].val2) {

   VAR_9 = VAR_4[VAR_11].it;
   VAR_9 <<= VAR_1;

   VAR_10 = VAR_5->regs_cmd & ~VAR_0;
   VAR_10 |= VAR_9;
   VAR_12 = FUNC_1(VAR_8,
       VAR_2,
       VAR_10);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_5->regs_cmd = VAR_10;
   return 0;
  }
 }
 return -VAR_3;
}
