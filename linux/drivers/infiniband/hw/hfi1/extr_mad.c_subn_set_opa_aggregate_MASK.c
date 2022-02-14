
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; int attr_mod; } ;
struct opa_aggregate {int data; int attr_id; int attr_mod; int err_reqlength; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct opa_smp*) ;
 int FUNC_3 (struct ib_mad_hdr*) ;
 int FUNC_4 (struct opa_aggregate*) ;
 int FUNC_5 (int ,struct opa_smp*,int,int ,struct ib_device*,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_6(struct opa_smp *VAR_2,
      struct ib_device *VAR_3, u8 VAR_4,
      u32 *VAR_5, int VAR_6)
{
 int VAR_7;
 u32 VAR_8 = FUNC_1(VAR_2->attr_mod) & 0x000000ff;
 u8 *VAR_9 = FUNC_2(VAR_2);

 if (VAR_8 < 1 || VAR_8 > 117) {
  VAR_2->status |= VAR_1;
  return FUNC_3((struct ib_mad_hdr *)VAR_2);
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct opa_aggregate *VAR_10;
  size_t VAR_11;
  size_t VAR_12;
  u32 VAR_13;

  VAR_10 = (struct opa_aggregate *)VAR_9;
  VAR_11 = (FUNC_0(VAR_10->err_reqlength) & 0x007f) * 8;
  VAR_12 = sizeof(*VAR_10) + VAR_11;
  VAR_13 = FUNC_1(VAR_10->attr_mod);

  *VAR_5 += VAR_12;

  if (VAR_9 + VAR_12 > ((u8 *)VAR_2) + sizeof(*VAR_2)) {
   VAR_2->status |= VAR_1;
   return FUNC_3((struct ib_mad_hdr *)VAR_2);
  }

  (void)FUNC_5(VAR_10->attr_id, VAR_2, VAR_13, VAR_10->data,
           VAR_3, VAR_4, ((void*)0), (u32)VAR_11,
           VAR_6);

  if (VAR_2->status & VAR_1)
   break;
  if (VAR_2->status & ~VAR_0) {
   FUNC_4(VAR_10);
   return FUNC_3((struct ib_mad_hdr *)VAR_2);
  }
  VAR_9 += VAR_12;
 }

 return FUNC_3((struct ib_mad_hdr *)VAR_2);
}
