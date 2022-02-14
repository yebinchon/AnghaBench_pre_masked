
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__ type; int opa; } ;
struct TYPE_4__ {TYPE_1__ data; int valid; } ;
struct ib_sa_port {int classport_lock; TYPE_2__ classport_info; } ;
struct ib_sa_device {size_t start_port; struct ib_sa_port* port; } ;
struct ib_sa_client {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ib_sa_device* FUNC_0 (struct ib_device*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct ib_sa_client *VAR_3,
      struct ib_device *VAR_4,
      u8 VAR_5)
{
 struct ib_sa_device *VAR_6 = FUNC_0(VAR_4, &VAR_2);
 struct ib_sa_port *VAR_7;
 unsigned long VAR_8;
 bool VAR_9 = 0;

 if (!VAR_6)
  return VAR_9;

 VAR_7 = &VAR_6->port[VAR_5 - VAR_6->start_port];
 FUNC_2(&VAR_7->classport_lock, VAR_8);
 if (!VAR_7->classport_info.valid)
  goto ret;

 if (VAR_7->classport_info.data.type == VAR_1)
  VAR_9 = FUNC_1(&VAR_7->classport_info.data.opa) &
   VAR_0;
ret:
 FUNC_3(&VAR_7->classport_lock, VAR_8);
 return VAR_9;
}
