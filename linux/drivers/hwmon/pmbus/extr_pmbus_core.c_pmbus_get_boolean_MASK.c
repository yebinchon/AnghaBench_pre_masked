
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct pmbus_sensor {scalar_t__ data; } ;
struct pmbus_data {int* status; } ;
struct pmbus_boolean {struct pmbus_sensor* s2; struct pmbus_sensor* s1; } ;


 int FUNC_0 (int,char*,struct pmbus_boolean*,struct pmbus_sensor*,struct pmbus_sensor*) ;
 long FUNC_1 (struct pmbus_data*,struct pmbus_sensor*) ;

__attribute__((used)) static int FUNC_2(struct pmbus_data *VAR_0, struct pmbus_boolean *VAR_1,
        int VAR_2)
{
 struct pmbus_sensor *VAR_3 = VAR_1->s1;
 struct pmbus_sensor *VAR_4 = VAR_1->s2;
 u16 VAR_5 = (VAR_2 >> 16) & 0xffff;
 u16 VAR_6 = VAR_2 & 0xffff;
 int VAR_7, VAR_8;
 u16 VAR_9;

 VAR_8 = VAR_0->status[VAR_5];
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = VAR_8 & VAR_6;
 if (!VAR_3 && !VAR_4) {
  VAR_7 = !!VAR_9;
 } else if (!VAR_3 || !VAR_4) {
  FUNC_0(1, "Bad boolean descriptor %p: s1=%p, s2=%p\n", VAR_1, VAR_3, VAR_4);
  return 0;
 } else {
  long VAR_10, VAR_11;

  if (VAR_3->data < 0)
   return VAR_3->data;
  if (VAR_4->data < 0)
   return VAR_4->data;

  VAR_10 = FUNC_1(VAR_0, VAR_3);
  VAR_11 = FUNC_1(VAR_0, VAR_4);
  VAR_7 = !!(VAR_9 && VAR_10 >= VAR_11);
 }
 return VAR_7;
}
