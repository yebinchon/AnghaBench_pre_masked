
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xgene_ahci_context {unsigned int* class; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct ahci_host_priv {struct xgene_ahci_context* plat_data; } ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_link*,unsigned int*,int,unsigned long,int ) ;
 void* FUNC_1 (struct ata_port*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct ata_link*) ;
 int FUNC_4 (int,void*) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_5, unsigned int *VAR_6,
     unsigned long VAR_7)
{
 int VAR_8 = FUNC_3(VAR_5);
 struct ata_port *VAR_9 = VAR_5->ap;
 struct ahci_host_priv *VAR_10 = VAR_9->host->private_data;
 struct xgene_ahci_context *VAR_11 = VAR_10->plat_data;
 void *VAR_12 = FUNC_1(VAR_9);
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15 = 1;
 u32 VAR_16;

 VAR_14 = FUNC_2(VAR_12 + VAR_1);





 VAR_13 = FUNC_2(VAR_12 + VAR_1);
 VAR_13 &= ~VAR_2;
 VAR_13 |= VAR_8 << VAR_3;
 FUNC_4(VAR_13, VAR_12 + VAR_1);

softreset_retry:
 VAR_16 = FUNC_0(VAR_5, VAR_6, VAR_8,
          VAR_7, VAR_4);

 VAR_11->class[VAR_9->port_no] = *VAR_6;
 if (*VAR_6 != VAR_0) {




  if (VAR_15--) {
   FUNC_4(VAR_14, VAR_12 + VAR_1);
   goto softreset_retry;
  }
 }

 return VAR_16;
}
