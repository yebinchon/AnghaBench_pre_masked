
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lapic {int la_timer_mode; } ;
struct eventtimer {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct lapic*) ;
 struct lapic* VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct eventtimer *VAR_3)
{
 struct lapic *VAR_4;

 VAR_4 = &VAR_2[FUNC_0(VAR_1)];
 FUNC_1(VAR_4);
 VAR_4->la_timer_mode = VAR_0;
 return (0);
}
