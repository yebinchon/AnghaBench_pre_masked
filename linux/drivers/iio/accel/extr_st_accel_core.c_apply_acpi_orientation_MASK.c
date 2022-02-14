
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int value; } ;
struct TYPE_4__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct st_sensor_data {TYPE_3__* mount_matrix; int dev; } ;
struct iio_dev {int num_channels; int dev; } ;
struct iio_chan_spec {int ext_info; } ;
struct acpi_device {int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_6__ {char** rotation; } ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 TYPE_3__* FUNC_5 (int *,int,int ) ;
 struct st_sensor_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (union acpi_object*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_8,
      struct iio_chan_spec *VAR_9)
{
 return 0;

}
