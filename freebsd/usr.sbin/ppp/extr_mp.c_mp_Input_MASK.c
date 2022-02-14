
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct physical {int dummy; } ;
struct mbuf {int dummy; } ;
struct link {int dummy; } ;
struct TYPE_4__ {int active; } ;
struct TYPE_3__ {TYPE_2__ mp; } ;
struct bundle {TYPE_1__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct physical* FUNC_0 (struct link*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mbuf*,int ) ;
 int FUNC_4 (TYPE_2__*,struct mbuf*,struct physical*) ;

struct mbuf *
FUNC_5(struct bundle *VAR_2, struct link *VAR_3, struct mbuf *VAR_4)
{
  struct physical *VAR_5 = FUNC_0(VAR_3);

  if (!VAR_2->ncp.mp.active)

    return VAR_4;

  if (VAR_5 == ((void*)0)) {
    FUNC_1(VAR_0, "DecodePacket: Can't do MP inside MP !\n");
    FUNC_2(VAR_4);
  } else {
    FUNC_3(VAR_4, VAR_1);
    FUNC_4(&VAR_2->ncp.mp, VAR_4, VAR_5);
  }

  return ((void*)0);
}
