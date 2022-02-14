
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_cb {void** cb_args; int * cb_set; } ;
typedef int nl_recvmsg_msg_cb_t ;
typedef enum nl_cb_type { ____Placeholder_nl_cb_type } nl_cb_type ;
typedef enum nl_cb_kind { ____Placeholder_nl_cb_kind } nl_cb_kind ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct nl_cb *VAR_4, enum nl_cb_type VAR_5, enum nl_cb_kind VAR_6,
       nl_recvmsg_msg_cb_t VAR_7, void *VAR_8)
{
 if (VAR_5 < 0 || VAR_5 > VAR_3)
  return -VAR_0;

 if (VAR_6 < 0 || VAR_6 > VAR_2)
  return -VAR_0;

 if (VAR_6 == VAR_1) {
  VAR_4->cb_set[VAR_5] = VAR_7;
  VAR_4->cb_args[VAR_5] = VAR_8;
 }

 return 0;
}
