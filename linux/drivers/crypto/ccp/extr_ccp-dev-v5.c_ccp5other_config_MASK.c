
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccp_device {scalar_t__ io_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ccp_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ccp_device *VAR_10)
{
 int VAR_11;
 u32 VAR_12;



 FUNC_2(0x00012D57, VAR_10->io_regs + VAR_6);
 FUNC_2(0x00000003, VAR_10->io_regs + VAR_3);
 for (VAR_11 = 0; VAR_11 < 12; VAR_11++) {
  VAR_12 = FUNC_1(VAR_10->io_regs + VAR_9);
  FUNC_2(VAR_12, VAR_10->io_regs + VAR_0);
 }

 FUNC_2(0x0000001F, VAR_10->io_regs + VAR_4);
 FUNC_2(0x00005B6D, VAR_10->io_regs + VAR_5);
 FUNC_2(0x00000000, VAR_10->io_regs + VAR_2);

 FUNC_2(0x3FFFFFFF, VAR_10->io_regs + VAR_8);
 FUNC_2(0x000003FF, VAR_10->io_regs + VAR_7);

 FUNC_2(0x00108823, VAR_10->io_regs + VAR_1);

 FUNC_0(VAR_10);
}
