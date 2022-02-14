
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {int lpoints; int syy; int * points; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static struct dataset *
FUNC_2(void)
{
 struct dataset *VAR_1;

 VAR_1 = FUNC_1(1, sizeof *VAR_1);
 FUNC_0(VAR_1 != ((void*)0));
 VAR_1->lpoints = 100000;
 VAR_1->points = FUNC_1(sizeof *VAR_1->points, VAR_1->lpoints);
 FUNC_0(VAR_1->points != ((void*)0));
 VAR_1->syy = VAR_0;
 return(VAR_1);
}
