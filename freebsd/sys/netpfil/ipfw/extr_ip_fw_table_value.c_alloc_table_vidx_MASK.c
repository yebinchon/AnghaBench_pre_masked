
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int (* func ) (int ,TYPE_2__*) ;} ;
struct tableop_state {scalar_t__ vshared; TYPE_1__* ta; TYPE_2__ opstate; int tc; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {int vlimit; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct namedobj_instance*,int*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_1, struct tableop_state *VAR_2,
    struct namedobj_instance *VAR_3, uint16_t *VAR_4)
{
 int VAR_5, VAR_6;
 uint16_t VAR_7;

 FUNC_0(VAR_1);

 VAR_5 = FUNC_1(VAR_3, &VAR_7);
 if (VAR_5 != 0) {






  VAR_2->opstate.func(VAR_2->tc, &VAR_2->opstate);
  VAR_5 = FUNC_2(VAR_1);
  return (VAR_5);
 }

 VAR_6 = VAR_2->ta->vlimit;
 if (VAR_6 != 0 && VAR_7 >= VAR_6) {
  if (VAR_2->vshared != 0) {

   return (VAR_0);
  }


  return (VAR_0);
 }

 *VAR_4 = VAR_7;
 return (0);
}
