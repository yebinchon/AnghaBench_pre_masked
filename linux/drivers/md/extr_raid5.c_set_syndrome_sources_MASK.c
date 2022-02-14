
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int disks; int qd_idx; int pd_idx; struct r5dev* dev; scalar_t__ ddf_layout; } ;
struct r5dev {struct page* page; struct page* orig_page; int flags; scalar_t__ written; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stripe_head*) ;
 int FUNC_1 (int,struct stripe_head*,int*,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct page **VAR_5,
    struct stripe_head *VAR_6,
    int VAR_7)
{
 int VAR_8 = VAR_6->disks;
 int VAR_9 = VAR_6->ddf_layout ? VAR_8 : (VAR_8 - 2);
 int VAR_10 = FUNC_0(VAR_6);
 int VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_5[VAR_12] = ((void*)0);

 VAR_11 = 0;
 VAR_12 = VAR_10;
 do {
  int VAR_13 = FUNC_1(VAR_12, VAR_6, &VAR_11, VAR_9);
  struct r5dev *VAR_14 = &VAR_6->dev[VAR_12];

  if (VAR_12 == VAR_6->qd_idx || VAR_12 == VAR_6->pd_idx ||
      (VAR_7 == VAR_2) ||
      (VAR_7 == VAR_3 &&
       (FUNC_3(VAR_1, &VAR_14->flags) ||
        FUNC_3(VAR_0, &VAR_14->flags))) ||
      (VAR_7 == VAR_4 &&
       (VAR_14->written ||
        FUNC_3(VAR_0, &VAR_14->flags)))) {
   if (FUNC_3(VAR_0, &VAR_14->flags))
    VAR_5[VAR_13] = VAR_6->dev[VAR_12].orig_page;
   else
    VAR_5[VAR_13] = VAR_6->dev[VAR_12].page;
  }
  VAR_12 = FUNC_2(VAR_12, VAR_8);
 } while (VAR_12 != VAR_10);

 return VAR_9;
}
