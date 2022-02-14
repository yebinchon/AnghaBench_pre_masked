
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ suspended; struct md_personality* pers; } ;
struct md_personality {int (* congested ) (struct mddev*,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct mddev*,int) ;

int FUNC_3(struct mddev *VAR_0, int VAR_1)
{
 struct md_personality *VAR_2 = VAR_0->pers;
 int VAR_3 = 0;

 FUNC_0();
 if (VAR_0->suspended)
  VAR_3 = 1;
 else if (VAR_2 && VAR_2->congested)
  VAR_3 = VAR_2->congested(VAR_0, VAR_1);
 FUNC_1();
 return VAR_3;
}
