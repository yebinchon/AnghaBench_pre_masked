
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct clock_event_device {int mult; int shift; } ;
struct TYPE_2__ {unsigned int num; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct clock_event_device *VAR_7)
{
 unsigned int VAR_8 = FUNC_2(VAR_7)->num;
 unsigned int VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12;

 FUNC_6();
 VAR_12 = ((uint64_t)(VAR_6 / VAR_5)) * VAR_7->mult;
 VAR_12 >>= VAR_7->shift;
 VAR_11 = FUNC_4(VAR_0);
 VAR_10 = VAR_11 + (unsigned int)VAR_12;
 VAR_9 = FUNC_4(FUNC_0(VAR_8));
 VAR_9 |= VAR_2 | VAR_3 | VAR_4 |
        VAR_1;
 FUNC_7(VAR_9, FUNC_0(VAR_8));
 FUNC_7(VAR_10, FUNC_1(VAR_8));
 FUNC_8(1);







 FUNC_7((unsigned int)VAR_12, FUNC_1(VAR_8));
 FUNC_5();
 FUNC_3();

 return 0;
}
