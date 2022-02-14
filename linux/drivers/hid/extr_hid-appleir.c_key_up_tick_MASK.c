
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hid_device {int dummy; } ;
struct appleir {int lock; scalar_t__ current_key; struct hid_device* hid; } ;


 struct appleir* VAR_0 ;
 struct appleir* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct hid_device*,struct appleir*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct appleir *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct hid_device *VAR_4 = VAR_3->hid;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->lock, VAR_5);
 if (VAR_3->current_key) {
  FUNC_1(VAR_4, VAR_3, VAR_3->current_key);
  VAR_3->current_key = 0;
 }
 FUNC_3(&VAR_3->lock, VAR_5);
}
