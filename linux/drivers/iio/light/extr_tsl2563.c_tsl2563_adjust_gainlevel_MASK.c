
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tsl2563_chip {TYPE_1__* gainlevel; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ max; scalar_t__ min; int gaintime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int,int ) ;
 int FUNC_1 (struct tsl2563_chip*) ;

__attribute__((used)) static int FUNC_2(struct tsl2563_chip *VAR_2, u16 VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;

 if (VAR_3 > VAR_2->gainlevel->max || VAR_3 < VAR_2->gainlevel->min) {

  (VAR_3 > VAR_2->gainlevel->max) ?
   VAR_2->gainlevel++ : VAR_2->gainlevel--;

  FUNC_0(VAR_4,
       VAR_0 | VAR_1,
       VAR_2->gainlevel->gaintime);

  FUNC_1(VAR_2);
  FUNC_1(VAR_2);

  return 1;
 } else
  return 0;
}
