
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vector_private {struct uml_l2tpv3_data* transport_data; } ;
struct uml_l2tpv3_data {int session_offset; int cookie_offset; int counter_offset; int counter; scalar_t__ pin_counter; scalar_t__ has_counter; scalar_t__ tx_cookie; scalar_t__ cookie_is_64; scalar_t__ cookie; scalar_t__ tx_session; scalar_t__ udp; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_1,
 struct sk_buff *VAR_2, struct vector_private *VAR_3)
{
 struct uml_l2tpv3_data *VAR_4 = VAR_3->transport_data;
 uint32_t *VAR_5;

 if (VAR_4->udp)
  *(uint32_t *) VAR_1 = FUNC_0(VAR_0);
 (*(uint32_t *) (VAR_1 + VAR_4->session_offset)) = VAR_4->tx_session;

 if (VAR_4->cookie) {
  if (VAR_4->cookie_is_64)
   (*(uint64_t *)(VAR_1 + VAR_4->cookie_offset)) =
    VAR_4->tx_cookie;
  else
   (*(uint32_t *)(VAR_1 + VAR_4->cookie_offset)) =
    VAR_4->tx_cookie;
 }
 if (VAR_4->has_counter) {
  VAR_5 = (uint32_t *)(VAR_1 + VAR_4->counter_offset);
  if (VAR_4->pin_counter) {
   *VAR_5 = 0;
  } else {
   VAR_4->counter++;
   *VAR_5 = FUNC_0(VAR_4->counter);
  }
 }
 return 0;
}
