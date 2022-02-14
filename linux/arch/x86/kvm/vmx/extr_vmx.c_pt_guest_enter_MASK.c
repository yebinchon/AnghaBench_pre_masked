
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ctl; } ;
struct TYPE_5__ {int ctl; } ;
struct TYPE_4__ {int addr_range; TYPE_3__ guest; TYPE_2__ host; } ;
struct vcpu_vmx {TYPE_1__ pt_desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vcpu_vmx *VAR_4)
{
 if (VAR_3 == VAR_1)
  return;





 FUNC_2(VAR_0, VAR_4->pt_desc.host.ctl);
 if (VAR_4->pt_desc.guest.ctl & VAR_2) {
  FUNC_3(VAR_0, 0);
  FUNC_1(&VAR_4->pt_desc.host, VAR_4->pt_desc.addr_range);
  FUNC_0(&VAR_4->pt_desc.guest, VAR_4->pt_desc.addr_range);
 }
}
