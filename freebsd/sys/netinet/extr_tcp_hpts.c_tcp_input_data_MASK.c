
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_in_pkt; TYPE_1__* t_fb; int * t_fb_ptr; int * t_inpcb; } ;
struct tcp_hpts_entry {struct inpcb* p_inp; int p_mtx; int p_input; } ;
struct inpcb {scalar_t__ inp_input_cpu_set; int inp_flags; int inp_flags2; int inp_socket; scalar_t__ inp_in_input; int inp_vnet; int inp_hpts_drop_reas; } ;
typedef int int16_t ;
struct TYPE_2__ {int (* tfb_do_queued_segments ) (int ,struct tcpcb*,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcp_hpts_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 () ;
 struct inpcb* FUNC_7 (int *) ;
 int FUNC_8 (struct tcp_hpts_entry*,struct inpcb*,int ) ;
 scalar_t__ FUNC_9 (struct inpcb*) ;
 struct tcpcb* FUNC_10 (struct inpcb*) ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,struct tcpcb*,int ) ;
 struct tcpcb* FUNC_15 (struct tcpcb*,int ) ;
 int FUNC_16 (struct tcpcb*) ;
 int FUNC_17 (struct inpcb*,int ) ;
 int FUNC_18 (struct inpcb*) ;

__attribute__((used)) static void
FUNC_19(struct tcp_hpts_entry *VAR_5, struct timeval *VAR_6)
{
 struct tcpcb *VAR_7;
 struct inpcb *VAR_8;
 uint16_t VAR_9;
 int16_t VAR_10;
 uint32_t VAR_11 = 0;
 int VAR_12;

 FUNC_2(VAR_5);
 FUNC_6();

 while ((VAR_8 = FUNC_7(&VAR_5->p_input)) != ((void*)0)) {
  FUNC_2(VAR_5);
  FUNC_8(VAR_5, VAR_8, 0);
  if (VAR_8->inp_input_cpu_set == 0) {
   VAR_10 = 1;
  } else {
   VAR_10 = 0;
  }
  VAR_5->p_inp = VAR_8;
  VAR_9 = VAR_8->inp_hpts_drop_reas;
  VAR_8->inp_in_input = 0;
  FUNC_13(&VAR_5->p_mtx);
  FUNC_4(VAR_8);



  if ((VAR_8->inp_flags & (VAR_4 | VAR_1)) ||
      (VAR_8->inp_flags2 & VAR_2)) {
out:
   VAR_5->p_inp = ((void*)0);
   if (FUNC_9(VAR_8) == 0) {
    FUNC_5(VAR_8);
   }



   FUNC_12(&VAR_5->p_mtx);
   continue;
  }
  VAR_7 = FUNC_10(VAR_8);
  if ((VAR_7 == ((void*)0)) || (VAR_7->t_inpcb == ((void*)0))) {
   goto out;
  }
  if (VAR_9) {

   FUNC_16(VAR_7);
   VAR_7 = FUNC_15(VAR_7, VAR_9);
   if (VAR_7 == ((void*)0)) {
    FUNC_4(VAR_8);
   }
   if (FUNC_9(VAR_8) == 0)
    FUNC_5(VAR_8);



   FUNC_12(&VAR_5->p_mtx);
   continue;
  }
  if (VAR_10) {
   FUNC_18(VAR_8);
  }
  if (VAR_7->t_fb_ptr != ((void*)0)) {
   FUNC_11(VAR_7->t_fb_ptr, &VAR_11);
   VAR_11 = 1;
  }
  if ((VAR_8->inp_flags2 & VAR_3) && VAR_7->t_in_pkt) {
   if (VAR_8->inp_in_input)
    FUNC_17(VAR_8, VAR_0);
   VAR_12 = (*VAR_7->t_fb->tfb_do_queued_segments)(VAR_8->inp_socket, VAR_7, 0);
   if (VAR_12) {

    FUNC_4(VAR_8);
   }
  } else if (VAR_7->t_in_pkt) {
   FUNC_16(VAR_7);
  }
  if (FUNC_9(VAR_8) == 0)
   FUNC_5(VAR_8);
  FUNC_3(VAR_8);



  FUNC_12(&VAR_5->p_mtx);
  VAR_5->p_inp = ((void*)0);
 }
}
