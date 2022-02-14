
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_log_mem {int dummy; } ;
struct tcp_log_id_node {int dummy; } ;
struct tcp_log_id_bucket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_4 (char*,int,int *,int *,int *,int *,int ,int ,...) ;
 int FUNC_5 (void*,int ) ;

void
FUNC_6(void)
{

 VAR_19 = FUNC_4("tcp_log", sizeof(struct tcp_log_mem),



     ((void*)0), ((void*)0), ((void*)0),

     ((void*)0), VAR_4, 0);
 (void)FUNC_5(VAR_19, VAR_3);
 VAR_6 = FUNC_4("tcp_log_bucket",
     sizeof(struct tcp_log_id_bucket), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_4, 0);
 VAR_9 = FUNC_4("tcp_log_node",
     sizeof(struct tcp_log_id_node), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_4, 0);
 FUNC_3(&VAR_5, "TCP ID tree", VAR_2);
 FUNC_2(&VAR_8, "TCP log expireq", ((void*)0), VAR_0);
 FUNC_0(&VAR_7, 1);
}
