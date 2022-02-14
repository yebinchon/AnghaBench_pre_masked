
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct list_head {int dummy; } ;
struct i40iw_puda_rsrc {int dummy; } ;
struct TYPE_2__ {scalar_t__ va; } ;
struct i40iw_puda_buf {scalar_t__ seqnum; scalar_t__ hdrlen; scalar_t__ datalen; int list; TYPE_1__ mem; int * data; scalar_t__ totallen; } ;


 int FUNC_0 (struct i40iw_puda_buf*,struct i40iw_puda_buf*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct i40iw_puda_buf*,struct i40iw_puda_buf*) ;
 struct i40iw_puda_buf* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct i40iw_puda_rsrc*,struct i40iw_puda_buf*) ;
 int FUNC_4 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_5(struct i40iw_puda_rsrc *VAR_0,
       struct list_head *VAR_1,
       struct list_head *VAR_2,
       struct i40iw_puda_buf *VAR_3,
       u16 VAR_4)
{
 struct i40iw_puda_buf *VAR_5;
 u32 VAR_6;
 u16 VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return;
 VAR_6 = VAR_5->seqnum + VAR_4;
 VAR_3->totallen = VAR_5->hdrlen + VAR_4;
 VAR_3->data = (u8 *)VAR_3->mem.va + VAR_5->hdrlen;
 FUNC_1(VAR_5, VAR_3);

 VAR_7 = VAR_5->hdrlen;
 VAR_8 = (u16)(VAR_5->data - (u8 *)VAR_5->mem.va);

 do {
  if (VAR_5->datalen >= VAR_4) {

   FUNC_0(VAR_5, VAR_3, VAR_8, VAR_7, VAR_4);
   VAR_5->datalen -= VAR_4;
   VAR_5->data += VAR_4;
   VAR_5->seqnum = VAR_6;
   break;
  }

  FUNC_0(VAR_5, VAR_3, VAR_8, VAR_7, VAR_5->datalen);
  VAR_7 += VAR_5->datalen;
  VAR_4 -= VAR_5->datalen;
  FUNC_3(VAR_0, VAR_5);
  VAR_5 = FUNC_2(VAR_2);
  if (!VAR_5)
   return;
  VAR_8 = (u16)(VAR_5->data - (u8 *)VAR_5->mem.va);
 } while (1);


 if (VAR_5->datalen)
  FUNC_4(&VAR_5->list, VAR_1);
 else
  FUNC_3(VAR_0, VAR_5);
}
