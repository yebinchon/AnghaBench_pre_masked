
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {scalar_t__ queue_mode; int * nullb; int flags; } ;
struct nullb {struct nullb_device* dev; int disk; int * tag_set; int __tag_set; int q; int cur_bytes; int bw_timer; int list; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nullb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct nullb*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct nullb*) ;
 int FUNC_10 (struct nullb_device*,int) ;
 int FUNC_11 (struct nullb*) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct nullb *VAR_4)
{
 struct nullb_device *VAR_5 = VAR_4->dev;

 FUNC_6(&VAR_3, VAR_4->index);

 FUNC_8(&VAR_4->list);

 FUNC_4(VAR_4->disk);

 if (FUNC_13(VAR_1, &VAR_4->dev->flags)) {
  FUNC_5(&VAR_4->bw_timer);
  FUNC_0(&VAR_4->cur_bytes, VAR_0);
  FUNC_11(VAR_4);
 }

 FUNC_1(VAR_4->q);
 if (VAR_5->queue_mode == VAR_2 &&
     VAR_4->tag_set == &VAR_4->__tag_set)
  FUNC_2(VAR_4->tag_set);
 FUNC_12(VAR_4->disk);
 FUNC_3(VAR_4);
 if (FUNC_9(VAR_4))
  FUNC_10(VAR_4->dev, 1);
 FUNC_7(VAR_4);
 VAR_5->nullb = ((void*)0);
}
