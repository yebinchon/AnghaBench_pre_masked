
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_abort_req {int cmd; } ;
struct c4iw_rdev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct c4iw_ep {TYPE_2__ com; } ;
struct TYPE_3__ {struct c4iw_rdev rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct c4iw_rdev*,struct sk_buff*) ;
 struct cpl_abort_req* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,struct c4iw_rdev*) ;
 int FUNC_5 (struct c4iw_ep*,struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5;
 struct c4iw_ep *VAR_6 = VAR_3;
 struct c4iw_rdev *VAR_7 = &VAR_6->com.dev->rdev;
 struct cpl_abort_req *VAR_8 = FUNC_2(VAR_4);

 FUNC_4("rdev %p\n", VAR_7);
 VAR_8->cmd = VAR_0;
 FUNC_6(VAR_4);
 VAR_5 = FUNC_1(VAR_7, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_6->com, VAR_1);
  FUNC_5(VAR_6, VAR_4, VAR_2);
 } else
  FUNC_3(VAR_4);
}
