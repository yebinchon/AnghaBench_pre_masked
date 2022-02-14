
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mthca_set_ib_param {int reset_qkey_viol; int cap_mask; scalar_t__ set_si_guid; } ;
struct ib_port_modify {int set_port_cap_mask; int clr_port_cap_mask; } ;
struct ib_port_attr {int port_cap_flags; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int cap_mask_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_1 (TYPE_1__*,struct mthca_set_ib_param*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_2,
        u8 VAR_3, int VAR_4,
        struct ib_port_modify *VAR_5)
{
 struct mthca_set_ib_param VAR_6;
 struct ib_port_attr VAR_7;
 int VAR_8;

 if (FUNC_2(&FUNC_4(VAR_2)->cap_mask_mutex))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_6.set_si_guid = 0;
 VAR_6.reset_qkey_viol = !!(VAR_4 & VAR_1);

 VAR_6.cap_mask = (VAR_7.port_cap_flags | VAR_5->set_port_cap_mask) &
  ~VAR_5->clr_port_cap_mask;

 VAR_8 = FUNC_1(FUNC_4(VAR_2), &VAR_6, VAR_3);
 if (VAR_8)
  goto out;
out:
 FUNC_3(&FUNC_4(VAR_2)->cap_mask_mutex);
 return VAR_8;
}
