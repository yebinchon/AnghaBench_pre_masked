
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int sector; } ;
struct drbd_peer_request {int flags; TYPE_1__ i; } ;
struct drbd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drbd_device*) ;
 int FUNC_1 (struct drbd_peer_request*) ;
 scalar_t__ FUNC_2 (struct drbd_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct drbd_device *VAR_3, struct drbd_peer_request *VAR_4)
{




 if (!FUNC_0(VAR_3))
  VAR_4->flags |= VAR_2;

 if (FUNC_2(VAR_3, VAR_4->i.sector,
     VAR_4->i.size >> 9, VAR_4->flags & (VAR_2|VAR_0)))
  VAR_4->flags |= VAR_1;
 FUNC_1(VAR_4);
}
