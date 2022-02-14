
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct tcphdr {int th_sum; } ;
struct TYPE_2__ {scalar_t__ len; int csum_flags; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; } ;
typedef int oldmss ;
typedef int mss ;
typedef int csum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int,int,int) ;
 struct mbuf* FUNC_2 (struct mbuf*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct mbuf **VAR_7, struct tcphdr *VAR_8, int VAR_9, uint16_t VAR_10)
{
 struct mbuf *VAR_11;
 u_char *VAR_12;
 int VAR_13, VAR_14;
 uint16_t VAR_15, VAR_16;

 VAR_11 = *VAR_7;
 VAR_14 = VAR_2;
 if (VAR_11->m_len < VAR_11->m_pkthdr.len) {




  *VAR_7 = VAR_11 = FUNC_2(VAR_11, VAR_11->m_pkthdr.len);
  if (VAR_11 == ((void*)0))
   return (VAR_14);
 }

 for (VAR_9 -= sizeof(struct tcphdr), VAR_12 = (u_char *)(VAR_8 + 1);
     VAR_9 > 0; VAR_9 -= VAR_13, VAR_12 += VAR_13) {
  if (VAR_12[0] == VAR_4)
   break;
  if (VAR_12[0] == VAR_6) {
   VAR_13 = 1;
   continue;
  }
  if (VAR_9 < 2)
   break;
  VAR_13 = VAR_12[1];
  if (VAR_13 < 2 || VAR_13 > VAR_9)
   break;
  if (VAR_12[0] == VAR_5) {
   if (VAR_13 != VAR_3)
    break;
   VAR_14 = 0;
   FUNC_0(VAR_12 + 2, &VAR_15, sizeof(VAR_15));

   if (FUNC_3(VAR_15) <= FUNC_3(VAR_10))
    break;
   FUNC_0(&VAR_10, VAR_12 + 2, sizeof(VAR_10));

   if ((VAR_11->m_pkthdr.csum_flags &
       (VAR_0 | VAR_1)) == 0) {
    FUNC_0(&VAR_8->th_sum, &VAR_16, sizeof(VAR_16));
    VAR_16 = FUNC_1(VAR_16, VAR_15, VAR_10);
    FUNC_0(&VAR_16, &VAR_8->th_sum, sizeof(VAR_16));
   }
   break;
  }
 }

 return (VAR_14);
}
