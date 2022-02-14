
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_cq {int cq_put; int cq_get; TYPE_1__* notify; } ;
struct ib_cq {int dummy; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct siw_cq*,char*,int) ;
 int FUNC_1 (int ,int ) ;
 struct siw_cq* FUNC_2 (struct ib_cq*) ;

int FUNC_3(struct ib_cq *VAR_5, enum ib_cq_notify_flags VAR_6)
{
 struct siw_cq *VAR_7 = FUNC_2(VAR_5);

 FUNC_0(VAR_7, "flags: 0x%02x\n", VAR_6);

 if ((VAR_6 & VAR_2) == VAR_1)




  FUNC_1(VAR_7->notify->flags, VAR_4);
 else




  FUNC_1(VAR_7->notify->flags, VAR_3);

 if (VAR_6 & VAR_0)
  return VAR_7->cq_put - VAR_7->cq_get;

 return 0;
}
