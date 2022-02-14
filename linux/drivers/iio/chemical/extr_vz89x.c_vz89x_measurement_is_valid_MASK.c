
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vz89x_data {scalar_t__* buffer; TYPE_1__* chip; } ;
struct TYPE_2__ {int read_size; } ;


 size_t VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct vz89x_data *VAR_1)
{
 if (VAR_1->buffer[VAR_0] == 0)
  return 1;

 return !!(VAR_1->buffer[VAR_1->chip->read_size - 1] > 0);
}
