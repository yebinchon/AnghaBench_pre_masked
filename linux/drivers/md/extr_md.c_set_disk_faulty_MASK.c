
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int * pers; } ;
struct md_rdev {int flags; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mddev*,struct md_rdev*) ;
 struct md_rdev* FUNC_1 (struct mddev*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_3, dev_t VAR_4)
{
 struct md_rdev *VAR_5;
 int VAR_6 = 0;

 if (VAR_3->pers == ((void*)0))
  return -VAR_1;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5)
  VAR_6 = -VAR_1;
 else {
  FUNC_0(VAR_3, VAR_5);
  if (!FUNC_4(VAR_2, &VAR_5->flags))
   VAR_6 = -VAR_0;
 }
 FUNC_3();
 return VAR_6;
}
