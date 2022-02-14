
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct remote {int name; } ;
struct TYPE_4__ {scalar_t__ choice; scalar_t__ no_filter; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct remote *VAR_1)
{




 if (VAR_0.no_filter)
  return;





 if (!FUNC_0() && !VAR_0.choice)
  return;







 if (VAR_0.choice) {
  FUNC_2(VAR_1->name, &VAR_0);
  return;
 }






 if (!VAR_0.choice)
  FUNC_1(&VAR_0, VAR_1->name);
 return;
}
