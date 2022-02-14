
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int ver_tid_offset; } ;
struct TYPE_8__ {TYPE_3__ kdeth; } ;
struct TYPE_5__ {int fragsize; int ctrl; } ;
struct user_sdma_request {int* tids; size_t tididx; TYPE_4__ hdr; TYPE_1__ info; } ;
struct TYPE_6__ {int ver_tid_offset; } ;
struct hfi1_pkt_header {TYPE_2__ kdeth; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct hfi1_pkt_header,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct user_sdma_request *VAR_13,
     struct hfi1_pkt_header *VAR_14, u32 VAR_15,
     u32 VAR_16)
{
 if (VAR_13->info.fragsize % VAR_10 || VAR_15 & 0x3 ||
     VAR_15 > FUNC_2(*VAR_14, VAR_13->info.fragsize))
  return -VAR_1;

 if (FUNC_3(VAR_13->info.ctrl) == VAR_2) {






  u32 VAR_17 = VAR_13->tids[VAR_13->tididx],
   VAR_18 = FUNC_0(VAR_17, VAR_6) * VAR_9,
   VAR_19 = FUNC_0(VAR_17, VAR_3),
   VAR_20 = FUNC_0(VAR_17, VAR_0),
   VAR_21;
  __le32 VAR_22 = VAR_14->kdeth.ver_tid_offset;

  VAR_21 = FUNC_1(VAR_22, VAR_7) *
     (FUNC_1(VAR_13->hdr.kdeth.ver_tid_offset, VAR_8) ?
      VAR_4 : VAR_5);







  if ((VAR_21 + VAR_16 > VAR_18) ||
      FUNC_1(VAR_22, VAR_12) != VAR_20 ||
      FUNC_1(VAR_22, VAR_11) != VAR_19)
   return -VAR_1;
 }
 return 0;
}
