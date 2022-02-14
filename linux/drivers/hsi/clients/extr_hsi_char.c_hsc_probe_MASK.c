
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hsi_client {int dummy; } ;
struct TYPE_3__ {int owner; } ;
struct hsc_client_data {TYPE_1__ cdev; struct hsc_channel* channels; struct hsi_client* cl; int lock; } ;
struct hsc_channel {int ch; struct hsc_client_data* cl_data; struct hsi_client* cl; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned int,int,char const*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct hsc_channel*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct hsi_client*,struct hsc_client_data*) ;
 int FUNC_9 (struct hsi_client*) ;
 int FUNC_10 (struct hsi_client*) ;
 int FUNC_11 (struct hsc_client_data*) ;
 struct hsc_client_data* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,char const*) ;
 struct hsi_client* FUNC_15 (struct device*) ;
 int FUNC_16 (int ,int) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_6)
{
 const char VAR_7[] = "hsi_char";
 struct hsc_client_data *VAR_8;
 struct hsc_channel *VAR_9;
 struct hsi_client *VAR_10 = FUNC_15(VAR_6);
 unsigned int VAR_11;
 dev_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8 = FUNC_12(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_0(FUNC_9(VAR_10), FUNC_10(VAR_10));
 if (!VAR_5) {
  VAR_13 = FUNC_3(&VAR_12, VAR_11,
      VAR_2, VAR_7);
  if (VAR_13 == 0)
   VAR_5 = FUNC_1(VAR_12);
 } else {
  VAR_12 = FUNC_2(VAR_5, VAR_11);
  VAR_13 = FUNC_14(VAR_12, VAR_2, VAR_7);
 }
 if (VAR_13 < 0) {
  FUNC_6(VAR_6, "Device %s allocation failed %d\n",
     VAR_5 ? "minor" : "major", VAR_13);
  goto out1;
 }
 FUNC_13(&VAR_8->lock);
 FUNC_8(VAR_10, VAR_8);
 FUNC_5(&VAR_8->cdev, &VAR_4);
 VAR_8->cdev.owner = VAR_3;
 VAR_8->cl = VAR_10;
 for (VAR_14 = 0, VAR_9 = VAR_8->channels; VAR_14 < VAR_2; VAR_14++, VAR_9++) {
  FUNC_7(VAR_9);
  VAR_9->ch = VAR_14;
  VAR_9->cl = VAR_10;
  VAR_9->cl_data = VAR_8;
 }


 VAR_13 = FUNC_4(&VAR_8->cdev, VAR_12, VAR_2);
 if (VAR_13) {
  FUNC_6(VAR_6, "Could not add char device %d\n", VAR_13);
  goto out2;
 }

 return 0;
out2:
 FUNC_16(VAR_12, VAR_2);
out1:
 FUNC_11(VAR_8);

 return VAR_13;
}
