
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int class_version; int method; int status; int attr_id; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; int data; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_class_port_info {int capability_mask; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_1 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_2 (struct ib_mad_hdr*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_6, u8 VAR_7,
   const struct ib_mad *VAR_8,
   struct ib_mad *VAR_9)
{
 struct ib_pma_mad *VAR_10 = (struct ib_pma_mad *)VAR_9;
 struct ib_class_port_info *VAR_11 = (struct ib_class_port_info *)
      &VAR_10->data;
 int VAR_12 = VAR_0;

 *VAR_9 = *VAR_8;
 if (VAR_10->mad_hdr.class_version != 1) {
  VAR_10->mad_hdr.status |= VAR_5;
  VAR_12 = FUNC_2((struct ib_mad_hdr *)VAR_10);
  return VAR_12;
 }

 switch (VAR_10->mad_hdr.method) {
 case 134:
  switch (VAR_10->mad_hdr.attr_id) {
  case 129:
   VAR_12 = FUNC_0(VAR_10, VAR_6, VAR_7);
   break;
  case 128:
   VAR_12 = FUNC_1(VAR_10, VAR_6, VAR_7);
   break;
  case 130:
   VAR_11->capability_mask = VAR_2;
   VAR_12 = FUNC_2((struct ib_mad_hdr *)VAR_10);
   break;
  default:
   VAR_10->mad_hdr.status |= VAR_4;
   VAR_12 = FUNC_2((struct ib_mad_hdr *)VAR_10);
   break;
  }
  break;

 case 132:
  if (VAR_10->mad_hdr.attr_id) {
   VAR_10->mad_hdr.status |= VAR_4;
   VAR_12 = FUNC_2((struct ib_mad_hdr *)VAR_10);
  }
  break;

 case 131:
 case 133:





  VAR_12 = VAR_1;
  break;

 default:
  VAR_10->mad_hdr.status |= VAR_3;
  VAR_12 = FUNC_2((struct ib_mad_hdr *)VAR_10);
  break;
 }

 return VAR_12;
}
