
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct mpic_timer {void* dev; int irq; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 struct mpic_timer* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mpic_timer*) ;
 int FUNC_3 (int ,int ,int ,char*,void*) ;
 int VAR_1 ;

struct mpic_timer *FUNC_4(irq_handler_t VAR_2, void *VAR_3,
          time64_t VAR_4)
{
 struct mpic_timer *VAR_5;
 int VAR_6;

 if (FUNC_1(&VAR_1))
  return ((void*)0);

 if (VAR_4 < 0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_5->irq, VAR_2,
   VAR_0, "global-timer", VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 VAR_5->dev = VAR_3;

 return VAR_5;
}
