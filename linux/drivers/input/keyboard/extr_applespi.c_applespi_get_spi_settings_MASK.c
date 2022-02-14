
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef void* u64 ;
struct spi_settings {void* reset_rec_usec; void* reset_a2r_usec; void* spi_cs_delay; } ;
struct applespi_data {TYPE_2__* spi; struct spi_settings spi_settings; } ;
struct acpi_device {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_device*,char*,int ,union acpi_object const**) ;
 int FUNC_2 (int *,char*,void*,void*,void*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct applespi_data *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_0(&VAR_1->spi->dev);
 const union acpi_object *VAR_3;
 struct spi_settings *VAR_4 = &VAR_1->spi_settings;

 if (!FUNC_1(VAR_2, "spiCSDelay", VAR_0, &VAR_3))
  VAR_4->spi_cs_delay = *(u64 *)VAR_3->buffer.pointer;
 else
  FUNC_3(&VAR_1->spi->dev,
    "Property spiCSDelay not found\n");

 if (!FUNC_1(VAR_2, "resetA2RUsec", VAR_0, &VAR_3))
  VAR_4->reset_a2r_usec = *(u64 *)VAR_3->buffer.pointer;
 else
  FUNC_3(&VAR_1->spi->dev,
    "Property resetA2RUsec not found\n");

 if (!FUNC_1(VAR_2, "resetRecUsec", VAR_0, &VAR_3))
  VAR_4->reset_rec_usec = *(u64 *)VAR_3->buffer.pointer;
 else
  FUNC_3(&VAR_1->spi->dev,
    "Property resetRecUsec not found\n");

 FUNC_2(&VAR_1->spi->dev,
  "SPI settings: spi_cs_delay=%llu reset_a2r_usec=%llu reset_rec_usec=%llu\n",
  VAR_4->spi_cs_delay, VAR_4->reset_a2r_usec,
  VAR_4->reset_rec_usec);

 return 0;
}
