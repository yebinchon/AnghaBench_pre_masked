
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx24120_state {TYPE_1__* i2c; scalar_t__ mpeg_enabled; } ;
struct cx24120_cmd {int id; int len; int * arg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx24120_state*,int) ;
 scalar_t__ FUNC_1 (struct cx24120_state*,int ) ;
 int FUNC_2 (struct cx24120_state*,int ,int) ;
 int FUNC_3 (struct cx24120_state*,int ,int *,int ,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cx24120_state *VAR_4,
    struct cx24120_cmd *VAR_5)
{
 int VAR_6;

 if (VAR_4->mpeg_enabled) {

  FUNC_0(VAR_4, VAR_5->id);
 }

 FUNC_2(VAR_4, VAR_2, VAR_5->id);
 FUNC_3(VAR_4, VAR_0, &VAR_5->arg[0],
     VAR_5->len, 1);
 FUNC_2(VAR_4, VAR_1, 0x01);

 VAR_6 = 1000;
 while (FUNC_1(VAR_4, VAR_1)) {
  FUNC_6(20);
  VAR_6 -= 20;
  if (VAR_6 == 0) {
   FUNC_5("Error sending message to firmware\n");
   return -VAR_3;
  }
 }
 FUNC_4(&VAR_4->i2c->dev, "sent message 0x%02x\n", VAR_5->id);

 return 0;
}
