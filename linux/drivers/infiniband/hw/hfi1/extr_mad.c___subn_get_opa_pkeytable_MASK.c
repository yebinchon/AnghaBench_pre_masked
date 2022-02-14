
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int*) ;
 unsigned int FUNC_4 (struct hfi1_devdata*) ;
 int FUNC_5 (char*,int,int,int,...) ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_7 (size_t,int) ;

__attribute__((used)) static int FUNC_8(struct opa_smp *VAR_3, u32 VAR_4, u8 *VAR_5,
        struct ib_device *VAR_6, u8 VAR_7,
        u32 *VAR_8, u32 VAR_9)
{
 struct hfi1_devdata *VAR_10 = FUNC_2(VAR_6);
 u32 VAR_11 = FUNC_0(VAR_4);
 u32 VAR_12 = VAR_4 & 0x7ff;
 __be16 *VAR_13;
 u16 *VAR_14;
 int VAR_15;
 u16 VAR_16;
 unsigned VAR_17 = FUNC_4(VAR_10);
 size_t VAR_18;

 if (VAR_11 == 0) {
  FUNC_5("OPA Get PKey AM Invalid : P = %d; B = 0x%x; N = 0x%x\n",
   VAR_7, VAR_12, VAR_11);
  VAR_3->status |= VAR_0;
  return FUNC_6((struct ib_mad_hdr *)VAR_3);
 }

 VAR_16 = (u16)(VAR_17 / VAR_2) + 1;

 VAR_18 = (VAR_11 * VAR_2) * sizeof(u16);

 if (FUNC_7(VAR_18, VAR_9)) {
  VAR_3->status |= VAR_0;
  return FUNC_6((struct ib_mad_hdr *)VAR_3);
 }

 if (VAR_12 + VAR_11 > VAR_16 ||
     VAR_11 > VAR_1) {
  FUNC_5("OPA Get PKey AM Invalid : s 0x%x; req 0x%x; "
   "avail 0x%x; blk/smp 0x%lx\n",
   VAR_12, VAR_11, VAR_16,
   VAR_1);
  VAR_3->status |= VAR_0;
  return FUNC_6((struct ib_mad_hdr *)VAR_3);
 }

 VAR_13 = (__be16 *)VAR_5;
 VAR_14 = (u16 *)VAR_5;

 if (VAR_12 == 0) {
  FUNC_3(VAR_10, VAR_7, VAR_14);
  for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++)
   VAR_13[VAR_15] = FUNC_1(VAR_14[VAR_15]);
  if (VAR_8)
   *VAR_8 += VAR_18;
 } else {
  VAR_3->status |= VAR_0;
 }
 return FUNC_6((struct ib_mad_hdr *)VAR_3);
}
