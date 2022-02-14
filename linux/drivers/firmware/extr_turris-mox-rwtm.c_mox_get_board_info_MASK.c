
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct armada_37xx_rwtm_rx_msg {int* status; int retval; } ;
struct mox_rwtm {int serial_number; int board_version; int ram_size; int has_board_info; int has_pubkey; int pubkey; int dev; int cmd_done; int mbox; int mac_address2; int mac_address1; struct armada_37xx_rwtm_rx_msg reply; } ;
struct armada_37xx_rwtm_tx_msg {void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct armada_37xx_rwtm_tx_msg*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct mox_rwtm *VAR_4)
{
 struct armada_37xx_rwtm_tx_msg VAR_5;
 struct armada_37xx_rwtm_rx_msg *VAR_6 = &VAR_4->reply;
 int VAR_7;

 VAR_5.command = VAR_2;
 VAR_7 = FUNC_1(VAR_4->mbox, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_6(&VAR_4->cmd_done, VAR_1 / 2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_6->retval);
 if (VAR_7 < 0 && VAR_7 != -VAR_0) {
  return VAR_7;
 } else if (VAR_7 == -VAR_0) {
  FUNC_0(VAR_4->dev,
    "Board does not have manufacturing information burned!\n");
 } else {
  VAR_4->serial_number = VAR_6->status[1];
  VAR_4->serial_number <<= 32;
  VAR_4->serial_number |= VAR_6->status[0];
   VAR_4->board_version = VAR_6->status[2];
  VAR_4->ram_size = VAR_6->status[3];
  FUNC_4(VAR_4->mac_address1, VAR_6->status[4],
      VAR_6->status[5]);
  FUNC_4(VAR_4->mac_address2, VAR_6->status[6],
      VAR_6->status[7]);
  VAR_4->has_board_info = 1;

  FUNC_3("Turris Mox serial number %016llX\n",
   VAR_4->serial_number);
  FUNC_3("           board version %i\n", VAR_4->board_version);
  FUNC_3("           burned RAM size %i MiB\n", VAR_4->ram_size);
 }

 VAR_5.command = VAR_3;
 VAR_7 = FUNC_1(VAR_4->mbox, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_6(&VAR_4->cmd_done, VAR_1 / 2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_6->retval);
 if (VAR_7 < 0 && VAR_7 != -VAR_0) {
  return VAR_7;
 } else if (VAR_7 == -VAR_0) {
  FUNC_0(VAR_4->dev, "Board has no public key burned!\n");
 } else {
  u32 *VAR_8 = VAR_6->status;

  VAR_4->has_pubkey = 1;
  FUNC_5(VAR_4->pubkey,
   "%06x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x",
   VAR_7, VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7],
   VAR_8[8], VAR_8[9], VAR_8[10], VAR_8[11], VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);
 }

 return 0;
}
