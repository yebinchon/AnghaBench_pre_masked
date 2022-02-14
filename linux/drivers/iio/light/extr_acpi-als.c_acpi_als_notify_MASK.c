
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int dummy; } ;
struct acpi_device {int dev; } ;
struct acpi_als {int lock; int * evt_buffer; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct acpi_als*,int ,int *) ;
 struct iio_dev* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct iio_dev*) ;
 struct acpi_als* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct acpi_device *VAR_2, u32 VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_2);
 struct acpi_als *VAR_5 = FUNC_4(VAR_4);
 s32 *VAR_6 = VAR_5->evt_buffer;
 s64 VAR_7 = FUNC_3(VAR_4);
 s32 VAR_8;
 int VAR_9;

 FUNC_7(&VAR_5->lock);

 FUNC_6(VAR_6, 0, VAR_0);

 switch (VAR_3) {
 case 128:
  VAR_9 = FUNC_0(VAR_5, VAR_1, &VAR_8);
  if (VAR_9 < 0)
   goto out;
  *VAR_6++ = VAR_8;
  break;
 default:

  FUNC_2(&VAR_2->dev, "Unhandled ACPI ALS event (%08x)!\n",
   VAR_3);
  goto out;
 }

 FUNC_5(VAR_4, VAR_5->evt_buffer, VAR_7);

out:
 FUNC_8(&VAR_5->lock);
}
