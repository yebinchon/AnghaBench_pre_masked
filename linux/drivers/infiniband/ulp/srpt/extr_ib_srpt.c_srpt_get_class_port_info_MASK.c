
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; } ;
struct ib_dm_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct ib_class_port_info {int base_version; int class_version; } ;


 int FUNC_0 (struct ib_class_port_info*,int) ;
 int FUNC_1 (struct ib_class_port_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ib_dm_mad *VAR_0)
{
 struct ib_class_port_info *VAR_1;

 VAR_1 = (struct ib_class_port_info *)VAR_0->data;
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->base_version = 1;
 VAR_1->class_version = 1;

 FUNC_0(VAR_1, 20);
 VAR_0->mad_hdr.status = 0;
}
