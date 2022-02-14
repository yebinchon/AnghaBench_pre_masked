
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matcher {int targetX; int targetY; int distX; int distY; int * best; scalar_t__ foundLarger; } ;
typedef scalar_t__ gpointer ;
typedef int cairo_surface_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(gpointer VAR_1, gpointer VAR_2)
{
 cairo_surface_t *VAR_3 = (cairo_surface_t *) VAR_1;
 struct matcher *VAR_4 = (struct matcher *) VAR_2;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_4->best == ((void*)0))
  goto writeMatch;

 if (VAR_5 < VAR_4->targetX && VAR_6 < VAR_4->targetY)
  if (VAR_4->foundLarger)

   return;
 if (VAR_5 >= VAR_4->targetX && VAR_6 >= VAR_4->targetY && !VAR_4->foundLarger)

  goto writeMatch;

 VAR_7 = FUNC_0(VAR_4->targetX - VAR_5);
 VAR_8 = FUNC_0(VAR_4->targetY - VAR_6);
 if (VAR_7 < VAR_4->distX && VAR_8 < VAR_4->distY)
  goto writeMatch;


 return;

writeMatch:

 if (VAR_5 >= VAR_4->targetX && VAR_6 >= VAR_4->targetY && !VAR_4->foundLarger)
  VAR_4->foundLarger = VAR_0;
 VAR_4->best = VAR_3;
 VAR_4->distX = FUNC_0(VAR_4->targetX - VAR_5);
 VAR_4->distY = FUNC_0(VAR_4->targetY - VAR_6);
}
