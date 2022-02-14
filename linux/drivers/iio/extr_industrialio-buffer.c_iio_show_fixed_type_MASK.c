
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct iio_dev_attr {TYPE_2__* c; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {size_t endianness; int repeat; int sign; int realbits; int storagebits; int shift; } ;
struct TYPE_4__ {TYPE_1__ scan_type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (char*,char*,char*,int,int,int,int,...) ;
 struct iio_dev_attr* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
       struct device_attribute *VAR_5,
       char *VAR_6)
{
 struct iio_dev_attr *VAR_7 = FUNC_1(VAR_5);
 u8 VAR_8 = VAR_7->c->scan_type.endianness;

 if (VAR_8 == VAR_1) {



  VAR_8 = VAR_0;

 }
 if (VAR_7->c->scan_type.repeat > 1)
  return FUNC_0(VAR_6, "%s:%c%d/%dX%d>>%u\n",
         VAR_3[VAR_8],
         VAR_7->c->scan_type.sign,
         VAR_7->c->scan_type.realbits,
         VAR_7->c->scan_type.storagebits,
         VAR_7->c->scan_type.repeat,
         VAR_7->c->scan_type.shift);
  else
   return FUNC_0(VAR_6, "%s:%c%d/%d>>%u\n",
         VAR_3[VAR_8],
         VAR_7->c->scan_type.sign,
         VAR_7->c->scan_type.realbits,
         VAR_7->c->scan_type.storagebits,
         VAR_7->c->scan_type.shift);
}
