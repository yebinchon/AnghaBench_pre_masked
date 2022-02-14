
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u2fzero_device {int present; int urb; int lock; } ;
struct hid_device {int dummy; } ;


 struct u2fzero_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_0)
{
 struct u2fzero_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->lock);
 VAR_1->present = 0;
 FUNC_3(&VAR_1->lock);

 FUNC_1(VAR_0);
 FUNC_5(VAR_1->urb);
 FUNC_4(VAR_1->urb);
}
