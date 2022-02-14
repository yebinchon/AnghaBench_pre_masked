
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u16 ;
struct pmbus_sensor {scalar_t__ class; size_t page; int data; } ;
struct pmbus_data {int* exponent; } ;
typedef long s32 ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static long FUNC_0(struct pmbus_data *VAR_3,
      struct pmbus_sensor *VAR_4)
{
 s16 VAR_5;
 s32 VAR_6;
 long VAR_7;

 if (VAR_4->class == VAR_2) {
  VAR_5 = VAR_3->exponent[VAR_4->page];
  VAR_6 = (u16) VAR_4->data;
 } else {
  VAR_5 = ((s16)VAR_4->data) >> 11;
  VAR_6 = ((s16)((VAR_4->data & 0x7ff) << 5)) >> 5;
 }

 VAR_7 = VAR_6;


 if (VAR_4->class != VAR_0)
  VAR_7 = VAR_7 * 1000L;


 if (VAR_4->class == VAR_1)
  VAR_7 = VAR_7 * 1000L;

 if (VAR_5 >= 0)
  VAR_7 <<= VAR_5;
 else
  VAR_7 >>= -VAR_5;

 return VAR_7;
}
