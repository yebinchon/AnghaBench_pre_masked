
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_execlists {int csb_size; unsigned int csb_head; int * csb_status; int * csb_write; } ;
struct intel_engine_cs {struct intel_engine_execlists execlists; } ;


 int FUNC_0 (int ,unsigned int const) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct intel_engine_cs*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_0)
{
 struct intel_engine_execlists * const VAR_1 = &VAR_0->execlists;
 const unsigned int VAR_2 = VAR_1->csb_size - 1;

 FUNC_2(VAR_0, 0);
 VAR_1->csb_head = VAR_2;
 FUNC_0(*VAR_1->csb_write, VAR_2);
 FUNC_3();

 FUNC_1(&VAR_1->csb_status[0],
          &VAR_1->csb_status[VAR_2]);
}
