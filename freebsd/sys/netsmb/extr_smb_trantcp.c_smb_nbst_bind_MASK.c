
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr_nb {int dummy; } ;
struct sockaddr {int sa_len; } ;
struct smb_vc {struct nbpcb* vc_tdata; } ;
struct nbpcb {int nbp_flags; struct sockaddr_nb* nbp_laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct sockaddr*,int ) ;

__attribute__((used)) static int
FUNC_2(struct smb_vc *VAR_5, struct sockaddr *VAR_6, struct thread *VAR_7)
{
 struct nbpcb *VAR_8 = VAR_5->vc_tdata;
 struct sockaddr_nb *VAR_9;
 int VAR_10, VAR_11;

 FUNC_0("\n");
 VAR_10 = VAR_0;
 do {
  if (VAR_8->nbp_flags & VAR_3)
   break;




  if (VAR_6 == ((void*)0))
   break;
  VAR_11 = VAR_6->sa_len;
  if (VAR_11 < VAR_4)
   break;
  VAR_9 = (struct sockaddr_nb*)FUNC_1(VAR_6, VAR_2);
  if (VAR_9 == ((void*)0)) {
   VAR_10 = VAR_1;
   break;
  }
  VAR_8->nbp_laddr = VAR_9;
  VAR_8->nbp_flags |= VAR_3;
  VAR_10 = 0;
 } while(0);
 return VAR_10;
}
