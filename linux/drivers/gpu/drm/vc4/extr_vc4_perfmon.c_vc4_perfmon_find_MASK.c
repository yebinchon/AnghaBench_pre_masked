
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_perfmon {int dummy; } ;
struct TYPE_2__ {int lock; int idr; } ;
struct vc4_file {TYPE_1__ perfmon; } ;


 struct vc4_perfmon* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vc4_perfmon*) ;

struct vc4_perfmon *FUNC_4(struct vc4_file *VAR_0, int VAR_1)
{
 struct vc4_perfmon *VAR_2;

 FUNC_1(&VAR_0->perfmon.lock);
 VAR_2 = FUNC_0(&VAR_0->perfmon.idr, VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(&VAR_0->perfmon.lock);

 return VAR_2;
}
