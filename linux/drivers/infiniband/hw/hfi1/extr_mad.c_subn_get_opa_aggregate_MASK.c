
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
 int FUNC_2 (int *,int ,size_t) ;
 int * FUNC_3 (struct opa_smp*) ;
 int FUNC_4 (struct ib_mad_hdr*) ;
 int FUNC_5 (struct opa_aggregate*) ;
 int FUNC_6 (int ,struct opa_smp*,int,int ,struct ib_device*,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct opa_smp *VAR_2,
      struct ib_device *VAR_3, u8 VAR_4,
      u32 *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = FUNC_1(VAR_2->attr_mod) & 0x000000ff;
 u8 *VAR_8 = FUNC_3(VAR_2);

 if (VAR_7 < 1 || VAR_7 > 117) {
  VAR_2->status |= VAR_1;
  return FUNC_4((struct ib_mad_hdr *)VAR_2);
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct opa_aggregate *VAR_9;
  size_t VAR_10;
  size_t VAR_11;
  u32 VAR_12;

  VAR_9 = (struct opa_aggregate *)VAR_8;
  VAR_10 = (FUNC_0(VAR_9->err_reqlength) & 0x007f) * 8;
  VAR_11 = sizeof(*VAR_9) + VAR_10;
  VAR_12 = FUNC_1(VAR_9->attr_mod);

  *VAR_5 += VAR_11;

  if (VAR_8 + VAR_11 > ((u8 *)VAR_2) + sizeof(*VAR_2)) {
   VAR_2->status |= VAR_1;
   return FUNC_4((struct ib_mad_hdr *)VAR_2);
  }


  FUNC_2(VAR_8 + sizeof(*VAR_9), 0, VAR_10);

  (void)FUNC_6(VAR_9->attr_id, VAR_2, VAR_12, VAR_9->data,
           VAR_3, VAR_4, ((void*)0), (u32)VAR_10);

  if (VAR_2->status & VAR_1)
   break;
  if (VAR_2->status & ~VAR_0) {
   FUNC_5(VAR_9);
   return FUNC_4((struct ib_mad_hdr *)VAR_2);
  }
  VAR_8 += VAR_11;
 }

 return FUNC_4((struct ib_mad_hdr *)VAR_2);
}
