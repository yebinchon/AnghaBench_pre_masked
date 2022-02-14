
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct link {int nlayers; TYPE_1__** layer; } ;
struct bundle {int dummy; } ;
struct TYPE_2__ {struct mbuf* (* pull ) (struct bundle*,struct link*,struct mbuf*,scalar_t__*) ;} ;


 int FUNC_0 (struct bundle*,struct link*,struct mbuf*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_2 (struct link*,size_t) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 struct mbuf* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (struct mbuf**,char,int) ;
 struct mbuf* FUNC_7 (struct bundle*,struct link*,struct mbuf*,scalar_t__*) ;

void
FUNC_8(struct link *VAR_3, char *VAR_4, size_t VAR_5, struct bundle *VAR_6)
{
  struct mbuf *VAR_7, *VAR_8[VAR_0], *VAR_9;
  u_short VAR_10[VAR_0], VAR_11;
  int VAR_12;
  FUNC_2(VAR_3, VAR_5);

  FUNC_6(VAR_8, '\0', sizeof VAR_8);
  VAR_8[0] = FUNC_4(VAR_5, VAR_2);
  FUNC_5(FUNC_1(VAR_8[0]), VAR_4, VAR_5);
  VAR_10[0] = 0;
  VAR_12 = 0;

  while (VAR_12 || VAR_8[VAR_12]) {
    if (VAR_8[VAR_12] == ((void*)0)) {
      VAR_12--;
      continue;
    }
    VAR_7 = VAR_8[VAR_12];
    VAR_8[VAR_12] = VAR_7->m_nextpkt;
    VAR_7->m_nextpkt = ((void*)0);
    VAR_11 = VAR_10[VAR_12];

    if (VAR_3->layer[VAR_12]->pull != ((void*)0))
      VAR_7 = (*VAR_3->layer[VAR_12]->pull)(VAR_6, VAR_3, VAR_7, &VAR_11);

    if (VAR_12 == VAR_3->nlayers - 1) {

      while (VAR_7) {
        VAR_9 = VAR_7->m_nextpkt;
        VAR_7->m_nextpkt = ((void*)0);
        FUNC_3(VAR_1, "link_PullPacket: Despatch proto 0x%04x\n", VAR_11);
        FUNC_0(VAR_6, VAR_3, VAR_7, VAR_11);
        VAR_7 = VAR_9;
      }
    } else {
      VAR_8[++VAR_12] = VAR_7;
      VAR_10[VAR_12] = VAR_11;
    }
  }
}
