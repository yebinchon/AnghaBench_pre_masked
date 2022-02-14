
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct cx24120_state {TYPE_1__* i2c; void* mpeg_enabled; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct cx24120_state *VAR_1,
       u8 VAR_2)
{
 struct cx24120_cmd VAR_3;
 int VAR_4;

 VAR_3.id = VAR_0;
 VAR_3.len = 4;
 VAR_3.arg[0] = 0x01;
 VAR_3.arg[1] = 0x00;
 VAR_3.arg[2] = VAR_2 ? 0 : (u8)(-1);
 VAR_3.arg[3] = 0x01;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 != 0) {
  FUNC_1(&VAR_1->i2c->dev, "failed to %s MPEG output\n",
   VAR_2 ? "enable" : "disable");
  return VAR_4;
 }

 VAR_1->mpeg_enabled = VAR_2;
 FUNC_1(&VAR_1->i2c->dev, "MPEG output %s\n",
  VAR_2 ? "enabled" : "disabled");

 return 0;
}
