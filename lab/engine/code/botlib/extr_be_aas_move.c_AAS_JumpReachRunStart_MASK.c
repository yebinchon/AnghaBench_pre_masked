
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_5__ {int* start; int* end; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_6__ {int* endpos; int stopevent; } ;
typedef TYPE_2__ aas_clientmove_t ;


 int FUNC_0 (TYPE_2__*,int,int*,int ,int ,int ,int*,int,int,float,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_4(aas_reachability_t *VAR_9, vec3_t VAR_10)
{
 vec3_t VAR_11, VAR_12, VAR_13;
 aas_clientmove_t VAR_14;


 VAR_11[0] = VAR_9->start[0] - VAR_9->end[0];
 VAR_11[1] = VAR_9->start[1] - VAR_9->end[1];
 VAR_11[2] = 0;
 FUNC_2(VAR_11);

 FUNC_1(VAR_9->start, VAR_12);
 VAR_12[2] += 1;

 FUNC_3(VAR_11, 400, VAR_13);

 FUNC_0(&VAR_14, -1, VAR_12, VAR_0, VAR_7,
        VAR_8, VAR_13, 1, 2, 0.1f,
        VAR_3|VAR_2|VAR_1|
        VAR_5|VAR_4, 0, VAR_6);
 FUNC_1(VAR_14.endpos, VAR_10);

 if (VAR_14.stopevent & (VAR_2|VAR_1|VAR_5))
 {
  FUNC_1(VAR_12, VAR_10);
 }
}
