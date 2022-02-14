
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct scpi_xfer {unsigned int tx_len; unsigned int rx_len; int status; int cmd; int done; void* rx_buf; void* tx_buf; int slot; } ;
struct scpi_chan {int chan; } ;
struct TYPE_2__ {scalar_t__* commands; size_t num_chans; scalar_t__ is_legacy; struct scpi_chan* channels; int next_chan; int cmd_priority; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t,unsigned int) ;
 int FUNC_2 (size_t,unsigned int) ;
 int VAR_4 ;
 size_t FUNC_3 (int *) ;
 struct scpi_xfer* FUNC_4 (struct scpi_chan*) ;
 int FUNC_5 (int ,struct scpi_xfer*) ;
 int FUNC_6 (struct scpi_xfer*,struct scpi_chan*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_8 (struct scpi_chan*,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (size_t,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(u8 VAR_6, void *VAR_7, unsigned int VAR_8,
        void *VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 struct scpi_xfer *VAR_14;
 struct scpi_chan *VAR_15;

 if (VAR_5->commands[VAR_6] < 0)
  return -VAR_1;

 VAR_13 = VAR_5->commands[VAR_6];

 if (VAR_5->is_legacy)
  VAR_12 = FUNC_10(VAR_13, VAR_5->cmd_priority) ? 1 : 0;
 else
  VAR_12 = FUNC_3(&VAR_5->next_chan) %
   VAR_5->num_chans;
 VAR_15 = VAR_5->channels + VAR_12;

 VAR_14 = FUNC_4(VAR_15);
 if (!VAR_14)
  return -VAR_0;

 if (VAR_5->is_legacy) {
  VAR_14->cmd = FUNC_1(VAR_13, VAR_8);
  VAR_14->slot = VAR_14->cmd;
 } else {
  VAR_14->slot = FUNC_0(VAR_4);
  VAR_14->cmd = FUNC_2(VAR_13, VAR_8);
 }
 VAR_14->tx_buf = VAR_7;
 VAR_14->tx_len = VAR_8;
 VAR_14->rx_buf = VAR_9;
 VAR_14->rx_len = VAR_10;
 FUNC_7(&VAR_14->done);

 VAR_11 = FUNC_5(VAR_15->chan, VAR_14);
 if (VAR_11 < 0 || !VAR_9)
  goto out;

 if (!FUNC_11(&VAR_14->done, VAR_3))
  VAR_11 = -VAR_2;
 else

  VAR_11 = VAR_14->status;
out:
 if (VAR_11 < 0 && VAR_9)
  FUNC_8(VAR_15, VAR_14->cmd);

 FUNC_6(VAR_14, VAR_15);

 return VAR_11 > 0 ? FUNC_9(VAR_11) : VAR_11;
}
