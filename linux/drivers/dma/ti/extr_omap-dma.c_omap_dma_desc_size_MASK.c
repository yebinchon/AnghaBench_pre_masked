
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_desc {unsigned int sglen; size_t es; int * sg; } ;


 size_t* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static size_t FUNC_1(struct omap_desc *VAR_1)
{
 unsigned VAR_2;
 size_t VAR_3;

 for (VAR_3 = VAR_2 = 0; VAR_2 < VAR_1->sglen; VAR_2++)
  VAR_3 += FUNC_0(&VAR_1->sg[VAR_2]);

 return VAR_3 * VAR_0[VAR_1->es];
}
