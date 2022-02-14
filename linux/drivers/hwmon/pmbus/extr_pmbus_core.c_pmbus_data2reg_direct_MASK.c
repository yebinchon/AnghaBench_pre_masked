
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pmbus_sensor {size_t class; } ;
struct pmbus_data {TYPE_1__* info; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_2__ {int* m; int* b; int* R; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,long) ;

__attribute__((used)) static u16 FUNC_2(struct pmbus_data *VAR_5,
     struct pmbus_sensor *VAR_6, long VAR_7)
{
 s64 VAR_8, VAR_9 = VAR_7;
 s32 VAR_10, VAR_11;

 VAR_10 = VAR_5->info->m[VAR_6->class];
 VAR_8 = VAR_5->info->b[VAR_6->class];
 VAR_11 = VAR_5->info->R[VAR_6->class];


 if (VAR_6->class == VAR_1) {
  VAR_11 -= 3;
  VAR_8 *= 1000;
 }


 if (!(VAR_6->class == VAR_0 || VAR_6->class == VAR_2)) {
  VAR_11 -= 3;
  VAR_8 *= 1000;
 }
 VAR_9 = VAR_9 * VAR_10 + VAR_8;

 while (VAR_11 > 0) {
  VAR_9 *= 10;
  VAR_11--;
 }
 while (VAR_11 < 0) {
  VAR_9 = FUNC_1(VAR_9 + 5LL, 10L);
  VAR_11++;
 }

 return (u16)FUNC_0(VAR_9, VAR_4, VAR_3);
}
