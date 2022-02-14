
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_iterator {int pcb_flags; int pcb_features; int iterator_flags; int done_current_ep; int (* function_inp ) (struct sctp_inpcb*,int ,int ) ;int (* function_inp_end ) (struct sctp_inpcb*,int ,int ) ;int asoc_state; scalar_t__ no_chunk_output; struct sctp_inpcb* inp; int val; int pointer; struct sctp_inpcb* stcb; int (* function_assoc ) (struct sctp_inpcb*,struct sctp_inpcb*,int ,int ) ;int (* function_atend ) (int ,int ) ;} ;
struct TYPE_3__ {int state; int refcnt; } ;
struct sctp_inpcb {int sctp_flags; int sctp_features; TYPE_1__ asoc; int sctp_asoc_list; } ;
struct TYPE_4__ {int iterator_flags; struct sctp_iterator* cur_it; } ;


 struct sctp_inpcb* FUNC_0 (int *) ;
 void* FUNC_1 (struct sctp_inpcb*,int ) ;
 int FUNC_2 (struct sctp_iterator*,int ) ;
 int FUNC_3 (struct sctp_inpcb*) ;
 int FUNC_4 (struct sctp_inpcb*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sctp_inpcb*) ;
 int FUNC_8 (struct sctp_inpcb*) ;
 int VAR_0 ;
 int FUNC_9 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,int) ;
 int VAR_6 ;
 int FUNC_12 (struct sctp_inpcb*) ;
 int FUNC_13 (struct sctp_inpcb*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct sctp_inpcb*,struct sctp_inpcb*,int ,int ) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct sctp_inpcb*,int ,int ) ;
 int FUNC_18 (struct sctp_inpcb*,int ,int ) ;
 int FUNC_19 (struct sctp_inpcb*,struct sctp_inpcb*,int ,int ) ;
 int FUNC_20 (struct sctp_inpcb*,int ,int ) ;

__attribute__((used)) static void
FUNC_21(struct sctp_iterator *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 1;
 struct sctp_inpcb *VAR_14;

 FUNC_5();
 FUNC_9();
 VAR_7.cur_it = VAR_10;
 if (VAR_10->inp) {
  FUNC_7(VAR_10->inp);
  FUNC_3(VAR_10->inp);
 }
 if (VAR_10->inp == ((void*)0)) {

done_with_iterator:
  VAR_7.cur_it = ((void*)0);
  FUNC_10();
  FUNC_6();
  if (VAR_10->function_atend != ((void*)0)) {
   (*VAR_10->function_atend) (VAR_10->pointer, VAR_10->val);
  }
  FUNC_2(VAR_10, VAR_4);
  return;
 }
select_a_new_ep:
 if (VAR_13) {
  VAR_13 = 0;
 } else {
  FUNC_7(VAR_10->inp);
 }
 while (((VAR_10->pcb_flags) &&
     ((VAR_10->inp->sctp_flags & VAR_10->pcb_flags) != VAR_10->pcb_flags)) ||
     ((VAR_10->pcb_features) &&
     ((VAR_10->inp->sctp_features & VAR_10->pcb_features) != VAR_10->pcb_features))) {

  if (VAR_10->iterator_flags & VAR_0) {
   FUNC_8(VAR_10->inp);
   goto done_with_iterator;
  }
  VAR_14 = VAR_10->inp;
  VAR_10->inp = FUNC_1(VAR_10->inp, VAR_8);
  FUNC_8(VAR_14);
  if (VAR_10->inp == ((void*)0)) {
   goto done_with_iterator;
  }
  FUNC_7(VAR_10->inp);
 }

 if (VAR_10->done_current_ep == 0) {
  if (VAR_10->function_inp != ((void*)0))
   VAR_12 = (*VAR_10->function_inp) (VAR_10->inp, VAR_10->pointer, VAR_10->val);
  VAR_10->done_current_ep = 1;
 }
 if (VAR_10->stcb == ((void*)0)) {

  VAR_10->stcb = FUNC_0(&VAR_10->inp->sctp_asoc_list);
 }
 if ((VAR_12) || VAR_10->stcb == ((void*)0)) {
  if (VAR_10->function_inp_end != ((void*)0)) {
   VAR_12 = (*VAR_10->function_inp_end) (VAR_10->inp,
       VAR_10->pointer,
       VAR_10->val);
  }
  FUNC_8(VAR_10->inp);
  goto no_stcb;
 }
 while (VAR_10->stcb) {
  FUNC_12(VAR_10->stcb);
  if (VAR_10->asoc_state && ((VAR_10->stcb->asoc.state & VAR_10->asoc_state) != VAR_10->asoc_state)) {

   FUNC_13(VAR_10->stcb);
   goto next_assoc;
  }

  VAR_11++;
  if (VAR_11 > VAR_1) {

   FUNC_14(&VAR_10->stcb->asoc.refcnt, 1);
   FUNC_13(VAR_10->stcb);
   FUNC_4(VAR_10->inp);
   FUNC_8(VAR_10->inp);
   FUNC_10();
   FUNC_6();
   FUNC_5();
   FUNC_9();
   if (VAR_7.iterator_flags) {

    FUNC_3(VAR_10->inp);
    FUNC_14(&VAR_10->stcb->asoc.refcnt, -1);
    if (VAR_7.iterator_flags &
        VAR_3) {
     VAR_7.iterator_flags &= ~VAR_3;
     goto done_with_iterator;
    }
    if (VAR_7.iterator_flags &
        VAR_2) {
     VAR_7.iterator_flags &= ~VAR_2;
     goto no_stcb;
    }

    FUNC_11("Unknown it ctl flag %x\n",
        VAR_7.iterator_flags);
    VAR_7.iterator_flags = 0;
   }
   FUNC_7(VAR_10->inp);
   FUNC_3(VAR_10->inp);
   FUNC_12(VAR_10->stcb);
   FUNC_14(&VAR_10->stcb->asoc.refcnt, -1);
   VAR_11 = 0;
  }


  (*VAR_10->function_assoc) (VAR_10->inp, VAR_10->stcb, VAR_10->pointer, VAR_10->val);





  if (VAR_10->no_chunk_output == 0)
   FUNC_15(VAR_10->inp, VAR_10->stcb, VAR_5, VAR_6);

  FUNC_13(VAR_10->stcb);
next_assoc:
  VAR_10->stcb = FUNC_1(VAR_10->stcb, VAR_9);
  if (VAR_10->stcb == ((void*)0)) {

   if (VAR_10->function_inp_end != ((void*)0)) {
    VAR_12 = (*VAR_10->function_inp_end) (VAR_10->inp,
        VAR_10->pointer,
        VAR_10->val);
   }
  }
 }
 FUNC_8(VAR_10->inp);
no_stcb:

 VAR_10->done_current_ep = 0;
 if (VAR_10->iterator_flags & VAR_0) {
  VAR_10->inp = ((void*)0);
 } else {
  VAR_10->inp = FUNC_1(VAR_10->inp, VAR_8);
 }
 if (VAR_10->inp == ((void*)0)) {
  goto done_with_iterator;
 }
 goto select_a_new_ep;
}
