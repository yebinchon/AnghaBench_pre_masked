
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_sensor {size_t class; int data; } ;
struct pmbus_data {TYPE_1__* info; } ;
typedef int s64 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_2__ {int* m; int* b; int* R; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 long FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static long FUNC_2(struct pmbus_data *VAR_5,
      struct pmbus_sensor *VAR_6)
{
 s64 VAR_7, VAR_8 = (s16)VAR_6->data;
 s32 VAR_9, VAR_10;

 VAR_9 = VAR_5->info->m[VAR_6->class];
 VAR_7 = VAR_5->info->b[VAR_6->class];
 VAR_10 = VAR_5->info->R[VAR_6->class];

 if (VAR_9 == 0)
  return 0;


 VAR_10 = -VAR_10;

 if (!(VAR_6->class == VAR_2 || VAR_6->class == VAR_4)) {
  VAR_10 += 3;
  VAR_7 *= 1000;
 }


 if (VAR_6->class == VAR_3) {
  VAR_10 += 3;
  VAR_7 *= 1000;
 }

 while (VAR_10 > 0) {
  VAR_8 *= 10;
  VAR_10--;
 }
 while (VAR_10 < 0) {
  VAR_8 = FUNC_1(VAR_8 + 5LL, 10L);
  VAR_10++;
 }

 VAR_8 = FUNC_1(VAR_8 - VAR_7, VAR_9);
 return FUNC_0(VAR_8, VAR_1, VAR_0);
}
