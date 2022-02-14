
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40iw_puda_rsrc {scalar_t__ alloc_buf_count; scalar_t__ avail_buf_count; struct i40iw_puda_buf* alloclist; int stats_buf_alloc_fail; int buf_size; int dev; } ;
struct i40iw_puda_buf {struct i40iw_puda_buf* next; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 struct i40iw_puda_buf* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_puda_rsrc*,struct i40iw_puda_buf*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(struct i40iw_puda_rsrc *VAR_1,
         u32 VAR_2)
{
 u32 VAR_3;
 struct i40iw_puda_buf *VAR_4;
 struct i40iw_puda_buf *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1->dev, VAR_1->buf_size);
  if (!VAR_4) {
   VAR_1->stats_buf_alloc_fail++;
   return VAR_0;
  }
  FUNC_1(VAR_1, VAR_4);
  VAR_1->alloc_buf_count++;
  if (!VAR_1->alloclist) {
   VAR_1->alloclist = VAR_4;
  } else {
   VAR_5 = VAR_1->alloclist;
   VAR_1->alloclist = VAR_4;
   VAR_4->next = VAR_5;
  }
 }
 VAR_1->avail_buf_count = VAR_1->alloc_buf_count;
 return 0;
}
