
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef int token_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_2__ {int at_type; int * at_addr; } ;
struct auditinfo_addr {TYPE_1__ ai_termid; } ;
typedef TYPE_1__ au_tid_addr_t ;
typedef int au_event_t ;
typedef int au_emod_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int,char*) ;

token_t *
FUNC_6(int VAR_4, au_event_t VAR_5, au_emod_t VAR_6,
    struct timeval VAR_7, struct auditinfo_addr *VAR_8)
{
 token_t *VAR_9;
 u_char *VAR_10 = ((void*)0);
 u_int32_t VAR_11;
 au_tid_addr_t *VAR_12;

 VAR_12 = &VAR_8->ai_termid;
 FUNC_5(VAR_12->at_type == VAR_2 || VAR_12->at_type == VAR_3,
     ("au_to_header32_ex_tm: invalid address family"));

 FUNC_4(VAR_9, VAR_10, sizeof(u_char) + sizeof(u_int32_t) +
     sizeof(u_char) + 2 * sizeof(u_int16_t) + 3 *
     sizeof(u_int32_t) + VAR_12->at_type);

 FUNC_1(VAR_10, VAR_1);
 FUNC_3(VAR_10, VAR_4);
 FUNC_1(VAR_10, VAR_0);
 FUNC_2(VAR_10, VAR_5);
 FUNC_2(VAR_10, VAR_6);

 FUNC_3(VAR_10, VAR_12->at_type);
 if (VAR_12->at_type == VAR_3)
  FUNC_0(VAR_10, &VAR_12->at_addr[0], 4 * sizeof(u_int32_t));
 else
  FUNC_0(VAR_10, &VAR_12->at_addr[0], sizeof(u_int32_t));
 VAR_11 = VAR_7.tv_usec/1000;

 FUNC_3(VAR_10, VAR_7.tv_sec);
 FUNC_3(VAR_10, VAR_11);

 return (VAR_9);
}
