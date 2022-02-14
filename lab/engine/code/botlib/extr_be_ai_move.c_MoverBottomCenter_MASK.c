
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_6__ {int facenum; int * start; } ;
typedef TYPE_2__ aas_reachability_t ;
struct TYPE_7__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_5__ {int member_2; int member_1; int member_0; } ;


 int FUNC_0 (int,int *,int *,int *,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,double,int *,int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(aas_reachability_t *VAR_2, vec3_t VAR_3)
{
 int VAR_4;
 vec3_t VAR_5, VAR_6, VAR_7, VAR_8;
 vec3_t VAR_9 = {0, 0, 0};

 VAR_4 = VAR_2->facenum & 0x0000FFFF;

 FUNC_0(VAR_4, VAR_9, VAR_5, VAR_6, VAR_7);

 if (!FUNC_1(VAR_4, VAR_7))
 {
  VAR_1.Print(VAR_0, "no entity with model %d\n", VAR_4);
 }

 FUNC_2(VAR_5, VAR_6, VAR_8);
 FUNC_3(VAR_7, 0.5, VAR_8, VAR_3);
 VAR_3[2] = VAR_2->start[2];
}
