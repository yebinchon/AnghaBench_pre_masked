
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ims_pcu {int* cmd_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ims_pcu*,int ,int*,size_t,int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int*,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_3,
            u8 VAR_4, const void *VAR_5, size_t VAR_6,
            u8 VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_3->cmd_buf[0] = VAR_4;
 if (VAR_5)
  FUNC_2(&VAR_3->cmd_buf[1], VAR_5, VAR_6);

 VAR_9 = FUNC_0(VAR_3,
    VAR_1, VAR_3->cmd_buf, VAR_6 + 1,
    VAR_7 ? VAR_2 : 0,
    VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_3->dev,
   "Failure when sending 0x%02x command to bootloader, error: %d\n",
   VAR_3->cmd_buf[0], VAR_9);
  return VAR_9;
 }

 if (VAR_7 && VAR_3->cmd_buf[2] != VAR_7) {
  FUNC_1(VAR_3->dev,
   "Unexpected response from bootloader: 0x%02x, wanted 0x%02x\n",
   VAR_3->cmd_buf[2], VAR_7);
  return -VAR_0;
 }

 return 0;
}
