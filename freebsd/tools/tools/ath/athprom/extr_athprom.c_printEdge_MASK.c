
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ee_rdEdgesPower; } ;
struct TYPE_3__ {scalar_t__ rdEdge; } ;
typedef TYPE_1__ RD_EDGES_POWER ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_3, int VAR_4)
{
 const RD_EDGES_POWER *VAR_5 =
     &VAR_2.ee_rdEdgesPower[VAR_1*VAR_0];

 if (VAR_5[VAR_4].rdEdge == 0)
  FUNC_0(VAR_3, " -- ");
 else
  FUNC_0(VAR_3, "%04d", VAR_5[VAR_4].rdEdge);
}
