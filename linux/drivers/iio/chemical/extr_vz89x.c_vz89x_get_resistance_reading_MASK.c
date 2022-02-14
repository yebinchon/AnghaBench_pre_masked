
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vz89x_data {int * buffer; } ;
struct TYPE_2__ {int endianness; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
typedef int __le32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vz89x_data *VAR_1,
     struct iio_chan_spec const *VAR_2,
     int *VAR_3)
{
 u8 *VAR_4 = (u8 *) &VAR_1->buffer[VAR_2->address];

 switch (VAR_2->scan_type.endianness) {
 case 128:
  *VAR_3 = FUNC_2((__le32 *) VAR_4) & FUNC_0(23, 0);
  break;
 case 129:
  *VAR_3 = FUNC_1((__be32 *) VAR_4) >> 8;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
