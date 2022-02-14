
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vector_private {int dev; struct uml_l2tpv3_data* transport_data; } ;
struct uml_l2tpv3_data {int cookie_offset; scalar_t__ rx_cookie; int session_offset; scalar_t__ rx_session; scalar_t__ cookie_is_64; scalar_t__ cookie; int ipv6; int udp; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(
 uint8_t *VAR_0, struct sk_buff *VAR_1, struct vector_private *VAR_2)
{
 struct uml_l2tpv3_data *VAR_3 = VAR_2->transport_data;
 uint32_t *VAR_4;
 uint64_t VAR_5;

 if ((!VAR_3->udp) && (!VAR_3->ipv6))
  VAR_0 += sizeof(struct iphdr) ;






 if (VAR_3->cookie) {
  if (VAR_3->cookie_is_64)
   VAR_5 = *(uint64_t *)(VAR_0 + VAR_3->cookie_offset);
  else
   VAR_5 = *(uint32_t *)(VAR_0 + VAR_3->cookie_offset);
  if (VAR_5 != VAR_3->rx_cookie) {
   if (FUNC_0())
    FUNC_1(VAR_2->dev, "uml_l2tpv3: unknown cookie id");
   return -1;
  }
 }
 VAR_4 = (uint32_t *) (VAR_0 + VAR_3->session_offset);
 if (*VAR_4 != VAR_3->rx_session) {
  if (FUNC_0())
   FUNC_1(VAR_2->dev, "uml_l2tpv3: session mismatch");
  return -1;
 }
 return 0;
}
