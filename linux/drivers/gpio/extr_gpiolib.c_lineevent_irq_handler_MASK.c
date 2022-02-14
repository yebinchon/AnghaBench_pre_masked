
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lineevent_state {int timestamp; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct lineevent_state *VAR_3 = VAR_2;





 VAR_3->timestamp = FUNC_0();

 return VAR_0;
}
