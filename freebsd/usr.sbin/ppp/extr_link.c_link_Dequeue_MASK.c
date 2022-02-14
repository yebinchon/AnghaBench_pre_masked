
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct mbuf {int dummy; } ;
struct link {TYPE_1__* Queue; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (struct link*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int ) ;
 struct mbuf* FUNC_2 (TYPE_1__*) ;

struct mbuf *
FUNC_3(struct link *VAR_1)
{
  int VAR_2;
  struct mbuf *VAR_3;

  for (VAR_3 = ((void*)0), VAR_2 = FUNC_0(VAR_1) - 1; VAR_2 >= 0; VAR_2--)
    if (VAR_1->Queue[VAR_2].len) {
      VAR_3 = FUNC_2(VAR_1->Queue + VAR_2);
      FUNC_1(VAR_0, "link_Dequeue: Dequeued from queue %d,"
                " containing %lu more packets\n", VAR_2,
                (u_long)VAR_1->Queue[VAR_2].len);
      break;
    }

  return VAR_3;
}
