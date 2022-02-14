
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_smp {int dummy; } ;
struct TYPE_2__ {int class_version; int method; int status; int attr_id; } ;
struct ib_pma_mad {TYPE_1__ mad_hdr; } ;
struct ib_mad {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_pma_mad*,struct ib_device*) ;
 int FUNC_1 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_2 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_3 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_4 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_5 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_6 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_7 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_8 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_9 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_10 (struct ib_pma_mad*,struct ib_device*,int ) ;
 int FUNC_11 (struct ib_smp*) ;

__attribute__((used)) static int FUNC_12(struct ib_device *VAR_4, u8 VAR_5,
   const struct ib_mad *VAR_6,
   struct ib_mad *VAR_7)
{
 struct ib_pma_mad *VAR_8 = (struct ib_pma_mad *)VAR_7;
 int VAR_9;

 *VAR_7 = *VAR_6;
 if (VAR_8->mad_hdr.class_version != 1) {
  VAR_8->mad_hdr.status |= VAR_3;
  VAR_9 = FUNC_11((struct ib_smp *) VAR_8);
  goto bail;
 }

 switch (VAR_8->mad_hdr.method) {
 case 138:
  switch (VAR_8->mad_hdr.attr_id) {
  case 134:
   VAR_9 = FUNC_0(VAR_8, VAR_4);
   goto bail;
  case 130:
   VAR_9 = FUNC_4(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 129:
   VAR_9 = FUNC_5(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 128:
   VAR_9 = FUNC_6(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 133:
   VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 131:
   VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 132:
   VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5);
   goto bail;
  default:
   VAR_8->mad_hdr.status |= VAR_2;
   VAR_9 = FUNC_11((struct ib_smp *) VAR_8);
   goto bail;
  }

 case 136:
  switch (VAR_8->mad_hdr.attr_id) {
  case 130:
   VAR_9 = FUNC_10(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 133:
   VAR_9 = FUNC_7(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 131:
   VAR_9 = FUNC_9(VAR_8, VAR_4, VAR_5);
   goto bail;
  case 132:
   VAR_9 = FUNC_8(VAR_8, VAR_4, VAR_5);
   goto bail;
  default:
   VAR_8->mad_hdr.status |= VAR_2;
   VAR_9 = FUNC_11((struct ib_smp *) VAR_8);
   goto bail;
  }

 case 135:
 case 137:





  VAR_9 = VAR_0;
  goto bail;

 default:
  VAR_8->mad_hdr.status |= VAR_1;
  VAR_9 = FUNC_11((struct ib_smp *) VAR_8);
 }

bail:
 return VAR_9;
}
