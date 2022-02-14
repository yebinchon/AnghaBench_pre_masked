
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int timeout; } ;
struct nbd_device {TYPE_2__* disk; TYPE_1__ tag_set; } ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct nbd_device *VAR_1, u64 VAR_2)
{
 VAR_1->tag_set.timeout = VAR_2 * VAR_0;
 if (VAR_2)
  FUNC_0(VAR_1->disk->queue, VAR_2 * VAR_0);
}
