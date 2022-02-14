
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {TYPE_2__* first; int numlinks; } ;
typedef TYPE_1__ aas_reversedreachability_t ;
struct TYPE_8__ {size_t linknum; struct TYPE_8__* next; } ;
typedef TYPE_2__ aas_reversedlink_t ;
struct TYPE_9__ {int start; int end; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_10__ {int numreachableareas; int firstreachablearea; } ;
typedef TYPE_4__ aas_areasettings_t ;
struct TYPE_12__ {unsigned short*** areatraveltimes; int numareas; TYPE_3__* reachability; TYPE_4__* areasettings; TYPE_1__* reversedreachability; } ;
struct TYPE_11__ {int (* Print ) (int ,char*,int) ;} ;


 unsigned short FUNC_0 (int,int ,int ) ;
 int FUNC_1 (unsigned short***) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_6 (int ,char*,int) ;

void FUNC_7(void)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 char *VAR_7;
 vec3_t VAR_8;
 aas_reversedreachability_t *VAR_9;
 aas_reversedlink_t *VAR_10;
 aas_reachability_t *VAR_11;
 aas_areasettings_t *VAR_12;






 if (VAR_1.areatraveltimes) FUNC_1(VAR_1.areatraveltimes);

 VAR_6 = VAR_1.numareas * sizeof(unsigned short **);
 for (VAR_3 = 0; VAR_3 < VAR_1.numareas; VAR_3++)
 {
  VAR_9 = &VAR_1.reversedreachability[VAR_3];

  VAR_12 = &VAR_1.areasettings[VAR_3];

  VAR_6 += VAR_12->numreachableareas * sizeof(unsigned short *);

  VAR_6 += VAR_12->numreachableareas *
   FUNC_3(VAR_9->numlinks, sizeof(long)) * sizeof(unsigned short);
 }

 VAR_7 = (char *) FUNC_2(VAR_6);
 VAR_1.areatraveltimes = (unsigned short ***) VAR_7;
 VAR_7 += VAR_1.numareas * sizeof(unsigned short **);

 for (VAR_3 = 0; VAR_3 < VAR_1.numareas; VAR_3++)
 {

  VAR_9 = &VAR_1.reversedreachability[VAR_3];

  VAR_12 = &VAR_1.areasettings[VAR_3];

  VAR_1.areatraveltimes[VAR_3] = (unsigned short **) VAR_7;
  VAR_7 += VAR_12->numreachableareas * sizeof(unsigned short *);

  for (VAR_4 = 0; VAR_4 < VAR_12->numreachableareas; VAR_4++)
  {
   VAR_1.areatraveltimes[VAR_3][VAR_4] = (unsigned short *) VAR_7;
   VAR_7 += FUNC_3(VAR_9->numlinks, sizeof(long)) * sizeof(unsigned short);

   VAR_11 = &VAR_1.reachability[VAR_12->firstreachablearea + VAR_4];

   for (VAR_5 = 0, VAR_10 = VAR_9->first; VAR_10; VAR_10 = VAR_10->next, VAR_5++)
   {
    FUNC_5(VAR_1.reachability[VAR_10->linknum].end, VAR_8);

    VAR_1.areatraveltimes[VAR_3][VAR_4][VAR_5] = FUNC_0(VAR_3, VAR_8, VAR_11->start);
   }
  }
 }



}
