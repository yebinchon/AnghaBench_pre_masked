
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct acpi_als {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acpi_als*,int ,int*) ;
 struct acpi_als* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_6,
        struct iio_chan_spec const *VAR_7, int *VAR_8,
        int *VAR_9, long VAR_10)
{
 struct acpi_als *VAR_11 = FUNC_1(VAR_6);
 s32 VAR_12;
 int VAR_13;

 if ((VAR_10 != VAR_2) && (VAR_10 != VAR_3))
  return -VAR_1;


 if (VAR_7->type != VAR_4)
  return -VAR_1;

 VAR_13 = FUNC_0(VAR_11, VAR_0, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 *VAR_8 = VAR_12;

 return VAR_5;
}
