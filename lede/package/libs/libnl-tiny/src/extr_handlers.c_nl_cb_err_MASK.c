
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cb {void* cb_err_arg; int cb_err; } ;
typedef int nl_recvmsg_err_cb_t ;
typedef enum nl_cb_kind { ____Placeholder_nl_cb_kind } nl_cb_kind ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct nl_cb *VAR_3, enum nl_cb_kind VAR_4,
       nl_recvmsg_err_cb_t VAR_5, void *VAR_6)
{
 if (VAR_4 < 0 || VAR_4 > VAR_2)
  return -VAR_0;

 if (VAR_4 == VAR_1) {
  VAR_3->cb_err = VAR_5;
  VAR_3->cb_err_arg = VAR_6;
 }

 return 0;
}
