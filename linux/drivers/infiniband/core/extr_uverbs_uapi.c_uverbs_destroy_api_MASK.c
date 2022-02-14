
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_api {struct uverbs_api* write_methods; } ;


 int VAR_0 ;
 int FUNC_0 (struct uverbs_api*) ;
 int FUNC_1 (struct uverbs_api*,int ,int ) ;

void FUNC_2(struct uverbs_api *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(VAR_1, 0, VAR_0);
 FUNC_0(VAR_1->write_methods);
 FUNC_0(VAR_1);
}
