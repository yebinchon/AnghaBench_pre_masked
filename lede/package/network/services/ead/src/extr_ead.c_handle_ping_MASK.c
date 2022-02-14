
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ead_packet {int dummy; } ;
struct ead_msg_pong {int auth_type; scalar_t__* name; } ;
struct ead_msg {int len; } ;
struct TYPE_2__ {struct ead_msg msg; } ;


 int VAR_0 ;
 struct ead_msg_pong* FUNC_0 (struct ead_msg*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 struct ead_msg_pong* VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

__attribute__((used)) static bool
FUNC_5(struct ead_packet *VAR_4, int VAR_5, int *VAR_6)
{
 struct ead_msg *VAR_7 = &VAR_2->msg;
 struct ead_msg_pong *VAR_8 = FUNC_0(VAR_7, VAR_8);
 int VAR_9;

 VAR_9 = FUNC_3(VAR_1);
 if (VAR_9 > 1024)
  VAR_9 = 1024;

 VAR_7->len = FUNC_1(sizeof(struct ead_msg_pong) + VAR_9);
 FUNC_4(VAR_8->name, VAR_1, VAR_9);
 VAR_8->name[VAR_9] = 0;
 VAR_8->auth_type = FUNC_2(VAR_0);

 return 1;
}
