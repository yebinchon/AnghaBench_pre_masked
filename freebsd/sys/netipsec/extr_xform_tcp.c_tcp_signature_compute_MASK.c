
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct tcphdr {int th_off; int th_sum; } ;
struct secasvar {TYPE_6__* key_auth; TYPE_4__* sah; } ;
struct TYPE_11__ {int len; } ;
struct mbuf {TYPE_5__ m_pkthdr; } ;
struct TYPE_12__ {char* key_data; } ;
struct TYPE_7__ {int sa_family; } ;
struct TYPE_8__ {TYPE_1__ sa; } ;
struct TYPE_9__ {TYPE_2__ dst; } ;
struct TYPE_10__ {TYPE_3__ saidx; } ;
typedef int MD5_CTX ;




 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct mbuf*,int *) ;
 int FUNC_5 (struct mbuf*,int *) ;
 int FUNC_6 (struct secasvar*,struct mbuf*) ;
 int FUNC_7 (struct mbuf*,int,int,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(struct mbuf *VAR_2, struct tcphdr *VAR_3,
    struct secasvar *VAR_4, u_char *VAR_5)
{
 MD5_CTX VAR_6;
 int VAR_7;
 u_short VAR_8;

 FUNC_1(&VAR_6);

 switch (VAR_4->sah->saidx.dst.sa.sa_family) {
 default:
  return (VAR_0);
 }




 VAR_8 = VAR_3->th_sum;
 VAR_3->th_sum = 0;
 FUNC_2(&VAR_6, (char *)VAR_3, sizeof(struct tcphdr));
 VAR_3->th_sum = VAR_8;




 VAR_7 += (VAR_3->th_off << 2);
 if (VAR_2->m_pkthdr.len - VAR_7 > 0)
  FUNC_7(VAR_2, VAR_7, VAR_2->m_pkthdr.len - VAR_7,
      VAR_1, &VAR_6);



 FUNC_2(&VAR_6, VAR_4->key_auth->key_data, FUNC_3(VAR_4->key_auth));
 FUNC_0(VAR_5, &VAR_6);
 FUNC_6(VAR_4, VAR_2);
 return (0);
}
