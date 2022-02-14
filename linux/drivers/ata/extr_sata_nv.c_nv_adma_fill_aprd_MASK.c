
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct nv_adma_prd {scalar_t__ packet_len; int flags; int len; int addr; } ;
struct TYPE_2__ {int flags; } ;
struct ata_queued_cmd {int n_elem; TYPE_1__ tf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_4,
         struct scatterlist *VAR_5,
         int VAR_6,
         struct nv_adma_prd *VAR_7)
{
 u8 VAR_8 = 0;
 if (VAR_4->tf.flags & VAR_0)
  VAR_8 |= VAR_3;
 if (VAR_6 == VAR_4->n_elem - 1)
  VAR_8 |= VAR_2;
 else if (VAR_6 != 4)
  VAR_8 |= VAR_1;

 VAR_7->addr = FUNC_1(((u64)FUNC_2(VAR_5)));
 VAR_7->len = FUNC_0(((u32)FUNC_3(VAR_5)));
 VAR_7->flags = VAR_8;
 VAR_7->packet_len = 0;
}
