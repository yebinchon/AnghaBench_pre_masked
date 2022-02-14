
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct bfusb_data_scb {struct urb* urb; } ;
struct bfusb_data {int completed_q; } ;


 int FUNC_0 (char*,struct bfusb_data*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static struct urb *FUNC_3(struct bfusb_data *VAR_0)
{
 struct sk_buff *VAR_1;
 struct urb *VAR_2 = ((void*)0);

 FUNC_0("bfusb %p", VAR_0);

 VAR_1 = FUNC_2(&VAR_0->completed_q);
 if (VAR_1) {
  VAR_2 = ((struct bfusb_data_scb *) VAR_1->cb)->urb;
  FUNC_1(VAR_1);
 }

 return VAR_2;
}
