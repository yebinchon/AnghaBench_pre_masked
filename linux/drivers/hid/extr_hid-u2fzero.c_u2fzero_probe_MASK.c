
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u2fzero_device {int present; int lock; struct hid_device* hdev; int * buf_in; int * buf_out; } ;
struct u2f_hid_report {int dummy; } ;
struct u2f_hid_msg {int dummy; } ;
struct hidraw {unsigned int minor; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {scalar_t__ hidraw; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int,int ) ;
 struct u2fzero_device* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct hid_device*,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,char*) ;
 int FUNC_5 (struct hid_device*,int *) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*,struct u2fzero_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct u2fzero_device*) ;
 int FUNC_10 (struct u2fzero_device*,unsigned int) ;
 int FUNC_11 (struct u2fzero_device*,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct hid_device *VAR_5,
    const struct hid_device_id *VAR_6)
{
 struct u2fzero_device *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (!FUNC_5(VAR_5, &VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_1(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->buf_out = FUNC_0(&VAR_5->dev,
  sizeof(struct u2f_hid_report), VAR_2);
 if (VAR_7->buf_out == ((void*)0))
  return -VAR_1;

 VAR_7->buf_in = FUNC_0(&VAR_5->dev,
  sizeof(struct u2f_hid_msg), VAR_2);
 if (VAR_7->buf_in == ((void*)0))
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_7->hdev = VAR_5;
 FUNC_7(VAR_5, VAR_7);
 FUNC_8(&VAR_7->lock);

 VAR_9 = FUNC_2(VAR_5, VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_9(VAR_7);

 VAR_7->present = 1;

 VAR_8 = ((struct hidraw *) VAR_5->hidraw)->minor;

 VAR_9 = FUNC_11(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_3(VAR_5);
  return VAR_9;
 }

 FUNC_4(VAR_5, "U2F Zero LED initialised\n");

 VAR_9 = FUNC_10(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_3(VAR_5);
  return VAR_9;
 }

 FUNC_4(VAR_5, "U2F Zero RNG initialised\n");

 return 0;
}
