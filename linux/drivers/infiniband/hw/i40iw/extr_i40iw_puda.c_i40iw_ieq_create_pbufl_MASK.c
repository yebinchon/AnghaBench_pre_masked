
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct list_head {int dummy; } ;
struct i40iw_puda_buf {scalar_t__ datalen; scalar_t__ seqnum; int list; } ;
struct i40iw_pfpdu {int bad_seq_num; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 struct i40iw_puda_buf* FUNC_0 (struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(
           struct i40iw_pfpdu *VAR_2,
           struct list_head *VAR_3,
           struct list_head *VAR_4,
           struct i40iw_puda_buf *VAR_5,
           u16 VAR_6)
{
 enum i40iw_status_code VAR_7 = 0;
 struct i40iw_puda_buf *VAR_8;
 u32 VAR_9;
 u16 VAR_10 = VAR_6 - VAR_5->datalen;
 bool VAR_11 = 0;

 VAR_9 = VAR_5->seqnum + VAR_5->datalen;
 do {
  VAR_8 = FUNC_0(VAR_3);
  if (!VAR_8) {
   VAR_7 = VAR_1;
   break;
  }
  FUNC_1(&VAR_8->list, VAR_4);
  if (VAR_8->seqnum != VAR_9) {
   VAR_2->bad_seq_num++;
   VAR_7 = VAR_0;
   break;
  }
  if (VAR_8->datalen >= VAR_10) {
   VAR_11 = 1;
  } else {
   VAR_10 -= VAR_8->datalen;
   VAR_9 = VAR_8->seqnum + VAR_8->datalen;
  }

 } while (!VAR_11);

 return VAR_7;
}
