
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {int psxmitwait_supported; } ;
struct ib_smp {int dummy; } ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_device {int dummy; } ;
struct ib_class_port_info {int base_version; int class_version; int capability_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qib_devdata* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_class_port_info*,int) ;
 int FUNC_2 (struct ib_class_port_info*,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_5(struct ib_pma_mad *VAR_3,
     struct ib_device *VAR_4)
{
 struct ib_class_port_info *VAR_5 =
  (struct ib_class_port_info *)VAR_3->data;
 struct qib_devdata *VAR_6 = FUNC_0(VAR_4);

 FUNC_3(VAR_3->data, 0, sizeof(VAR_3->data));

 if (VAR_3->mad_hdr.attr_mod != 0)
  VAR_3->mad_hdr.status |= VAR_2;


 VAR_5->base_version = 1;
 VAR_5->class_version = 1;
 VAR_5->capability_mask = VAR_1;




 FUNC_1(VAR_5,
       VAR_6->psxmitwait_supported <<
       (31 - VAR_0));



 FUNC_2(VAR_5, 18);

 return FUNC_4((struct ib_smp *) VAR_3);
}
