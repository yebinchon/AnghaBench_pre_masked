
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct active_request_slot {int in_use; int * curl; int * callback_func; int * callback_data; int * finished; int * results; struct active_request_slot* next; } ;
struct TYPE_2__ {scalar_t__ password; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 struct active_request_slot* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_20 ;
 int FUNC_3 (int ,int*) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_4 () ;
 int VAR_24 ;
 TYPE_1__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_5 (int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_6 () ;
 struct active_request_slot* FUNC_7 (int) ;

struct active_request_slot *FUNC_8(void)
{
 struct active_request_slot *VAR_30 = VAR_16;
 struct active_request_slot *VAR_31;
 while (VAR_30 != ((void*)0) && VAR_30->in_use)
  VAR_30 = VAR_30->next;

 if (VAR_30 == ((void*)0)) {
  VAR_31 = FUNC_7(sizeof(*VAR_31));
  VAR_31->curl = ((void*)0);
  VAR_31->in_use = 0;
  VAR_31->next = ((void*)0);

  VAR_30 = VAR_16;
  if (VAR_30 == ((void*)0)) {
   VAR_16 = VAR_31;
  } else {
   while (VAR_30->next != ((void*)0))
    VAR_30 = VAR_30->next;
   VAR_30->next = VAR_31;
  }
  VAR_30 = VAR_31;
 }

 if (VAR_30->curl == ((void*)0)) {



  VAR_30->curl = FUNC_0(VAR_19);

  VAR_22++;
 }

 VAR_17++;
 VAR_30->in_use = 1;
 VAR_30->results = ((void*)0);
 VAR_30->finished = ((void*)0);
 VAR_30->callback_data = ((void*)0);
 VAR_30->callback_func = ((void*)0);
 FUNC_1(VAR_30->curl, VAR_0, VAR_18);
 if (VAR_21)
  FUNC_1(VAR_30->curl, VAR_1, VAR_18);
 FUNC_1(VAR_30->curl, VAR_8, VAR_29);
 FUNC_1(VAR_30->curl, VAR_3, VAR_20);
 FUNC_1(VAR_30->curl, VAR_2, ((void*)0));
 FUNC_1(VAR_30->curl, VAR_12, ((void*)0));
 FUNC_1(VAR_30->curl, VAR_14, ((void*)0));
 FUNC_1(VAR_30->curl, VAR_10, ((void*)0));
 FUNC_1(VAR_30->curl, VAR_13, 0);
 FUNC_1(VAR_30->curl, VAR_7, 1);
 FUNC_1(VAR_30->curl, VAR_4, 1);
 FUNC_1(VAR_30->curl, VAR_11, ((void*)0));






 if (VAR_27 == VAR_15)
  FUNC_1(VAR_30->curl, VAR_5, 1);
 else
  FUNC_1(VAR_30->curl, VAR_5, 0);







 if (VAR_25.password || FUNC_2())
  FUNC_5(VAR_30->curl);

 return VAR_30;
}
