
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_wc {int dummy; } ;
struct TYPE_2__ {int mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct ib_device*,int ,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_1 (struct ib_device*,int,int ,struct ib_mad const*,struct ib_mad*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_1, int VAR_2, u8 VAR_3,
          const struct ib_wc *VAR_4,
          const struct ib_grh *VAR_5,
          const struct ib_mad *VAR_6,
          struct ib_mad *VAR_7)
{
 int VAR_8;

 switch (VAR_6->mad_hdr.mgmt_class) {
 case 129:
 case 128:
  VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7);
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_1, VAR_3, VAR_6, VAR_7);
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 return VAR_8;
}
