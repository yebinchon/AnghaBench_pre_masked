
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ead_msg {int len; } ;
struct ead_packet {struct ead_msg msg; } ;
struct ead_msg_auth {int data; } ;
struct TYPE_2__ {struct ead_msg msg; } ;


 int FUNC_0 (int,char*) ;
 struct ead_msg_auth* FUNC_1 (struct ead_msg*,struct ead_msg_auth*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ead_msg_auth* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_6(struct ead_packet *VAR_5, int VAR_6, int *VAR_7)
{
 struct ead_msg *VAR_8 = &VAR_5->msg;
 struct ead_msg_auth *VAR_9 = FUNC_1(VAR_8, VAR_9);

 if (FUNC_5(VAR_4, VAR_9->data) != 0) {
  FUNC_0(2, "Client authentication failed\n");
  *VAR_7 = VAR_1;
  return 0;
 }

 VAR_8 = &VAR_3->msg;
 VAR_9 = FUNC_1(VAR_8, VAR_9);
 VAR_8->len = FUNC_2(sizeof(struct ead_msg_auth));

 FUNC_0(2, "Client authentication successful\n");
 FUNC_3(VAR_9->data, FUNC_4(VAR_4), sizeof(VAR_9->data));

 *VAR_7 = VAR_0;
 return 1;
}
