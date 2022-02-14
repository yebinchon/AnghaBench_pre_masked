
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int (* destroy_func ) (struct query_state*) ;struct query_state* io_buffer; struct query_state* eid_str; } ;


 int FUNC_0 (void (*) (struct query_state*)) ;
 int FUNC_1 (void (*) (struct query_state*)) ;
 int FUNC_2 (struct query_state*) ;
 int FUNC_3 (struct query_state*) ;

void
FUNC_4(struct query_state *VAR_0)
{

 FUNC_0(FUNC_4);
 if (VAR_0->eid_str != ((void*)0))
     FUNC_2(VAR_0->eid_str);

 if (VAR_0->io_buffer != ((void*)0))
  FUNC_2(VAR_0->io_buffer);

 VAR_0->destroy_func(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(FUNC_4);
}
