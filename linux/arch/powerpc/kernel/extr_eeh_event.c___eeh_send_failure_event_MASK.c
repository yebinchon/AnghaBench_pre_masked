
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeh_pe {int stack_trace; int trace_entries; } ;
struct eeh_event {int list; struct eeh_pe* pe; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct eeh_pe*,int ) ;
 struct eeh_event* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9(struct eeh_pe *VAR_6)
{
 unsigned long VAR_7;
 struct eeh_event *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_5("EEH: out of memory, event not handled\n");
  return -VAR_1;
 }
 VAR_8->pe = VAR_6;






 if (VAR_6) {
  FUNC_2(VAR_6, VAR_0);
 }


 FUNC_6(&VAR_5, VAR_7);
 FUNC_4(&VAR_8->list, &VAR_3);
 FUNC_7(&VAR_5, VAR_7);


 FUNC_1(&VAR_4);

 return 0;
}
