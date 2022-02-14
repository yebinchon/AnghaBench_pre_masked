
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_device {unsigned long rs_total; unsigned long ov_left; int ov_start_sector; int ov_position; } ;
typedef int sector_t ;
typedef enum drbd_conns { ____Placeholder_drbd_conns } drbd_conns ;
struct TYPE_4__ {TYPE_1__* connection; } ;
struct TYPE_3__ {int agreed_pro_version; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned long FUNC_2 (struct drbd_device*) ;
 TYPE_2__* FUNC_3 (struct drbd_device*) ;

__attribute__((used)) static void FUNC_4(struct drbd_device *VAR_1, enum drbd_conns VAR_2)
{
 if (FUNC_3(VAR_1)->connection->agreed_pro_version < 90)
  VAR_1->ov_start_sector = 0;
 VAR_1->rs_total = FUNC_2(VAR_1);
 VAR_1->ov_position = 0;
 if (VAR_2 == VAR_0) {





  VAR_1->ov_start_sector = ~(sector_t)0;
 } else {
  unsigned long VAR_3 = FUNC_1(VAR_1->ov_start_sector);
  if (VAR_3 >= VAR_1->rs_total) {
   VAR_1->ov_start_sector =
    FUNC_0(VAR_1->rs_total - 1);
   VAR_1->rs_total = 1;
  } else
   VAR_1->rs_total -= VAR_3;
  VAR_1->ov_position = VAR_1->ov_start_sector;
 }
 VAR_1->ov_left = VAR_1->rs_total;
}
