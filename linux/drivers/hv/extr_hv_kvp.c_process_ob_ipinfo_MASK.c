
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int addr_family; int dhcp_enabled; scalar_t__ adapter_id; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
struct TYPE_6__ {TYPE_2__ kvp_ip_val; } ;
struct hv_kvp_msg {TYPE_3__ body; } ;
struct TYPE_4__ {int addr_family; int dhcp_enabled; scalar_t__ adapter_id; scalar_t__ dns_addr; scalar_t__ gate_way; scalar_t__ sub_net; scalar_t__ ip_addr; } ;
struct hv_kvp_ip_msg {TYPE_1__ kvp_ip_val; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, void *VAR_5, int VAR_6)
{
 struct hv_kvp_msg *VAR_7 = VAR_4;
 struct hv_kvp_ip_msg *VAR_8 = VAR_5;
 int VAR_9;

 switch (VAR_6) {
 case 128:



  VAR_9 = FUNC_1((char *)VAR_7->body.kvp_ip_val.ip_addr,
    FUNC_0((char *)VAR_7->body.kvp_ip_val.ip_addr),
    VAR_3,
    (wchar_t *)VAR_8->kvp_ip_val.ip_addr,
    VAR_2);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_1((char *)VAR_7->body.kvp_ip_val.sub_net,
    FUNC_0((char *)VAR_7->body.kvp_ip_val.sub_net),
    VAR_3,
    (wchar_t *)VAR_8->kvp_ip_val.sub_net,
    VAR_2);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_1((char *)VAR_7->body.kvp_ip_val.gate_way,
    FUNC_0((char *)VAR_7->body.kvp_ip_val.gate_way),
    VAR_3,
    (wchar_t *)VAR_8->kvp_ip_val.gate_way,
    VAR_1);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_1((char *)VAR_7->body.kvp_ip_val.dns_addr,
    FUNC_0((char *)VAR_7->body.kvp_ip_val.dns_addr),
    VAR_3,
    (wchar_t *)VAR_8->kvp_ip_val.dns_addr,
    VAR_2);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_1((char *)VAR_7->body.kvp_ip_val.adapter_id,
    FUNC_0((char *)VAR_7->body.kvp_ip_val.adapter_id),
    VAR_3,
    (wchar_t *)VAR_8->kvp_ip_val.adapter_id,
    VAR_0);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8->kvp_ip_val.dhcp_enabled =
   VAR_7->body.kvp_ip_val.dhcp_enabled;
  VAR_8->kvp_ip_val.addr_family =
   VAR_7->body.kvp_ip_val.addr_family;
 }

 return 0;
}
