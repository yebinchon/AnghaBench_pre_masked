
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_req {int (* func ) (int ) ;} ;
typedef enum action { ____Placeholder_action } action ;


 struct pd_req* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static enum action FUNC_2(void)
{
 struct pd_req *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->func(VAR_0);
}
