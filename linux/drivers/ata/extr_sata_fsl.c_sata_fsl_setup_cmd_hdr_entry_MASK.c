
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sata_fsl_port_priv {int cmdentry_paddr; TYPE_1__* cmdslot; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* desc_info; void* ttl; void* prde_fis_len; void* cda; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,void*,void*,void*,void*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct sata_fsl_port_priv *VAR_1,
      unsigned int VAR_2, u32 VAR_3,
      u32 VAR_4, u8 VAR_5,
      u8 VAR_6)
{
 dma_addr_t VAR_7;

 VAR_7 = VAR_1->cmdentry_paddr +
     VAR_2 * VAR_0;



 VAR_1->cmdslot[VAR_2].cda = FUNC_1(VAR_7);
 VAR_1->cmdslot[VAR_2].prde_fis_len =
     FUNC_1((VAR_5 << 16) | (VAR_6 << 2));
 VAR_1->cmdslot[VAR_2].ttl = FUNC_1(VAR_4 & ~0x03);
 VAR_1->cmdslot[VAR_2].desc_info = FUNC_1(VAR_3 | (VAR_2 & 0x1F));

 FUNC_0("cda=0x%x, prde_fis_len=0x%x, ttl=0x%x, di=0x%x\n",
  VAR_1->cmdslot[VAR_2].cda,
  VAR_1->cmdslot[VAR_2].prde_fis_len,
  VAR_1->cmdslot[VAR_2].ttl, VAR_1->cmdslot[VAR_2].desc_info);

}
