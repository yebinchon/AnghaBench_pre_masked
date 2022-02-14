
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ class_version; int method; int status; int attr_id; } ;
struct opa_pma_mad {TYPE_1__ mad_hdr; } ;
struct opa_mad {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 int FUNC_0 (struct opa_pma_mad*,struct ib_device*,int*) ;
 int FUNC_1 (struct opa_pma_mad*,struct ib_device*,int ,int*) ;
 int FUNC_2 (struct opa_pma_mad*,struct ib_device*,int ,int*) ;
 int FUNC_3 (struct opa_pma_mad*,struct ib_device*,int ,int*) ;
 int FUNC_4 (struct opa_pma_mad*,struct ib_device*,int ,int*) ;
 int FUNC_5 (struct opa_pma_mad*,struct ib_device*,int ,int*) ;
 int FUNC_6 (struct opa_pma_mad*,struct ib_device*,int ,int*) ;
 int FUNC_7 (struct ib_mad_hdr*) ;

__attribute__((used)) static int FUNC_8(struct ib_device *VAR_5, u8 VAR_6,
       const struct opa_mad *VAR_7,
       struct opa_mad *VAR_8, u32 *VAR_9)
{
 struct opa_pma_mad *VAR_10 = (struct opa_pma_mad *)VAR_8;
 int VAR_11;

 *VAR_8 = *VAR_7;

 if (VAR_10->mad_hdr.class_version != VAR_4) {
  VAR_10->mad_hdr.status |= VAR_3;
  return FUNC_7((struct ib_mad_hdr *)VAR_10);
 }

 *VAR_9 = sizeof(VAR_10->mad_hdr);

 switch (VAR_10->mad_hdr.method) {
 case 137:
  switch (VAR_10->mad_hdr.attr_id) {
  case 133:
   VAR_11 = FUNC_0(VAR_10, VAR_5, VAR_9);
   break;
  case 128:
   VAR_11 = FUNC_4(VAR_10, VAR_5, VAR_6,
           VAR_9);
   break;
  case 131:
   VAR_11 = FUNC_1(VAR_10, VAR_5, VAR_6,
             VAR_9);
   break;
  case 129:
   VAR_11 = FUNC_3(VAR_10, VAR_5, VAR_6,
           VAR_9);
   break;
  case 130:
   VAR_11 = FUNC_2(VAR_10, VAR_5, VAR_6,
          VAR_9);
   break;
  default:
   VAR_10->mad_hdr.status |= VAR_2;
   VAR_11 = FUNC_7((struct ib_mad_hdr *)VAR_10);
   break;
  }
  break;

 case 135:
  switch (VAR_10->mad_hdr.attr_id) {
  case 132:
   VAR_11 = FUNC_6(VAR_10, VAR_5, VAR_6,
           VAR_9);
   break;
  case 130:
   VAR_11 = FUNC_5(VAR_10, VAR_5, VAR_6,
          VAR_9);
   break;
  default:
   VAR_10->mad_hdr.status |= VAR_2;
   VAR_11 = FUNC_7((struct ib_mad_hdr *)VAR_10);
   break;
  }
  break;

 case 134:
 case 136:





  VAR_11 = VAR_0;
  break;

 default:
  VAR_10->mad_hdr.status |= VAR_1;
  VAR_11 = FUNC_7((struct ib_mad_hdr *)VAR_10);
  break;
 }

 return VAR_11;
}
