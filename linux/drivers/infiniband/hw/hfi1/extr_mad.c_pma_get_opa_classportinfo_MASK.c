
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ attr_mod; int status; } ;
struct opa_pma_mad {TYPE_1__ mad_hdr; scalar_t__ data; } ;
struct opa_class_port_info {int cap_mask2_resp_time; int class_version; int base_version; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct ib_mad_hdr*) ;

__attribute__((used)) static int FUNC_3(struct opa_pma_mad *VAR_3,
         struct ib_device *VAR_4, u32 *VAR_5)
{
 struct opa_class_port_info *VAR_6 =
  (struct opa_class_port_info *)VAR_3->data;

 FUNC_1(VAR_3->data, 0, sizeof(VAR_3->data));

 if (VAR_3->mad_hdr.attr_mod != 0)
  VAR_3->mad_hdr.status |= VAR_0;

 VAR_6->base_version = VAR_1;
 VAR_6->class_version = VAR_2;



 VAR_6->cap_mask2_resp_time = FUNC_0(18);

 if (VAR_5)
  *VAR_5 += sizeof(*VAR_6);

 return FUNC_2((struct ib_mad_hdr *)VAR_3);
}
