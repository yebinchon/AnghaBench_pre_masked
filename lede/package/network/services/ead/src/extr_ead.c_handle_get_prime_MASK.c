
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ead_packet {int dummy; } ;
struct ead_msg_salt {int ext_salt; int salt; int len; scalar_t__ prime; } ;
struct ead_msg {int len; } ;
struct TYPE_8__ {struct ead_msg msg; } ;
struct TYPE_7__ {scalar_t__ index; } ;
struct TYPE_5__ {int len; int data; } ;
struct TYPE_6__ {TYPE_1__ s; } ;


 struct ead_msg_salt* FUNC_0 (struct ead_msg*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 struct ead_msg_salt* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static bool
FUNC_3(struct ead_packet *VAR_7, int VAR_8, int *VAR_9)
{
 struct ead_msg *VAR_10 = &VAR_2->msg;
 struct ead_msg_salt *VAR_11 = FUNC_0(VAR_10, VAR_11);

 VAR_10->len = FUNC_1(sizeof(struct ead_msg_salt));
 VAR_11->prime = VAR_5->index - 1;
 VAR_11->len = VAR_6->s.len;
 FUNC_2(VAR_11->salt, VAR_6->s.data, VAR_6->s.len);
 FUNC_2(VAR_11->ext_salt, VAR_3, VAR_1);

 *VAR_9 = VAR_0;
 return 1;
}
