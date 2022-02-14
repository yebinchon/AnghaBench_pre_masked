
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {int numedges; TYPE_1__* edges; } ;
struct TYPE_5__ {int max_edges; } ;
struct TYPE_4__ {int* v; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

qboolean FUNC_4(vec3_t VAR_2, vec3_t VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;
 qboolean VAR_7;


 if (VAR_0.numedges == 0) VAR_0.numedges = 1;

 VAR_7 = FUNC_2(VAR_2, &VAR_5);
 VAR_7 &= FUNC_2(VAR_3, &VAR_6);

 if (VAR_5 == -1 || VAR_6 == -1)
 {
  *VAR_4 = 0;
  return 1;
 }

 if (VAR_5 == VAR_6)
 {
  *VAR_4 = 0;
  return 1;
 }

 if (VAR_7)
 {



  int VAR_8;
  for (VAR_8 = 1; VAR_8 < VAR_0.numedges; VAR_8++)
  {
   if (VAR_0.edges[VAR_8].v[0] == VAR_5)
   {
    if (VAR_0.edges[VAR_8].v[1] == VAR_6)
    {
     *VAR_4 = VAR_8;
     return 1;
    }
   }
   else if (VAR_0.edges[VAR_8].v[1] == VAR_5)
   {
    if (VAR_0.edges[VAR_8].v[0] == VAR_6)
    {

     *VAR_4 = -VAR_8;
     return 1;
    }
   }
  }

 }
 if (VAR_0.numedges >= VAR_1.max_edges)
 {
  FUNC_3("AAS_MAX_EDGES = %d", VAR_1.max_edges);
 }
 VAR_0.edges[VAR_0.numedges].v[0] = VAR_5;
 VAR_0.edges[VAR_0.numedges].v[1] = VAR_6;
 *VAR_4 = VAR_0.numedges;



 VAR_0.numedges++;
 return 0;
}
