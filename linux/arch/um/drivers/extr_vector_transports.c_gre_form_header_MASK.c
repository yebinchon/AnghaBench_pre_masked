
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct vector_private {struct uml_gre_data* transport_data; } ;
struct uml_gre_data {int key_offset; int sequence_offset; int sequence; scalar_t__ pin_sequence; scalar_t__ has_sequence; scalar_t__ tx_key; scalar_t__ key; int expected_header; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0,
  struct sk_buff *VAR_1, struct vector_private *VAR_2)
{
 struct uml_gre_data *VAR_3 = VAR_2->transport_data;
 uint32_t *VAR_4;
 *((uint32_t *) VAR_0) = *((uint32_t *) &VAR_3->expected_header);
 if (VAR_3->key)
  (*(uint32_t *) (VAR_0 + VAR_3->key_offset)) = VAR_3->tx_key;
 if (VAR_3->has_sequence) {
  VAR_4 = (uint32_t *)(VAR_0 + VAR_3->sequence_offset);
  if (VAR_3->pin_sequence)
   *VAR_4 = 0;
  else
   *VAR_4 = FUNC_0(++VAR_3->sequence);
 }
 return 0;
}
