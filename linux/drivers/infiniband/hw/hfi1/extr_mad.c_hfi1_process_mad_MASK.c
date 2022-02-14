
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct opa_mad {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int base_version; } ;
struct ib_mad {int dummy; } ;
struct ib_grh {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct ib_device {TYPE_1__ dev; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ib_device*,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_2 (struct ib_device*,int,int ,struct ib_wc const*,struct ib_grh const*,struct opa_mad*,struct opa_mad*,size_t*,int *) ;
 int FUNC_3 (int) ;

int FUNC_4(struct ib_device *VAR_1, int VAR_2, u8 VAR_3,
       const struct ib_wc *VAR_4, const struct ib_grh *VAR_5,
       const struct ib_mad_hdr *VAR_6, size_t VAR_7,
       struct ib_mad_hdr *VAR_8, size_t *VAR_9,
       u16 *VAR_10)
{
 switch (VAR_6->base_version) {
 case 128:
  if (FUNC_3(VAR_7 != sizeof(struct opa_mad))) {
   FUNC_0(VAR_1->dev.parent, "invalid in_mad_size\n");
   return VAR_0;
  }
  return FUNC_2(VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5,
         (struct opa_mad *)VAR_6,
         (struct opa_mad *)VAR_8,
         VAR_9,
         VAR_10);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5,
       (const struct ib_mad *)VAR_6,
       (struct ib_mad *)VAR_8);
 default:
  break;
 }

 return VAR_0;
}
