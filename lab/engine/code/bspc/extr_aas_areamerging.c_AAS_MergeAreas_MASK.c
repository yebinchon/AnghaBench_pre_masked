
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* frontarea; TYPE_2__* backarea; struct TYPE_6__** next; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_7__ {TYPE_1__* tmpfaces; scalar_t__ invalid; struct TYPE_7__* l_next; } ;
typedef TYPE_2__ tmp_area_t ;
struct TYPE_8__ {int nodes; TYPE_2__* areas; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 TYPE_3__ VAR_0 ;

void FUNC_5(void)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;
 tmp_area_t *VAR_5, *VAR_6;
 tmp_face_t *VAR_7;

 VAR_2 = 0;
 FUNC_3("AAS_MergeAreas\r\n");
 FUNC_4("%6d areas merged", 1);

 VAR_4 = 1;

 while(1)
 {



  VAR_3 = 0;

  for (VAR_5 = VAR_0.areas; VAR_5; VAR_5 = VAR_5->l_next)
  {

   if (VAR_5->invalid)
   {
    continue;
   }

   if (VAR_4)
   {
    if (!FUNC_0(VAR_5)) continue;
   }

   for (VAR_7 = VAR_5->tmpfaces; VAR_7; VAR_7 = VAR_7->next[VAR_1])
   {
    VAR_1 = (VAR_7->frontarea != VAR_5);

    if (VAR_7->frontarea && VAR_7->backarea)
    {

     if (VAR_7->frontarea == VAR_5) VAR_6 = VAR_7->backarea;
     else VAR_6 = VAR_7->frontarea;

     if (VAR_4)
     {
      if (!FUNC_0(VAR_6)) continue;
     }
     if (FUNC_2(VAR_7))
     {
      FUNC_4("\r%6d", ++VAR_2);
      VAR_3++;
      break;
     }
    }
   }
  }
  if (!VAR_3)
  {
   if (VAR_4) VAR_4 = 0;
   else break;
  }
 }
 FUNC_4("\n");
 FUNC_3("%6d areas merged\r\n", VAR_2);

 FUNC_1(VAR_0.nodes);
}
