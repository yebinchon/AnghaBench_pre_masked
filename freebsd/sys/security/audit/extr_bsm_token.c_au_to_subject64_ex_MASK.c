
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_char ;
typedef int token_t ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {int * at_addr; scalar_t__ at_type; int at_port; } ;
typedef TYPE_1__ au_tid_addr_t ;
typedef scalar_t__ au_id_t ;
typedef scalar_t__ au_asid_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int,char*) ;

token_t *
FUNC_6(au_id_t VAR_3, uid_t VAR_4, gid_t VAR_5, uid_t VAR_6,
    gid_t VAR_7, pid_t VAR_8, au_asid_t VAR_9, au_tid_addr_t *VAR_10)
{
 token_t *VAR_11;
 u_char *VAR_12 = ((void*)0);

 FUNC_5((VAR_10->at_type == VAR_1) || (VAR_10->at_type == VAR_2),
     ("au_to_subject64_ex: type %u", (unsigned int)VAR_10->at_type));

 if (VAR_10->at_type == VAR_1)
  FUNC_4(VAR_11, VAR_12, sizeof(u_char) +
      7 * sizeof(u_int32_t) + sizeof(u_int64_t) +
      2 * sizeof(u_int32_t));
 else
  FUNC_4(VAR_11, VAR_12, sizeof(u_char) +
      7 * sizeof(u_int32_t) + sizeof(u_int64_t) +
      5 * sizeof(u_int32_t));

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
 if (VAR_10->at_type == VAR_2)
  FUNC_0(VAR_12, &VAR_10->at_addr[0], 4 * sizeof(u_int32_t));
 else
  FUNC_0(VAR_12, &VAR_10->at_addr[0], sizeof(u_int32_t));

 return (VAR_11);
}
