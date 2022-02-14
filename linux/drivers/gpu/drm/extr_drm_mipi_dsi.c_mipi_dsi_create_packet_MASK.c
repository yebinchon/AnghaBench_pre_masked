
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_packet {int* header; int payload_length; int* payload; int size; } ;
struct mipi_dsi_msg {int type; int channel; int tx_len; int* tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct mipi_dsi_packet*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mipi_dsi_packet *VAR_1,
      const struct mipi_dsi_msg *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;


 if (!FUNC_2(VAR_2->type) &&
     !FUNC_1(VAR_2->type))
  return -VAR_0;

 if (VAR_2->channel > 3)
  return -VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->header[0] = ((VAR_2->channel & 0x3) << 6) | (VAR_2->type & 0x3f);
 if (FUNC_1(VAR_2->type)) {
  VAR_1->header[1] = (VAR_2->tx_len >> 0) & 0xff;
  VAR_1->header[2] = (VAR_2->tx_len >> 8) & 0xff;

  VAR_1->payload_length = VAR_2->tx_len;
  VAR_1->payload = VAR_2->tx_buf;
 } else {
  const u8 *VAR_3 = VAR_2->tx_buf;

  VAR_1->header[1] = (VAR_2->tx_len > 0) ? VAR_3[0] : 0;
  VAR_1->header[2] = (VAR_2->tx_len > 1) ? VAR_3[1] : 0;
 }

 VAR_1->size = sizeof(VAR_1->header) + VAR_1->payload_length;

 return 0;
}
