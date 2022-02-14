
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_ioports {scalar_t__ cmd_addr; scalar_t__ command_addr; scalar_t__ status_addr; scalar_t__ device_addr; scalar_t__ lbah_addr; scalar_t__ lbam_addr; scalar_t__ lbal_addr; scalar_t__ nsect_addr; scalar_t__ feature_addr; scalar_t__ error_addr; scalar_t__ data_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct ata_ioports *VAR_10,
         unsigned int VAR_11)
{

 VAR_10->data_addr = VAR_10->cmd_addr + (VAR_1 << VAR_11);
 VAR_10->error_addr = VAR_10->cmd_addr + (VAR_3 << VAR_11);
 VAR_10->feature_addr = VAR_10->cmd_addr + (VAR_4 << VAR_11);
 VAR_10->nsect_addr = VAR_10->cmd_addr + (VAR_8 << VAR_11);
 VAR_10->lbal_addr = VAR_10->cmd_addr + (VAR_6 << VAR_11);
 VAR_10->lbam_addr = VAR_10->cmd_addr + (VAR_7 << VAR_11);
 VAR_10->lbah_addr = VAR_10->cmd_addr + (VAR_5 << VAR_11);
 VAR_10->device_addr = VAR_10->cmd_addr + (VAR_2 << VAR_11);
 VAR_10->status_addr = VAR_10->cmd_addr + (VAR_9 << VAR_11);
 VAR_10->command_addr = VAR_10->cmd_addr + (VAR_0 << VAR_11);
}
