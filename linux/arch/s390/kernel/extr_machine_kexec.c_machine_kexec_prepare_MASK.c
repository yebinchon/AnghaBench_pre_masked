
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {scalar_t__ type; int control_code_page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct kimage *VAR_5)
{
 void *VAR_6;

 if (VAR_5->type == VAR_1)
  return FUNC_0();


 if (VAR_5->type != VAR_2)
  return -VAR_0;


 VAR_6 = (void *) FUNC_2(VAR_5->control_code_page);


 FUNC_1(VAR_6, VAR_3, VAR_4);
 return 0;
}
