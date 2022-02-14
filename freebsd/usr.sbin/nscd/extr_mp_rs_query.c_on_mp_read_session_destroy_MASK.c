
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int config_entry; int * mdata; int response; int request; } ;
typedef int cache_mp_read_session ;


 int VAR_0 ;
 int FUNC_0 (void (*) (struct query_state*)) ;
 int FUNC_1 (void (*) (struct query_state*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct query_state *VAR_1)
{
 FUNC_0(FUNC_6);
 FUNC_5(&VAR_1->request);
 FUNC_5(&VAR_1->response);

 if (VAR_1->mdata != ((void*)0)) {
  FUNC_3(VAR_1->config_entry, VAR_0);
  FUNC_2(
       (cache_mp_read_session)VAR_1->mdata);
  FUNC_4(VAR_1->config_entry,
   VAR_0);
 }
 FUNC_1(FUNC_6);
}
