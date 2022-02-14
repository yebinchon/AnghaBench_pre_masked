
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int* v; } ;
typedef TYPE_1__ aas_edge_t ;
struct TYPE_4__ {TYPE_1__* edges; } ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 TYPE_2__ VAR_2 ;

qboolean FUNC_1(int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 aas_edge_t *VAR_8;

 VAR_7 = FUNC_0(VAR_3, VAR_4);
 for (VAR_6 = VAR_1[VAR_7]; VAR_6 >= 0; VAR_6 = VAR_0[VAR_6])
 {
  VAR_8 = &VAR_2.edges[VAR_6];
  if (VAR_8->v[0] == VAR_3)
  {
   if (VAR_8->v[1] == VAR_4)
   {
    *VAR_5 = VAR_6;
    return 1;
   }
  }
  else if (VAR_8->v[1] == VAR_3)
  {
   if (VAR_8->v[0] == VAR_4)
   {

    *VAR_5 = -VAR_6;
    return 1;
   }
  }
 }
 return 0;
}
