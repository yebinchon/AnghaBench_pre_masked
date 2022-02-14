
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s2; void* s1; } ;
struct rpc_err {TYPE_1__ re_lb; } ;
typedef void* int32_t ;
typedef enum reject_stat { ____Placeholder_reject_stat } reject_stat ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum clnt_stat
FUNC_1(enum reject_stat VAR_4, struct rpc_err *VAR_5)
{

 FUNC_0(VAR_5 != ((void*)0));

 switch (VAR_4) {
 case 128:
  return (VAR_3);

 case 129:
  return (VAR_1);
 }


 VAR_5->re_lb.s1 = (int32_t)VAR_0;
 VAR_5->re_lb.s2 = (int32_t)VAR_4;
 return (VAR_2);
}
