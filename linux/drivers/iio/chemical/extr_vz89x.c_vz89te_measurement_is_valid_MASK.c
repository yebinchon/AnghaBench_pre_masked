
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vz89x_data {int* buffer; TYPE_1__* chip; } ;
struct TYPE_2__ {int read_size; } ;



__attribute__((used)) static bool FUNC_0(struct vz89x_data *VAR_0)
{
 u8 VAR_1 = 0;
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < (VAR_0->chip->read_size - 1); VAR_2++) {
  VAR_3 = VAR_1 + VAR_0->buffer[VAR_2];
  VAR_1 = VAR_3;
  VAR_1 += VAR_3 / 256;
 }

 return !((0xff - VAR_1) == VAR_0->buffer[VAR_0->chip->read_size - 1]);
}
