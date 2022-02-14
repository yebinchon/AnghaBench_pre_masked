
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device_id {size_t driver_data; } ;
struct altera_ps_data {size_t devtype; } ;
typedef size_t kernel_ulong_t ;


 size_t FUNC_0 (struct altera_ps_data**) ;
 struct altera_ps_data** VAR_0 ;

__attribute__((used)) static const struct altera_ps_data *FUNC_1(const struct spi_device_id *VAR_1)
{
 kernel_ulong_t VAR_2 = VAR_1->driver_data;
 const struct altera_ps_data *VAR_3;


 if (VAR_2 >= FUNC_0(VAR_0))
  return ((void*)0);

 VAR_3 = VAR_0[VAR_2];
 if (!VAR_3 || VAR_3->devtype != VAR_2)
  return ((void*)0);

 return VAR_3;
}
