
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_fw_loader_handle *VAR_5,
          unsigned char VAR_6, unsigned int VAR_7,
          int VAR_8)
{
 unsigned int VAR_9 = 0, VAR_10 = 0;
 unsigned int VAR_11 = (1 << VAR_0);
 int VAR_12 = VAR_3;
 int VAR_13 = 0;

 VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_4);
 VAR_9 &= 0xffff;
 while ((int)VAR_7 > VAR_13 && VAR_12--) {
  if (VAR_8)
   VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_1);

  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_4);
  VAR_10 &= 0xffff;
  VAR_13 = VAR_10 - VAR_9;

  if (VAR_13 < 0)
   VAR_13 += 0x10000;


  if (VAR_13 >= 8 && !(VAR_11 & (1 << VAR_0)))
   return 0;
 }
 if (VAR_12 < 0) {
  FUNC_0("QAT: wait_num_cycles time out\n");
  return -VAR_2;
 }
 return 0;
}
