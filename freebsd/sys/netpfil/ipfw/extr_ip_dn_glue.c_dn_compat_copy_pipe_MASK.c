
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct dn_schk {scalar_t__ siht; TYPE_1__ sch; } ;
struct dn_pipe8 {int dummy; } ;
struct dn_flow_queue8 {int dummy; } ;
struct copy_args {int end; int* start; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct dn_schk*,struct copy_args*,int) ;
 int FUNC_2 (scalar_t__,struct copy_args*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int (*) (scalar_t__,struct copy_args*),struct copy_args*) ;

int
FUNC_5(struct copy_args *VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_1->end - *VAR_1->start;
 int VAR_4 = 0;
 int VAR_5 = sizeof(struct dn_pipe8);
 int VAR_6 = sizeof(struct dn_flow_queue8);
 int VAR_7 = 0;

 struct dn_schk *VAR_8 = (struct dn_schk *)VAR_2;




 VAR_7 = (VAR_8->sch.flags & VAR_0 ? FUNC_3(VAR_8->siht) :
      (VAR_8->siht ? 1 : 0));
 VAR_4 = VAR_5 + VAR_6 * VAR_7;
 if (VAR_3 < VAR_4) {
  FUNC_0("have %d < need %d", VAR_3, VAR_4);
  return 1;
 }

 FUNC_1(VAR_8, VAR_1, VAR_7);


 if (VAR_8->sch.flags & VAR_0)
  FUNC_4(VAR_8->siht, FUNC_2, VAR_1);
 else if (VAR_8->siht)
  FUNC_2(VAR_8->siht, VAR_1);
 return 0;
}
