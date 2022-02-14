
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct clocksource {int dummy; } ;
struct TYPE_2__ {int t1_cntrl; scalar_t__ t1_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6, VAR_7;
 u16 VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_5);
 VAR_7 = VAR_3->t1_cntrl >> 4;
 VAR_8 = VAR_3->t1_count;
 VAR_6 = VAR_3->t1_cntrl >> 4;
 if (VAR_6 != VAR_7)
  VAR_8 = VAR_3->t1_count;
 VAR_8 -= VAR_1;
 VAR_9 = VAR_8 + VAR_6 * VAR_0;
 VAR_9 += VAR_2;
 FUNC_0(VAR_5);

 return VAR_9;
}
