
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_frent {scalar_t__ fe_len; scalar_t__ fe_hdrlen; struct mbuf* fe_m; } ;
struct pf_fragment {int fr_queue; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;


 struct pf_frent* FUNC_0 (int *) ;
 struct pf_frent* FUNC_1 (struct pf_frent*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*,scalar_t__) ;
 int FUNC_3 (struct mbuf*,struct mbuf*) ;
 int FUNC_4 (struct pf_fragment*) ;
 int FUNC_5 (int ,struct pf_frent*) ;

__attribute__((used)) static struct mbuf *
FUNC_6(struct pf_fragment *VAR_2)
{
 struct mbuf *VAR_3, *VAR_4;
 struct pf_frent *VAR_5, *VAR_6;

 VAR_5 = FUNC_0(&VAR_2->fr_queue);
 VAR_6 = FUNC_1(VAR_5, VAR_1);

 VAR_3 = VAR_5->fe_m;
 FUNC_2(VAR_3, (VAR_5->fe_hdrlen + VAR_5->fe_len) - VAR_3->m_pkthdr.len);
 FUNC_5(VAR_0, VAR_5);
 for (VAR_5 = VAR_6; VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  VAR_6 = FUNC_1(VAR_5, VAR_1);

  VAR_4 = VAR_5->fe_m;

  FUNC_2(VAR_4, VAR_5->fe_hdrlen);

  FUNC_2(VAR_4, VAR_5->fe_len - VAR_4->m_pkthdr.len);

  FUNC_5(VAR_0, VAR_5);
  FUNC_3(VAR_3, VAR_4);
 }


 FUNC_4(VAR_2);

 return (VAR_3);
}
