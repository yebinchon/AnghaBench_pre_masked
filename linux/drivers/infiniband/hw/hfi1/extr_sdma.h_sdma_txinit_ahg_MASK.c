
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sdma_txreq {void (* complete ) (struct sdma_txreq*,int) ;TYPE_1__* descs; scalar_t__ packet_len; scalar_t__ tlen; int * wait; int * coalesce_buf; scalar_t__ flags; scalar_t__ num_desc; int list; TYPE_1__* descp; int desc_limit; } ;
struct TYPE_2__ {int* qw; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct sdma_txreq*,scalar_t__,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(
 struct sdma_txreq *VAR_11,
 u16 VAR_12,
 u16 VAR_13,
 u8 VAR_14,
 u8 VAR_15,
 u32 *VAR_16,
 u8 VAR_17,
 void (*VAR_18)(struct sdma_txreq *, int))
{
 if (VAR_13 == 0)
  return -VAR_1;
 if (VAR_13 > VAR_2)
  return -VAR_0;
 VAR_11->desc_limit = FUNC_0(VAR_11->descs);
 VAR_11->descp = &VAR_11->descs[0];
 FUNC_1(&VAR_11->list);
 VAR_11->num_desc = 0;
 VAR_11->flags = VAR_12;
 VAR_11->complete = VAR_18;
 VAR_11->coalesce_buf = ((void*)0);
 VAR_11->wait = ((void*)0);
 VAR_11->packet_len = VAR_13;
 VAR_11->tlen = VAR_11->packet_len;
 VAR_11->descs[0].qw[0] = VAR_4;
 VAR_11->descs[0].qw[1] = 0;
 if (VAR_12 & VAR_9)
  VAR_11->descs[0].qw[1] |=
   (((u64)VAR_14 & VAR_5)
    << VAR_6) |
   (((u64)VAR_3 & VAR_7)
    << VAR_8);
 else if (VAR_12 & VAR_10 && VAR_15)
  FUNC_2(VAR_11, VAR_15, VAR_14, VAR_16, VAR_17);
 return 0;
}
