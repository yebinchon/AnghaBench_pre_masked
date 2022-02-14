
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int * process_func; scalar_t__ kevent_watermark; int * mdata; int config_entry; } ;
typedef int cache_mp_read_session ;


 int VAR_0 ;
 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct query_state *VAR_1)
{

 FUNC_0(FUNC_5);
 FUNC_3(VAR_1->config_entry, VAR_0);
 FUNC_2((cache_mp_read_session)VAR_1->mdata);
 FUNC_4(VAR_1->config_entry, VAR_0);
 VAR_1->mdata = ((void*)0);
 VAR_1->kevent_watermark = 0;
 VAR_1->process_func = ((void*)0);
 FUNC_1(FUNC_5);
 return (0);
}
