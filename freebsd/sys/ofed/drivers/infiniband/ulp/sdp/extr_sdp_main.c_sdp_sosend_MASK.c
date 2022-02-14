
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct uio {long uio_resid; } ;
struct TYPE_10__ {int ru_msgsnd; } ;
struct thread {TYPE_2__ td_ru; } ;
struct TYPE_11__ {int sb_state; long sb_lowat; } ;
struct socket {scalar_t__ so_type; int so_error; int so_state; TYPE_3__ so_snd; } ;
struct sockaddr {int dummy; } ;
struct sdp_sock {long xmit_size_goal; } ;
struct TYPE_9__ {long len; } ;
struct mbuf {int m_flags; scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int VAR_17 ;
 long VAR_18 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (struct uio*,int ,int,int ,int) ;
 int FUNC_5 (long,long) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 long FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct socket*,int ,struct mbuf*,struct sockaddr*,int *,struct thread*) ;
 struct sdp_sock* FUNC_11 (struct socket*) ;

__attribute__((used)) static int
FUNC_12(struct socket *VAR_22, struct sockaddr *VAR_23, struct uio *VAR_24,
    struct mbuf *VAR_25, struct mbuf *VAR_26, int VAR_27, struct thread *VAR_28)
{
 struct sdp_sock *VAR_29;
 long VAR_30, VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;

 if (VAR_24 != ((void*)0))
  VAR_31 = VAR_24->uio_resid;
 else
  VAR_31 = VAR_25->m_pkthdr.len;
 VAR_32 = VAR_25 != ((void*)0);
 if (VAR_26 != ((void*)0)) {
  if (VAR_26->m_len) {
   FUNC_3(VAR_26);
   if (VAR_25)
    FUNC_3(VAR_25);
   return (VAR_1);
  }
  FUNC_3(VAR_26);
  VAR_26 = ((void*)0);
 }
 if (VAR_31 < 0 || (VAR_22->so_type == VAR_19 && (VAR_27 & VAR_8))) {
  VAR_33 = VAR_1;
  goto out;
 }
 if (VAR_28 != ((void*)0))
  VAR_28->td_ru.ru_msgsnd++;

 VAR_29 = FUNC_11(VAR_22);
 VAR_33 = FUNC_6(&VAR_22->so_snd, FUNC_0(VAR_27));
 if (VAR_33)
  goto out;

restart:
 do {
  FUNC_1(&VAR_22->so_snd);
  if (VAR_22->so_snd.sb_state & VAR_17) {
   FUNC_2(&VAR_22->so_snd);
   VAR_33 = VAR_4;
   goto release;
  }
  if (VAR_22->so_error) {
   VAR_33 = VAR_22->so_error;
   VAR_22->so_error = 0;
   FUNC_2(&VAR_22->so_snd);
   goto release;
  }
  if ((VAR_22->so_state & VAR_20) == 0 && VAR_23 == ((void*)0)) {
   FUNC_2(&VAR_22->so_snd);
   VAR_33 = VAR_3;
   goto release;
  }
  VAR_30 = FUNC_7(&VAR_22->so_snd);
  if (VAR_27 & VAR_10)
   VAR_30 += 1024;
  if (VAR_32 && VAR_31 > VAR_29->xmit_size_goal - VAR_18) {
   FUNC_2(&VAR_22->so_snd);
   VAR_33 = VAR_2;
   goto release;
  }
  if (VAR_30 < VAR_31 &&
      (VAR_32 || VAR_30 < VAR_22->so_snd.sb_lowat)) {
   if ((VAR_22->so_state & VAR_21) ||
       (VAR_27 & (VAR_9 | VAR_6)) != 0) {
    FUNC_2(&VAR_22->so_snd);
    VAR_33 = VAR_5;
    goto release;
   }
   VAR_33 = FUNC_9(&VAR_22->so_snd);
   FUNC_2(&VAR_22->so_snd);
   if (VAR_33)
    goto release;
   goto restart;
  }
  FUNC_2(&VAR_22->so_snd);
  do {
   if (VAR_24 == ((void*)0)) {
    VAR_31 = 0;
    if (VAR_27 & VAR_8)
     VAR_25->m_flags |= VAR_11;
   } else {





    VAR_34 = FUNC_5(VAR_30,
        VAR_29->xmit_size_goal - VAR_18);
    VAR_25 = FUNC_4(VAR_24, VAR_13, VAR_34,
        0, VAR_12 |
        ((VAR_27 & VAR_8) ? VAR_11 : 0));
    if (VAR_25 == ((void*)0)) {

     VAR_33 = VAR_0;
     goto release;
    }
    VAR_30 -= VAR_31 - VAR_24->uio_resid;
    VAR_31 = VAR_24->uio_resid;
   }





   VAR_33 = FUNC_10(VAR_22, (VAR_27 & VAR_10) ? VAR_16 :




       ((VAR_27 & VAR_7) && (VAR_31 <= 0)) ? VAR_14 :

       (VAR_31 > 0 && VAR_30 > 0) ? VAR_15 : 0,
       VAR_25, VAR_23, ((void*)0), VAR_28);
   VAR_25 = ((void*)0);
   if (VAR_33)
    goto release;
  } while (VAR_31 && VAR_30 > 0);
 } while (VAR_31);

release:
 FUNC_8(&VAR_22->so_snd);
out:
 if (VAR_25 != ((void*)0))
  FUNC_3(VAR_25);
 return (VAR_33);
}
