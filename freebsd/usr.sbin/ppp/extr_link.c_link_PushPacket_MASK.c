
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct mbuf {scalar_t__ priv; } ;
struct link {int nlayers; scalar_t__ Queue; TYPE_1__** layer; } ;
struct bundle {int dummy; } ;
struct TYPE_2__ {struct mbuf* (* push ) (struct bundle*,struct link*,struct mbuf*,int,int *) ;} ;


 unsigned int FUNC_0 (struct link*) ;
 int VAR_0 ;
 int FUNC_1 (struct link*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (struct bundle*,struct link*,struct mbuf*,int,int *) ;

void
FUNC_7(struct link *VAR_1, struct mbuf *VAR_2, struct bundle *VAR_3, int VAR_4,
                u_short VAR_5)
{
  int VAR_6;
  if(VAR_4 < 0 || (unsigned)VAR_4 >= FUNC_0(VAR_1))
    VAR_4 = 0;

  VAR_2->priv = 0;
  for (VAR_6 = VAR_1->nlayers; VAR_6 && VAR_2; VAR_6--)
    if (VAR_1->layer[VAR_6 - 1]->push != ((void*)0))
      VAR_2 = (*VAR_1->layer[VAR_6 - 1]->push)(VAR_3, VAR_1, VAR_2, VAR_4, &VAR_5);

  if (VAR_2) {
    FUNC_1(VAR_1, FUNC_4(VAR_2));
    FUNC_2(VAR_0, "link_PushPacket: Transmit proto 0x%04x\n", VAR_5);
    FUNC_3(VAR_1->Queue + VAR_4, FUNC_5(VAR_2));
  }
}
