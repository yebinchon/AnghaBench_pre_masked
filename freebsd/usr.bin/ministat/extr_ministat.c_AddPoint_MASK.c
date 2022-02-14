
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {int n; int lpoints; double* points; double sy; } ;


 int FUNC_0 (int ) ;
 double* FUNC_1 (int,int) ;
 int FUNC_2 (double*) ;
 int FUNC_3 (double*,double*,int) ;

__attribute__((used)) static void
FUNC_4(struct dataset *VAR_0, double VAR_1)
{
 double *VAR_2;

 if (VAR_0->n >= VAR_0->lpoints) {
  VAR_2 = VAR_0->points;
  VAR_0->lpoints *= 4;
  VAR_0->points = FUNC_1(sizeof *VAR_0->points, VAR_0->lpoints);
  FUNC_0(VAR_0->points != ((void*)0));
  FUNC_3(VAR_0->points, VAR_2, sizeof *VAR_2 * VAR_0->n);
  FUNC_2(VAR_2);
 }
 VAR_0->points[VAR_0->n++] = VAR_1;
 VAR_0->sy += VAR_1;
}
