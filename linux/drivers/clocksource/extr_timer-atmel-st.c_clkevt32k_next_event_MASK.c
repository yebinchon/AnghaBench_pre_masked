
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_4(unsigned long VAR_3, struct clock_event_device *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0;
 unsigned int VAR_7;

 FUNC_0(VAR_3 < 2);
 VAR_5 = FUNC_1();


 FUNC_3(VAR_2, VAR_0, VAR_5);
 FUNC_2(VAR_2, VAR_1, &VAR_7);


 VAR_5 += VAR_3;
 FUNC_3(VAR_2, VAR_0, VAR_5);

 return VAR_6;
}
