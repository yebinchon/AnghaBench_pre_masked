
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ role; scalar_t__ peer; } ;
struct drbd_device {TYPE_1__ state; } ;
struct TYPE_6__ {TYPE_2__* connection; } ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct drbd_device*,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (struct drbd_device*,char*) ;
 int FUNC_3 (struct drbd_device*,int ) ;
 TYPE_3__* FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct drbd_device *VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_7, "Resync of new storage after online grow\n");
 if (VAR_7->state.role != VAR_7->state.peer)
  VAR_8 = (VAR_7->state.role == VAR_5);
 else
  VAR_8 = FUNC_5(VAR_4, &FUNC_4(VAR_7)->connection->flags);

 if (VAR_8)
  FUNC_3(VAR_7, VAR_2);
 else
  FUNC_1(VAR_7, FUNC_0(VAR_6, VAR_3), VAR_1 + VAR_0);
}
