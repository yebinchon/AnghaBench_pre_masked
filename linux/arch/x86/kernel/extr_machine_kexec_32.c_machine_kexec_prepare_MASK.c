
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int control_code_page; } ;


 int FUNC_0 (struct kimage*) ;
 int FUNC_1 (struct kimage*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,int) ;

int FUNC_4(struct kimage *VAR_0)
{
 int VAR_1;

 FUNC_3((unsigned long)FUNC_2(VAR_0->control_code_page), 1);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;
 FUNC_1(VAR_0);
 return 0;
}
