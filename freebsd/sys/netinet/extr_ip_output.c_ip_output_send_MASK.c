
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct route {int dummy; } ;
struct TYPE_7__ {int csum_flags; int snd_tag; int * rcvif; } ;
struct mbuf {TYPE_3__ m_pkthdr; TYPE_4__* m_next; } ;
struct m_snd_tag {struct ifnet* ifp; } ;
struct ktls_session {struct m_snd_tag* snd_tag; } ;
struct inpcb {int inp_flags2; struct m_snd_tag* inp_snd_tag; } ;
struct ifnet {int (* if_output ) (struct ifnet*,struct mbuf*,struct sockaddr const*,struct route*) ;} ;
struct TYPE_6__ {TYPE_1__* ext_pgs; } ;
struct TYPE_8__ {TYPE_2__ m_ext; } ;
struct TYPE_5__ {int tls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*,struct ifnet*,struct mbuf*) ;
 int FUNC_4 (struct ktls_session*) ;
 struct ktls_session* FUNC_5 (int ) ;
 int FUNC_6 (struct inpcb*,struct ktls_session*) ;
 int FUNC_7 (struct m_snd_tag*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct ifnet*,struct mbuf*,struct sockaddr const*,struct route*) ;

__attribute__((used)) static int
FUNC_10(struct inpcb *VAR_3, struct ifnet *VAR_4, struct mbuf *VAR_5,
    const struct sockaddr_in *VAR_6, struct route *VAR_7, bool VAR_8)
{



 struct m_snd_tag *VAR_9;
 int VAR_10;

 FUNC_1((VAR_5->m_pkthdr.csum_flags & VAR_0) == 0);
 VAR_9 = ((void*)0);
 if (VAR_8 && VAR_9 != ((void*)0)) {
  FUNC_0(VAR_5->m_pkthdr.rcvif == ((void*)0),
      ("trying to add a send tag to a forwarded packet"));
  if (VAR_9->ifp != VAR_4) {
   VAR_10 = VAR_1;
   goto done;
  }


  VAR_5->m_pkthdr.snd_tag = FUNC_7(VAR_9);
  VAR_5->m_pkthdr.csum_flags |= VAR_0;
 }

 VAR_10 = (*VAR_4->if_output)(VAR_4, VAR_5, (const struct sockaddr *)VAR_6, VAR_7);

done:
 return (VAR_10);
}
