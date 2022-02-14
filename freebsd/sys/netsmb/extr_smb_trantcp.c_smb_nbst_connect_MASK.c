
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct thread {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr_nb {struct sockaddr_in snb_addrin; } ;
struct sockaddr {int sa_len; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {struct timespec nbp_timo; struct sockaddr_nb* nbp_paddr; int * nbp_laddr; int * nbp_tso; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (struct sockaddr_nb*,int ) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (struct nbpcb*,struct sockaddr_in*,struct thread*) ;
 int FUNC_4 (struct nbpcb*,struct thread*) ;
 int FUNC_5 (struct smb_vc*,struct thread*) ;
 scalar_t__ FUNC_6 (struct sockaddr*,int ) ;
 int FUNC_7 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_8 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static int
FUNC_9(struct smb_vc *VAR_6, struct sockaddr *VAR_7, struct thread *VAR_8)
{
 struct nbpcb *VAR_9 = VAR_6->vc_tdata;
 struct sockaddr_in VAR_10;
 struct sockaddr_nb *VAR_11;
 struct timespec VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_0("\n");
 if (VAR_9->nbp_tso != ((void*)0))
  return VAR_1;
 if (VAR_9->nbp_laddr == ((void*)0))
  return VAR_0;
 VAR_15 = VAR_7->sa_len;
 if (VAR_15 < VAR_5)
  return VAR_0;
 if (VAR_9->nbp_paddr) {
  FUNC_1(VAR_9->nbp_paddr, VAR_3);
  VAR_9->nbp_paddr = ((void*)0);
 }
 VAR_11 = (struct sockaddr_nb*)FUNC_6(VAR_7, VAR_4);
 if (VAR_11 == ((void*)0))
  return VAR_2;
 VAR_9->nbp_paddr = VAR_11;
 VAR_10 = VAR_11->snb_addrin;
 FUNC_2(&VAR_12);
 VAR_14 = FUNC_3(VAR_9, &VAR_10, VAR_8);
 if (VAR_14)
  return VAR_14;
 FUNC_2(&VAR_13);
 FUNC_8(&VAR_13, &VAR_12, &VAR_13);
 if (VAR_13 == 0) {
  VAR_13 = 1;
  VAR_13 = 0;
 }
 FUNC_7(&VAR_13, &VAR_13, &VAR_9->nbp_timo);
 FUNC_7(&VAR_9->nbp_timo, &VAR_13, &VAR_9->nbp_timo);
 FUNC_7(&VAR_9->nbp_timo, &VAR_13, &VAR_9->nbp_timo);
 VAR_14 = FUNC_4(VAR_9, VAR_8);
 if (VAR_14)
  FUNC_5(VAR_6, VAR_8);
 return VAR_14;
}
