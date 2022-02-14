
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {size_t data_len; scalar_t__ cmd_status; scalar_t__ flags; scalar_t__ timeout; int cmd; } ;
struct mfi_dcmd_frame {TYPE_1__ header; int opcode; int mbox; } ;
struct mfi_ioc_passthru {size_t buf_size; void* buf; struct mfi_dcmd_frame ioc_frame; } ;
typedef int ioc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__*,int ,size_t) ;
 int FUNC_1 (struct mfi_ioc_passthru*,int) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,struct mfi_ioc_passthru*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(int VAR_7, uint32_t VAR_8, void *VAR_9, size_t VAR_10,
    uint8_t *VAR_11, size_t VAR_12, uint8_t *VAR_13)
{
 struct mfi_ioc_passthru VAR_14;
 struct mfi_dcmd_frame *VAR_15;
 int VAR_16;

 if ((VAR_11 != ((void*)0) && (VAR_12 == 0 || VAR_12 > VAR_4)) ||
     (VAR_11 == ((void*)0) && VAR_12 != 0)) {
  VAR_6 = VAR_0;
  return (-1);
 }

 FUNC_1(&VAR_14, sizeof(VAR_14));
 VAR_15 = &VAR_14.ioc_frame;
 if (VAR_11)
  FUNC_0(VAR_11, VAR_15->mbox, VAR_12);
 VAR_15->header.cmd = VAR_3;
 VAR_15->header.timeout = 0;
 VAR_15->header.flags = 0;
 VAR_15->header.data_len = VAR_10;
 VAR_15->opcode = VAR_8;

 VAR_14.buf = VAR_9;
 VAR_14.buf_size = VAR_10;
 VAR_16 = FUNC_2(VAR_7, VAR_2, &VAR_14);
 if (VAR_16 < 0)
  return (VAR_16);

 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_15->header.cmd_status;
 else if (VAR_15->header.cmd_status != VAR_5) {
  FUNC_4("Command failed: %s",
      FUNC_3(VAR_15->header.cmd_status));
  VAR_6 = VAR_1;
  return (-1);
 }
 return (0);
}
