
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int sector; } ;
struct drbd_request {TYPE_2__* private_bio; TYPE_1__ i; int device; } ;
struct TYPE_4__ {int bi_status; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct drbd_request *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1->device,
    VAR_1->i.sector, VAR_1->i.size >> 9, VAR_2);
 if (VAR_3)
  VAR_1->private_bio->bi_status = VAR_0;
 FUNC_0(VAR_1->private_bio);
}
