
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct event_base {int nactivequeues; int active_later_queue; int * activequeues; } ;


 struct event_callback* FUNC_0 (int *) ;
 struct event_callback* FUNC_1 (struct event_callback*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct event_base*,struct event_callback*,int) ;

__attribute__((used)) static int FUNC_3(struct event_base *VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->nactivequeues; ++VAR_4) {
  struct event_callback *VAR_5, *VAR_6;
  for (VAR_5 = FUNC_0(&VAR_1->activequeues[VAR_4]); VAR_5; ) {
   VAR_6 = FUNC_1(VAR_5, VAR_0);
   VAR_3 += FUNC_2(VAR_1, VAR_5, VAR_2);
   VAR_5 = VAR_6;
  }
 }

 {
  struct event_callback *VAR_7;
  while ((VAR_7 = FUNC_0(&VAR_1->active_later_queue))) {
   VAR_3 += FUNC_2(VAR_1, VAR_7, VAR_2);
  }
 }

 return VAR_3;
}
