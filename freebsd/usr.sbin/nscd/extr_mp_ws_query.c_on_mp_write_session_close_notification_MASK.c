
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int * process_func; scalar_t__ kevent_watermark; scalar_t__ mdata; int config_entry; } ;
typedef int cache_mp_write_session ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int (*) (struct query_state*)) ;
 int FUNC_1 (int (*) (struct query_state*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct query_state *VAR_2)
{
 FUNC_0(FUNC_5);
 FUNC_3(VAR_2->config_entry, VAR_0);
 FUNC_2((cache_mp_write_session)VAR_2->mdata);
 FUNC_4(VAR_2->config_entry, VAR_0);
 VAR_2->mdata = VAR_1;

 VAR_2->kevent_watermark = 0;
 VAR_2->process_func = ((void*)0);
 FUNC_1(FUNC_5);
 return (0);
}
