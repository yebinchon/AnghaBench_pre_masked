
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_char ;
typedef int token_t ;
typedef int pid_t ;
typedef int gid_t ;
struct TYPE_3__ {int * at_addr; int at_type; int at_port; } ;
typedef TYPE_1__ au_tid_addr_t ;
typedef int au_id_t ;
typedef int au_asid_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,int ) ;

token_t *
FUNC_6(au_id_t VAR_3, uid_t VAR_4, gid_t VAR_5, uid_t VAR_6,
    gid_t VAR_7, pid_t VAR_8, au_asid_t VAR_9, au_tid_addr_t *VAR_10)
{
 token_t *VAR_11;
 u_char *VAR_12 = ((void*)0);

 if (VAR_10->at_type == VAR_1)
  FUNC_4(VAR_11, VAR_12, sizeof(u_char) +
      7 * sizeof(u_int32_t) + sizeof(u_int64_t) +
      2 * sizeof(u_int32_t));
 else if (VAR_10->at_type == VAR_2)
  FUNC_4(VAR_11, VAR_12, sizeof(u_char) +
      7 * sizeof(u_int32_t) + sizeof(u_int64_t) +
      5 * sizeof(u_int32_t));
 else
  FUNC_5("au_to_process64_ex: invalidate at_type (%d)",
      VAR_10->at_type);

 FUNC_1(VAR_12, VAR_0);
 FUNC_2(VAR_12, VAR_3);
 FUNC_2(VAR_12, VAR_4);
 FUNC_2(VAR_12, VAR_5);
 FUNC_2(VAR_12, VAR_6);
 FUNC_2(VAR_12, VAR_7);
 FUNC_2(VAR_12, VAR_8);
 FUNC_2(VAR_12, VAR_9);
 FUNC_3(VAR_12, VAR_10->at_port);
 FUNC_2(VAR_12, VAR_10->at_type);
 FUNC_0(VAR_12, &VAR_10->at_addr[0], sizeof(u_int32_t));
 if (VAR_10->at_type == VAR_2) {
  FUNC_0(VAR_12, &VAR_10->at_addr[1], sizeof(u_int32_t));
  FUNC_0(VAR_12, &VAR_10->at_addr[2], sizeof(u_int32_t));
  FUNC_0(VAR_12, &VAR_10->at_addr[3], sizeof(u_int32_t));
 }

 return (VAR_11);
}
