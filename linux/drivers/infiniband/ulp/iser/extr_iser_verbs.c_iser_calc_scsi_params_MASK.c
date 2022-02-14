
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iser_device {TYPE_1__* ib_device; } ;
struct TYPE_4__ {scalar_t__ pi_support; struct iser_device* device; } ;
struct iser_conn {int scsi_sg_tablesize; scalar_t__ pages_per_mr; TYPE_2__ ib_conn; } ;
struct ib_device_attr {int device_cap_flags; scalar_t__ max_fast_reg_page_list_len; scalar_t__ max_pi_fast_reg_page_list_len; } ;
struct TYPE_3__ {struct ib_device_attr attrs; } ;


 unsigned short FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned short,unsigned short) ;
 unsigned short FUNC_2 (int ,unsigned short,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct iser_conn *VAR_5,
        unsigned int VAR_6)
{
 struct iser_device *VAR_7 = VAR_5->ib_conn.device;
 struct ib_device_attr *VAR_8 = &VAR_7->ib_device->attrs;
 unsigned short VAR_9, VAR_10;
 unsigned short VAR_11;
 u32 VAR_12;







 if ((VAR_8->device_cap_flags & VAR_0) &&
     (VAR_8->device_cap_flags & VAR_1))
  VAR_11 = 0;
 else
  VAR_11 = 1;

 if (VAR_5->ib_conn.pi_support)
  VAR_12 = VAR_8->max_pi_fast_reg_page_list_len;
 else
  VAR_12 = VAR_8->max_fast_reg_page_list_len;

 VAR_9 = FUNC_0(VAR_6 * 512, VAR_3);
 if (VAR_8->device_cap_flags & VAR_0)
  VAR_10 =
   FUNC_2(
    VAR_4, VAR_2,
    VAR_12 - VAR_11);
 else
  VAR_10 = VAR_2;

 VAR_5->scsi_sg_tablesize = FUNC_1(VAR_9, VAR_10);
 VAR_5->pages_per_mr =
  VAR_5->scsi_sg_tablesize + VAR_11;
}
