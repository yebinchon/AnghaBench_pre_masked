
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u2fzero_device {int lock; int buf_out; int hdev; } ;
struct u2f_hid_report {int dummy; } ;
struct u2f_hid_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,struct u2f_hid_report*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct u2fzero_device *VAR_1, struct u2f_hid_report *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1->lock);

 FUNC_1(VAR_1->buf_out, VAR_2, sizeof(struct u2f_hid_report));

 VAR_3 = FUNC_0(VAR_1->hdev, VAR_1->buf_out,
       sizeof(struct u2f_hid_msg));

 FUNC_3(&VAR_1->lock);

 if (VAR_3 < 0)
  return VAR_3;

 return VAR_3 == sizeof(struct u2f_hid_msg) ? 0 : -VAR_0;
}
