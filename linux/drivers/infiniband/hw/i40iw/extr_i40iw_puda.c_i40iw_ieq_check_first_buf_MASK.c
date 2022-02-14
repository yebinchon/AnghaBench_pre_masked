
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct i40iw_puda_buf {scalar_t__ seqnum; scalar_t__ datalen; int data; } ;



__attribute__((used)) static void FUNC_0(struct i40iw_puda_buf *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 if (VAR_0->seqnum < VAR_1) {
  VAR_2 = VAR_1 - VAR_0->seqnum;
  if (VAR_2 > VAR_0->datalen)
   return;
  VAR_0->data += VAR_2;
  VAR_0->datalen -= (u16)VAR_2;
  VAR_0->seqnum = VAR_1;
 }
}
