
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u32 ;
struct seq_file {scalar_t__ private; } ;
struct dpaa2_caam_priv {int num_pairs; TYPE_2__* tx_queue_attr; TYPE_1__* rx_queue_attr; int dev; } ;
struct TYPE_4__ {char* fqid; } ;
struct TYPE_3__ {char* fqid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char**,char**) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct dpaa2_caam_priv *VAR_2 = (struct dpaa2_caam_priv *)VAR_0->private;
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(VAR_0, "FQ stats for %s:\n", FUNC_0(VAR_2->dev));
 FUNC_2(VAR_0, "%s%16s%16s\n",
     "Rx-VFQID",
     "Pending frames",
     "Pending bytes");

 for (VAR_6 = 0; VAR_6 < VAR_2->num_pairs; VAR_6++) {
  VAR_3 = VAR_2->rx_queue_attr[VAR_6].fqid;
  VAR_7 = FUNC_1(((void*)0), VAR_3, &VAR_4, &VAR_5);
  if (VAR_7)
   continue;

  FUNC_2(VAR_0, "%5d%16u%16u\n", VAR_3, VAR_4, VAR_5);
 }

 FUNC_2(VAR_0, "%s%16s%16s\n",
     "Tx-VFQID",
     "Pending frames",
     "Pending bytes");

 for (VAR_6 = 0; VAR_6 < VAR_2->num_pairs; VAR_6++) {
  VAR_3 = VAR_2->tx_queue_attr[VAR_6].fqid;
  VAR_7 = FUNC_1(((void*)0), VAR_3, &VAR_4, &VAR_5);
  if (VAR_7)
   continue;

  FUNC_2(VAR_0, "%5d%16u%16u\n", VAR_3, VAR_4, VAR_5);
 }

 return 0;
}
