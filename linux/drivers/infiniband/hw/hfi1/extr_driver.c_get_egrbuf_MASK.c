
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_4__ {int threshold; TYPE_1__* rcvtids; } ;
struct hfi1_ctxtdata {TYPE_2__ egrbufs; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void *FUNC_2(const struct hfi1_ctxtdata *VAR_1, u64 VAR_2,
          u8 *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_2), VAR_5 = FUNC_0(VAR_2);

 *VAR_3 |= !(VAR_4 & (VAR_1->egrbufs.threshold - 1)) && !VAR_5;
 return (void *)(((u64)(VAR_1->egrbufs.rcvtids[VAR_4].addr)) +
   (VAR_5 * VAR_0));
}
