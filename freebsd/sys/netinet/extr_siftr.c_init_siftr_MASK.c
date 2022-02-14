
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(void)
{
 FUNC_0(VAR_6, VAR_10, ((void*)0),
     VAR_3);


 VAR_5 = FUNC_1(VAR_4, VAR_2,
     &VAR_7);

 FUNC_2(&VAR_9, "siftr_pkt_queue_mtx", ((void*)0), VAR_1);
 FUNC_2(&VAR_8, "siftr_pkt_mgr_mtx", ((void*)0), VAR_1);


 FUNC_3("\nStatistical Information For TCP Research (SIFTR) %s\n"
     "          http://caia.swin.edu.au/urp/newtcp\n\n",
     VAR_0);

 return (0);
}
