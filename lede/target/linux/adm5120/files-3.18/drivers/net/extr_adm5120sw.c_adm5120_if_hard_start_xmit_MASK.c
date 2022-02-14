
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {int trans_start; TYPE_1__ stats; int name; } ;
struct dma_desc {int buf1; int misc; int buflen; } ;
struct adm5120_if_priv {int vlan_no; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int * VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 struct adm5120_if_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_13 ;
 struct dma_desc* VAR_14 ;
 struct sk_buff** VAR_15 ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_16,
  struct net_device *VAR_17)
{
 struct dma_desc *VAR_18;
 struct adm5120_if_priv *VAR_19 = FUNC_3(VAR_17);
 unsigned int VAR_20;
 unsigned long VAR_21;
 int VAR_22;


 FUNC_5(&VAR_13);


 VAR_20 = VAR_10 % VAR_8;

 VAR_18 = &VAR_14[VAR_20];
 if (VAR_18->buf1 & VAR_1) {


  FUNC_1("%s unable to transmit, packet dopped\n", VAR_17->name);
  FUNC_2(VAR_16);
  VAR_17->stats.tx_dropped++;
  return 0;
 }

 VAR_15[VAR_20] = VAR_16;
 VAR_21 = (VAR_18->buf1 & VAR_0);
 VAR_21 |= FUNC_0(VAR_16->data);

 VAR_18->misc =
     ((VAR_16->len < VAR_3 ? VAR_3 : VAR_16->len) << VAR_2) |
     (0x1 << VAR_19->vlan_no);

 VAR_18->buflen = VAR_16->len < VAR_3 ? VAR_3 : VAR_16->len;

 VAR_18->buf1 = VAR_21 | VAR_1;
 FUNC_7(VAR_6, VAR_4);

 VAR_10++;
 if (VAR_10 == VAR_11 + VAR_7) {
  for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++) {
   if (!VAR_9[VAR_22])
    continue;
   FUNC_4(VAR_9[VAR_22]);
  }
 }

 VAR_17->trans_start = VAR_12;

 FUNC_6(&VAR_13);

 return 0;
}
