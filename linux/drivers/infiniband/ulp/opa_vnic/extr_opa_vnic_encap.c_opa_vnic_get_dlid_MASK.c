
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int u_mcast_dlid; int* u_ucast_dlid; } ;
struct __opa_veswport_info {TYPE_1__ vesw; } ;
struct opa_vnic_adapter {struct __opa_veswport_info info; } ;
struct ethhdr {int* h_dest; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (struct opa_vnic_adapter*,struct ethhdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static uint32_t FUNC_6(struct opa_vnic_adapter *VAR_2,
      struct sk_buff *VAR_3, u8 VAR_4)
{
 struct __opa_veswport_info *VAR_5 = &VAR_2->info;
 struct ethhdr *VAR_6 = (struct ethhdr *)FUNC_3(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_6);
 if (VAR_7)
  return VAR_7;

 if (FUNC_1(VAR_6->h_dest)) {
  VAR_7 = VAR_5->vesw.u_mcast_dlid;
 } else {
  if (FUNC_0(VAR_6->h_dest)) {
   VAR_7 = ((uint32_t)VAR_6->h_dest[5] << 16) |
    ((uint32_t)VAR_6->h_dest[4] << 8) |
    VAR_6->h_dest[3];
   if (FUNC_4(!VAR_7))
    FUNC_5("Null dlid in MAC address\n");
  } else if (VAR_4 != VAR_1) {
   if (VAR_4 < VAR_0)
    VAR_7 = VAR_5->vesw.u_ucast_dlid[VAR_4];
  }
 }

 return VAR_7;
}
