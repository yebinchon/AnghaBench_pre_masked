
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hid_device {int dummy; } ;
struct dj_receiver_dev {int lock; struct dj_device** paired_dj_devices; } ;
struct dj_device {int reports_supported; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct hid_device*,char*,scalar_t__) ;
 struct dj_receiver_dev* FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct dj_device*,scalar_t__*,int) ;
 int FUNC_5 (struct dj_receiver_dev*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct hid_device *VAR_3,
           u8 *VAR_4, int VAR_5)
{
 struct dj_receiver_dev *VAR_6 = FUNC_3(VAR_3);
 struct dj_device *VAR_7;
 unsigned long VAR_8;
 u8 VAR_9 = VAR_4[0];
 int VAR_10;

 if (VAR_9 > VAR_2) {
  FUNC_2(VAR_3, "Unexpected input report number %d\n", VAR_9);
  return;
 }

 FUNC_6(&VAR_6->lock, VAR_8);
 for (VAR_10 = 0; VAR_10 < (VAR_1 + VAR_0); VAR_10++) {
  VAR_7 = VAR_6->paired_dj_devices[VAR_10];
  if (VAR_7 && (VAR_7->reports_supported & FUNC_0(VAR_9))) {
   FUNC_4(VAR_7, VAR_4, VAR_5);
   FUNC_7(&VAR_6->lock, VAR_8);
   return;
  }
 }

 FUNC_5(VAR_6);
 FUNC_7(&VAR_6->lock, VAR_8);

 FUNC_1("No dj-devs handling input report number %d\n", VAR_9);
}
