
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_devdata {TYPE_1__* pport; } ;
struct TYPE_2__ {scalar_t__ port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 struct hfi1_devdata* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct hfi1_devdata*,int ,int,int,int *) ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct opa_smp *VAR_5, u32 VAR_6, u8 *VAR_7,
         struct ib_device *VAR_8, u8 VAR_9,
         u32 *VAR_10, u32 VAR_11)
{
 struct hfi1_devdata *VAR_12 = FUNC_3(VAR_8);
 u32 VAR_13 = FUNC_0(VAR_6);
 u32 VAR_14 = FUNC_1(VAR_6) + 1;
 int VAR_15;

 if (VAR_12->pport->port_type != VAR_4 ||
     FUNC_6(VAR_14, VAR_11)) {
  VAR_5->status |= VAR_2;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }
 if (VAR_13 >= 4096 ||
     (((VAR_13) & ~(FUNC_0(7) - 1)) != ((VAR_13 + VAR_14 - 1) & ~(FUNC_0(7) - 1)))) {
  VAR_5->status |= VAR_2;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }

 VAR_15 = FUNC_4(VAR_12, VAR_9, VAR_13, VAR_14, VAR_7);

 if (VAR_15 == -VAR_0) {
  VAR_5->status |= VAR_3;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }






 if (VAR_15 < 0 && VAR_15 != -VAR_1) {
  VAR_5->status |= VAR_2;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }

 if (VAR_10)
  *VAR_10 += VAR_14;

 return FUNC_5((struct ib_mad_hdr *)VAR_5);
}
