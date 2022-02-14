
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s2; void* s1; } ;
struct rpc_err {int re_status; TYPE_1__ re_lb; } ;
typedef void* int32_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef enum accept_stat { ____Placeholder_accept_stat } accept_stat ;



 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static enum clnt_stat
FUNC_1(enum accept_stat VAR_8, struct rpc_err *VAR_9)
{

 FUNC_0(VAR_9 != ((void*)0));

 switch (VAR_8) {

 case 130:
  VAR_9->re_status = VAR_4;
  return (VAR_4);

 case 131:
  VAR_9->re_status = VAR_5;
  return (VAR_5);

 case 132:
  return (VAR_3);

 case 133:
  return (VAR_1);

 case 128:
  return (VAR_7);

 case 129:
  return (VAR_6);
 }


 VAR_9->re_lb.s1 = (int32_t)VAR_0;
 VAR_9->re_lb.s2 = (int32_t)VAR_8;
 return (VAR_2);
}
