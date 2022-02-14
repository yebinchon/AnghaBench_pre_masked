
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ib_qp_security {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct ib_ports_pkeys {TYPE_1__ alt; TYPE_1__ main; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct ib_qp_security*) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct ib_ports_pkeys *VAR_1,
           struct ib_qp_security *VAR_2)
{
 u64 VAR_3;
 u16 VAR_4;
 int VAR_5 = 0;

 if (!VAR_1)
  return 0;

 if (VAR_1->main.state != VAR_0) {
  VAR_5 = FUNC_1(&VAR_1->main,
       &VAR_4,
       &VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_4,
            VAR_3,
            VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_1->alt.state != VAR_0) {
  VAR_5 = FUNC_1(&VAR_1->alt,
       &VAR_4,
       &VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_4,
            VAR_3,
            VAR_2);
 }

 return VAR_5;
}
