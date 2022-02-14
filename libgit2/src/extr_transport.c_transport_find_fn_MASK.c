
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* param; int fn; } ;
typedef TYPE_1__ transport_definition ;
typedef int git_transport_cb ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char) ;
 TYPE_1__* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
 git_transport_cb *VAR_2,
 const char *VAR_3,
 void **VAR_4)
{
 transport_definition *VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5 && FUNC_2(VAR_3, ':')) {


  VAR_5 = FUNC_3("ssh://");
 }



 if (!VAR_5 && FUNC_0(VAR_3) && FUNC_1(VAR_3))
  VAR_5 = &VAR_1;


 if (!VAR_5)
  return VAR_0;

 *VAR_2 = VAR_5->fn;
 *VAR_4 = VAR_5->param;

 return 0;
}
