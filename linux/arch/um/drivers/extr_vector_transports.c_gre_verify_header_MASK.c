
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct vector_private {int dev; struct uml_gre_data* transport_data; } ;
struct uml_gre_data {int key_offset; scalar_t__ rx_key; scalar_t__ key; int expected_header; int ipv6; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(
 uint8_t *VAR_0, struct sk_buff *VAR_1, struct vector_private *VAR_2)
{

 uint32_t VAR_3;
 struct uml_gre_data *VAR_4 = VAR_2->transport_data;

 if (!VAR_4->ipv6)
  VAR_0 += sizeof(struct iphdr) ;

 if (*((uint32_t *) VAR_0) != *((uint32_t *) &VAR_4->expected_header)) {
  if (FUNC_0())
   FUNC_1(VAR_2->dev, "header type disagreement, expecting %0x, got %0x",
    *((uint32_t *) &VAR_4->expected_header),
    *((uint32_t *) VAR_0)
   );
  return -1;
 }

 if (VAR_4->key) {
  VAR_3 = (*(uint32_t *)(VAR_0 + VAR_4->key_offset));
  if (VAR_3 != VAR_4->rx_key) {
   if (FUNC_0())
    FUNC_1(VAR_2->dev, "unknown key id %0x, expecting %0x",
      VAR_3, VAR_4->rx_key);
   return -1;
  }
 }
 return 0;
}
