
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct dn_fsk {scalar_t__ qht; TYPE_1__ fs; } ;
struct dn_flow_set {int dummy; } ;
struct dn_flow_queue8 {int dummy; } ;
struct copy_args {int end; int* start; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dn_fsk*,struct copy_args*,int) ;
 int FUNC_2 (scalar_t__,struct copy_args*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int (*) (scalar_t__,struct copy_args*),struct copy_args*) ;

int
FUNC_5(struct copy_args *VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_1->end - *VAR_1->start;
 int VAR_4 = 0;
 int VAR_5 = sizeof(struct dn_flow_set);
 int VAR_6 = sizeof(struct dn_flow_queue8);

 struct dn_fsk *VAR_7 = (struct dn_fsk *)VAR_2;
 int VAR_8 = 0;

 VAR_8 = (VAR_7->fs.flags & VAR_0 ? FUNC_3(VAR_7->qht) :
      (VAR_7->qht ? 1 : 0));

 VAR_4 = VAR_5 + VAR_6 * VAR_8;
 if (VAR_3 < VAR_4) {
  FUNC_0("have < need");
  return 1;
 }


 FUNC_1(VAR_7, VAR_1, VAR_8);


 if (VAR_7->fs.flags & VAR_0)
  FUNC_4(VAR_7->qht, FUNC_2, VAR_1);
 else if (VAR_7->qht)
  FUNC_2(VAR_7->qht, VAR_1);

 return 0;
}
