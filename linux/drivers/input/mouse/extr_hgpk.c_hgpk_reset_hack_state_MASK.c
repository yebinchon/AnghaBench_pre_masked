
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int abs_x; int abs_y; scalar_t__ ysaw_secondary; scalar_t__ xsaw_secondary; scalar_t__ ybigj; scalar_t__ xbigj; int ylast; int xlast; } ;


 int VAR_0 ;
 int FUNC_0 (struct hgpk_data*) ;

__attribute__((used)) static void FUNC_1(struct psmouse *VAR_1)
{
 struct hgpk_data *VAR_2 = VAR_1->private;

 VAR_2->abs_x = VAR_2->abs_y = -1;
 VAR_2->xlast = VAR_2->ylast = VAR_0;
 VAR_2->xbigj = VAR_2->ybigj = 0;
 VAR_2->xsaw_secondary = VAR_2->ysaw_secondary = 0;
 FUNC_0(VAR_2);
}
