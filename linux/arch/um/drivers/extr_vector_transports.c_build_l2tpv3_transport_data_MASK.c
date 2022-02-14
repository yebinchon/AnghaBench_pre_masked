
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_private {int header_size; int rx_header_size; int parsed; int * verify_header; int * form_header; struct uml_l2tpv3_data* transport_data; } ;
struct uml_l2tpv3_data {int cookie_offset; int counter_offset; int ipv6; int cookie_is_64; int cookie; int has_counter; int pin_counter; int udp; scalar_t__ session_offset; void* tx_cookie; void* rx_cookie; void* rx_session; void* tx_session; scalar_t__ counter; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned long) ;
 void* FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ,char*,int*) ;
 scalar_t__ FUNC_3 (int ,char*,unsigned long*) ;
 struct uml_l2tpv3_data* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct vector_private *VAR_5)
{

 struct uml_l2tpv3_data *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;

 VAR_5->transport_data = FUNC_4(
  sizeof(struct uml_l2tpv3_data), VAR_2);

 if (VAR_5->transport_data == ((void*)0))
  return -VAR_1;

 VAR_6 = VAR_5->transport_data;

 VAR_5->form_header = &VAR_3;
 VAR_5->verify_header = &VAR_4;
 VAR_6->counter = 0;

 VAR_5->header_size = 4;
 VAR_6->session_offset = 0;
 VAR_6->cookie_offset = 4;
 VAR_6->counter_offset = 4;


 VAR_6->ipv6 = 0;
 if (FUNC_2(VAR_5->parsed, "v6", &VAR_7)) {
  if (VAR_7 > 0)
   VAR_6->ipv6 = 1;
 }

 if (FUNC_2(VAR_5->parsed, "rx_session", &VAR_8)) {
  if (FUNC_2(VAR_5->parsed, "tx_session", &VAR_9)) {
   VAR_6->tx_session = FUNC_0(VAR_9);
   VAR_6->rx_session = FUNC_0(VAR_8);
  } else {
   return -VAR_0;
  }
 } else {
  return -VAR_0;
 }

 VAR_6->cookie_is_64 = 0;
 if (FUNC_2(VAR_5->parsed, "cookie64", &VAR_7)) {
  if (VAR_7 > 0)
   VAR_6->cookie_is_64 = 1;
 }
 VAR_6->cookie = 0;
 if (FUNC_3(VAR_5->parsed, "rx_cookie", &VAR_10)) {
  if (FUNC_3(VAR_5->parsed, "tx_cookie", &VAR_11)) {
   VAR_6->cookie = 1;
   if (VAR_6->cookie_is_64) {
    VAR_6->rx_cookie = FUNC_1(VAR_10);
    VAR_6->tx_cookie = FUNC_1(VAR_11);
    VAR_5->header_size += 8;
    VAR_6->counter_offset += 8;
   } else {
    VAR_6->rx_cookie = FUNC_0(VAR_10);
    VAR_6->tx_cookie = FUNC_0(VAR_11);
    VAR_5->header_size += 4;
    VAR_6->counter_offset += 4;
   }
  } else {
   return -VAR_0;
  }
 }

 VAR_6->has_counter = 0;
 if (FUNC_2(VAR_5->parsed, "counter", &VAR_7)) {
  if (VAR_7 > 0) {
   VAR_6->has_counter = 1;
   VAR_5->header_size += 4;
   if (FUNC_2(
    VAR_5->parsed, "pin_counter", &VAR_7)) {
    if (VAR_7 > 0)
     VAR_6->pin_counter = 1;
   }
  }
 }

 if (FUNC_2(VAR_5->parsed, "udp", &VAR_7)) {
  if (VAR_7 > 0) {
   VAR_6->udp = 1;
   VAR_5->header_size += 4;
   VAR_6->counter_offset += 4;
   VAR_6->session_offset += 4;
   VAR_6->cookie_offset += 4;
  }
 }

 VAR_5->rx_header_size = VAR_5->header_size;
 if ((!VAR_6->ipv6) && (!VAR_6->udp))
  VAR_5->rx_header_size += sizeof(struct iphdr);

 return 0;
}
