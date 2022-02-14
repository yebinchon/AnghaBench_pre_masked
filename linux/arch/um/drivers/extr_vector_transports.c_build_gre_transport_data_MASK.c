
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_private {int header_size; int rx_header_size; int parsed; int * verify_header; int * form_header; struct uml_gre_data* transport_data; } ;
struct TYPE_2__ {int header; int arptype; } ;
struct uml_gre_data {int sequence; int key_offset; int sequence_offset; int checksum_offset; int ipv6; int key; int has_sequence; int pin_sequence; TYPE_1__ expected_header; void* tx_key; void* rx_key; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct uml_gre_data* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct vector_private *VAR_8)
{
 struct uml_gre_data *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_8->transport_data = FUNC_2(sizeof(struct uml_gre_data), VAR_2);
 if (VAR_8->transport_data == ((void*)0))
  return -VAR_1;
 VAR_9 = VAR_8->transport_data;
 VAR_9->sequence = 0;

 VAR_9->expected_header.arptype = VAR_3;
 VAR_9->expected_header.header = 0;

 VAR_8->form_header = &VAR_6;
 VAR_8->verify_header = &VAR_7;
 VAR_8->header_size = 4;
 VAR_9->key_offset = 4;
 VAR_9->sequence_offset = 4;
 VAR_9->checksum_offset = 4;

 VAR_9->ipv6 = 0;
 if (FUNC_1(VAR_8->parsed, "v6", &VAR_10)) {
  if (VAR_10 > 0)
   VAR_9->ipv6 = 1;
 }
 VAR_9->key = 0;
 if (FUNC_1(VAR_8->parsed, "rx_key", &VAR_11)) {
  if (FUNC_1(VAR_8->parsed, "tx_key", &VAR_12)) {
   VAR_9->key = 1;
   VAR_9->expected_header.header |= VAR_4;
   VAR_9->rx_key = FUNC_0(VAR_11);
   VAR_9->tx_key = FUNC_0(VAR_12);
   VAR_8->header_size += 4;
   VAR_9->sequence_offset += 4;
  } else {
   return -VAR_0;
  }
 }

 VAR_9->sequence = 0;
 if (FUNC_1(VAR_8->parsed, "sequence", &VAR_10)) {
  if (VAR_10 > 0) {
   VAR_8->header_size += 4;
   VAR_9->has_sequence = 1;
   VAR_9->expected_header.header |= VAR_5;
   if (FUNC_1(
    VAR_8->parsed, "pin_sequence", &VAR_10)) {
    if (VAR_10 > 0)
     VAR_9->pin_sequence = 1;
   }
  }
 }
 VAR_8->rx_header_size = VAR_8->header_size;
 if (!VAR_9->ipv6)
  VAR_8->rx_header_size += sizeof(struct iphdr);
 return 0;
}
