
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u16 ;
struct pmbus_sensor {scalar_t__ class; size_t page; } ;
struct pmbus_data {long* exponent; } ;
typedef int s16 ;


 void* FUNC_0 (long,int) ;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static u16 FUNC_1(struct pmbus_data *VAR_5,
     struct pmbus_sensor *VAR_6, long VAR_7)
{
 s16 VAR_8 = 0, VAR_9;
 bool VAR_10 = 0;


 if (VAR_7 == 0)
  return 0;

 if (VAR_6->class == VAR_4) {

  if (VAR_7 < 0)
   return 0;





  if (VAR_5->exponent[VAR_6->page] < 0)
   VAR_7 <<= -VAR_5->exponent[VAR_6->page];
  else
   VAR_7 >>= VAR_5->exponent[VAR_6->page];
  VAR_7 = FUNC_0(VAR_7, 1000);
  return VAR_7 & 0xffff;
 }

 if (VAR_7 < 0) {
  VAR_10 = 1;
  VAR_7 = -VAR_7;
 }


 if (VAR_6->class == VAR_3)
  VAR_7 = FUNC_0(VAR_7, 1000L);





 if (VAR_6->class == VAR_2)
  VAR_7 = VAR_7 * 1000;


 while (VAR_7 >= VAR_0 && VAR_8 < 15) {
  VAR_8++;
  VAR_7 >>= 1;
 }

 while (VAR_7 < VAR_1 && VAR_8 > -15) {
  VAR_8--;
  VAR_7 <<= 1;
 }


 VAR_9 = FUNC_0(VAR_7, 1000);


 if (VAR_9 > 0x3ff)
  VAR_9 = 0x3ff;


 if (VAR_10)
  VAR_9 = -VAR_9;


 return (VAR_9 & 0x7ff) | ((VAR_8 << 11) & 0xf800);
}
