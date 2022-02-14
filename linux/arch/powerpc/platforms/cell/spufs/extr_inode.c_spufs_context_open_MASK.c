
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct file {int * f_op; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 () ;
 struct file* FUNC_3 (struct path*,int ,int ) ;
 int FUNC_4 (int,struct file*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct path *VAR_2)
{
 int VAR_3;
 struct file *VAR_4;

 VAR_3 = FUNC_5(0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_3(VAR_2, VAR_0, FUNC_2());
 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_3);
  return FUNC_1(VAR_4);
 }

 VAR_4->f_op = &VAR_1;
 FUNC_4(VAR_3, VAR_4);
 return VAR_3;
}
