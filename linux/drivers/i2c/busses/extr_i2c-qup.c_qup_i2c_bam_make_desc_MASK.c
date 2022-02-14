
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int count; int pos; int data_len; } ;
struct TYPE_9__ {int sg_cnt; int * sg; } ;
struct TYPE_8__ {int * start; } ;
struct TYPE_6__ {int * start; } ;
struct TYPE_7__ {int sg_cnt; int * sg; TYPE_1__ tag; } ;
struct qup_i2c_dev {int tag_buf_pos; TYPE_5__ blk; TYPE_4__ btx; TYPE_3__ start_tag; TYPE_2__ brx; void* blk_xfer_limit; } ;
struct i2c_msg {int len; int flags; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct qup_i2c_dev*,struct i2c_msg*) ;
 int FUNC_1 (int *,struct qup_i2c_dev*,struct i2c_msg*) ;
 int FUNC_2 (int *,int *,int,struct qup_i2c_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct qup_i2c_dev *VAR_4, struct i2c_msg *VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_3;
 u32 VAR_8 = 0, VAR_9, VAR_10;
 u32 VAR_11 = 0, VAR_12, VAR_13 = 0;
 u8 *VAR_14;

 VAR_4->blk_xfer_limit = VAR_3;
 FUNC_0(VAR_4, VAR_5);

 VAR_9 = VAR_4->blk.count;
 VAR_10 = VAR_5->len - (VAR_9 - 1) * VAR_7;

 if (VAR_5->flags & VAR_2) {
  while (VAR_4->blk.pos < VAR_9) {
   VAR_12 = (VAR_11 == (VAR_9 - 1)) ? VAR_10 : VAR_7;
   VAR_14 = &VAR_4->start_tag.start[VAR_4->tag_buf_pos + VAR_8];
   VAR_8 += FUNC_1(VAR_14, VAR_4, VAR_5);
   VAR_4->blk.data_len -= VAR_12;


   VAR_6 = FUNC_2(&VAR_4->brx.sg[VAR_4->brx.sg_cnt++],
          &VAR_4->brx.tag.start[0],
          2, VAR_4, VAR_0);

   if (VAR_6)
    return VAR_6;

   VAR_6 = FUNC_2(&VAR_4->brx.sg[VAR_4->brx.sg_cnt++],
          &VAR_5->buf[VAR_7 * VAR_11],
          VAR_12, VAR_4,
          VAR_0);
   if (VAR_6)
    return VAR_6;

   VAR_11++;
   VAR_4->blk.pos = VAR_11;
  }
  VAR_6 = FUNC_2(&VAR_4->btx.sg[VAR_4->btx.sg_cnt++],
         &VAR_4->start_tag.start[VAR_4->tag_buf_pos],
         VAR_8, VAR_4, VAR_1);
  if (VAR_6)
   return VAR_6;

  VAR_4->tag_buf_pos += VAR_8;
 } else {
  while (VAR_4->blk.pos < VAR_9) {
   VAR_12 = (VAR_11 == (VAR_9 - 1)) ? VAR_10 : VAR_7;
   VAR_14 = &VAR_4->start_tag.start[VAR_4->tag_buf_pos + VAR_13];
   VAR_8 = FUNC_1(VAR_14, VAR_4, VAR_5);
   VAR_4->blk.data_len -= VAR_12;

   VAR_6 = FUNC_2(&VAR_4->btx.sg[VAR_4->btx.sg_cnt++],
          VAR_14, VAR_8,
          VAR_4, VAR_1);
   if (VAR_6)
    return VAR_6;

   VAR_13 += VAR_8;
   VAR_6 = FUNC_2(&VAR_4->btx.sg[VAR_4->btx.sg_cnt++],
          &VAR_5->buf[VAR_7 * VAR_11],
          VAR_12, VAR_4, VAR_1);
   if (VAR_6)
    return VAR_6;
   VAR_11++;
   VAR_4->blk.pos = VAR_11;
  }

  VAR_4->tag_buf_pos += VAR_13;
 }

 return 0;
}
