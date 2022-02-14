
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_device {TYPE_1__* disk; struct nbd_config* config; } ;
struct nbd_config {int flags; } ;
struct TYPE_2__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct nbd_device *VAR_5)
{
 struct nbd_config *VAR_6 = VAR_5->config;
 if (VAR_6->flags & VAR_0)
  FUNC_2(VAR_5->disk, 1);
 else
  FUNC_2(VAR_5->disk, 0);
 if (VAR_6->flags & VAR_3)
  FUNC_0(VAR_4, VAR_5->disk->queue);
 if (VAR_6->flags & VAR_1) {
  if (VAR_6->flags & VAR_2)
   FUNC_1(VAR_5->disk->queue, 1, 1);
  else
   FUNC_1(VAR_5->disk->queue, 1, 0);
 }
 else
  FUNC_1(VAR_5->disk->queue, 0, 0);
}
