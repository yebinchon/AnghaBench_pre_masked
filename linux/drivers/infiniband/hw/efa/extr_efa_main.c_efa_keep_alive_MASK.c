
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keep_alive_rcvd; } ;
struct efa_dev {TYPE_1__ stats; } ;
struct efa_admin_aenq_entry {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct efa_admin_aenq_entry *VAR_1)
{
 struct efa_dev *VAR_2 = (struct efa_dev *)VAR_0;

 FUNC_0(&VAR_2->stats.keep_alive_rcvd);
}
