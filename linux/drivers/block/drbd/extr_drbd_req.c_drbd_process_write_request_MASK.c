
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int sector; } ;
struct drbd_request {TYPE_2__ i; TYPE_1__* master_bio; struct drbd_device* device; } ;
struct drbd_device {int state; } ;
struct TYPE_3__ {int bi_opf; } ;


 int FUNC_0 (struct drbd_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drbd_request*,int ) ;
 scalar_t__ FUNC_2 (struct drbd_device*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct drbd_request *VAR_5)
{
 struct drbd_device *VAR_6 = VAR_5->device;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_6->state);
 VAR_8 = FUNC_4(VAR_6->state);







 if (FUNC_5(VAR_5->i.size == 0)) {

  FUNC_0(VAR_6, VAR_5->master_bio->bi_opf & VAR_3);
  if (VAR_7)
   FUNC_1(VAR_5, VAR_0);
  return VAR_7;
 }

 if (!VAR_7 && !VAR_8)
  return 0;

 FUNC_0(VAR_6, !(VAR_7 && VAR_8));

 if (VAR_7) {
  FUNC_1(VAR_5, VAR_4);
  FUNC_1(VAR_5, VAR_1);
 } else if (FUNC_2(VAR_6, VAR_5->i.sector, VAR_5->i.size))
  FUNC_1(VAR_5, VAR_2);

 return VAR_7;
}
