
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtip_port {int dummy; } ;
struct host_to_dev_fis {int type; int opts; int features; int sect_count; int lba_mid; int lba_hi; int device; int command; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct host_to_dev_fis*,int ,int) ;
 int FUNC_1 (struct mtip_port*,struct host_to_dev_fis*,int,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mtip_port *VAR_3, u8 *VAR_4,
     dma_addr_t VAR_5)
{
 struct host_to_dev_fis VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(struct host_to_dev_fis));
 VAR_6.type = 0x27;
 VAR_6.opts = 1 << 7;
 VAR_6.command = VAR_0;
 VAR_6.features = 0xD0;
 VAR_6.sect_count = 1;
 VAR_6.lba_mid = 0x4F;
 VAR_6.lba_hi = 0xC2;
 VAR_6.device = VAR_1;

 return FUNC_1(VAR_3,
     &VAR_6,
     5,
     VAR_5,
     VAR_2,
     0,
     15000);
}
