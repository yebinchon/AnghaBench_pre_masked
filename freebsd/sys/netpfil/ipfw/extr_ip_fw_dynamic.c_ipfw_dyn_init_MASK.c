
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int dummy; } ;
struct dyn_parent {int dummy; } ;
struct dyn_ipv6_state {int dummy; } ;
struct dyn_ipv4_state {int dummy; } ;
struct dyn_data {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int VAR_31 ;
 int FUNC_7 (struct ip_fw_chain*,int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_8 (int,int ,int) ;
 int VAR_36 ;
 int VAR_37 ;
 void* FUNC_9 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_10 (void*,int) ;

void
FUNC_11(struct ip_fw_chain *VAR_38)
{




 VAR_23 = 16384;
 VAR_24 = 4096;
 VAR_7 = 8192;

 VAR_5 = 300;
 VAR_28 = 20;
 VAR_11 = 1;
 VAR_26 = 1;
 VAR_30 = 10;
 VAR_27 = 5;

 VAR_20 = 20;
 VAR_22 = 5;
 VAR_19 = 1;
 VAR_21 = VAR_37;

 VAR_8 = FUNC_9("IPFW dynamic states data",
     sizeof(struct dyn_data), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_3, 0);
 FUNC_10(VAR_8, VAR_23);

 VAR_25 = FUNC_9("IPFW parent dynamic states",
     sizeof(struct dyn_parent), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_3, 0);
 FUNC_10(VAR_25, VAR_24);

 FUNC_3(&VAR_9);
 VAR_13 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_15 = FUNC_9("IPFW IPv4 dynamic states",
     sizeof(struct dyn_ipv4_state), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_3, 0);
 VAR_4 = 0;
 VAR_6 = ((void*)0);
 FUNC_7(VAR_38, 256);

 if (FUNC_2(VAR_31))
  VAR_32 = FUNC_8(VAR_36 * sizeof(void *), VAR_0,
      VAR_1 | VAR_2);

 FUNC_0();
 FUNC_5(&VAR_29, 1);
 FUNC_6(&VAR_29, VAR_35, VAR_34, VAR_31);
 FUNC_1(FUNC_2(VAR_31), VAR_33);
}
