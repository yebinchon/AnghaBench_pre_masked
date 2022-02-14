
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_7__ {int link; int af; } ;
struct TYPE_5__ {size_t his_mru; } ;
struct link {TYPE_1__ lcp; } ;
struct mp {size_t peer_mrru; TYPE_3__ out; struct link link; } ;
struct mbuf {scalar_t__ m_len; } ;
struct datalink {scalar_t__ state; struct datalink* next; TYPE_2__* physical; } ;
struct TYPE_8__ {struct mp mp; } ;
struct bundle {struct datalink* links; TYPE_4__ ncp; } ;
struct TYPE_6__ {struct link link; scalar_t__ out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_2 ;
 struct mbuf* FUNC_1 (struct link*) ;
 size_t FUNC_2 (struct link*) ;
 int FUNC_3 (int ,char*) ;
 struct mbuf* FUNC_4 (size_t,int ) ;
 size_t FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int ) ;
 struct mbuf* FUNC_7 (struct mbuf*,int ,scalar_t__) ;
 int FUNC_8 (struct mp*,struct bundle*,struct link*,struct mbuf*,int,int) ;
 int FUNC_9 (struct mp*) ;
 int FUNC_10 (TYPE_4__*,int *,struct link*) ;

int
FUNC_11(struct bundle *VAR_3)
{
  struct mp *VAR_4 = &VAR_3->ncp.mp;
  struct datalink *VAR_5, *VAR_6;
  size_t VAR_7, VAR_8, VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13;
  u_int32_t VAR_14, VAR_15;
  struct mbuf *VAR_16, *VAR_17;
  struct link *VAR_18;

  VAR_10 = VAR_11 = VAR_12 = 0;
  for (VAR_6 = ((void*)0), VAR_5 = VAR_3->links; VAR_5; VAR_5 = VAR_5->next) {

    if (!VAR_6) {
      if (VAR_10 == VAR_4->out.link)
        VAR_6 = VAR_5;
      else
        VAR_10++;
    }
    VAR_11++;
    if (VAR_5->state == VAR_0)
      VAR_12++;
  }

  if (!VAR_6) {
    VAR_6 = VAR_3->links;
    if (!VAR_6)
      return 0;
    VAR_10 = 0;
  }

  VAR_7 = 0;
  for (VAR_5 = VAR_6; VAR_11 > 0; VAR_5 = VAR_5->next, VAR_11--, VAR_10++) {
    if (!VAR_5) {
      VAR_5 = VAR_3->links;
      VAR_10 = 0;
    }

    if (VAR_5->state != VAR_0)
      continue;

    if (VAR_5->physical->out)

      continue;

    VAR_8 = FUNC_2(&VAR_5->physical->link);
    if (VAR_8) {

      VAR_7 += VAR_8;
      continue;
    }

    if (!FUNC_9(VAR_4)) {
      int VAR_19;
      VAR_19 = 0;
      VAR_13 = VAR_12 < 2;
      if (VAR_13) {
        if (VAR_5->physical->link.lcp.his_mru < VAR_4->peer_mrru) {






          VAR_19 = 1;
          VAR_13 = 0;
        }
      }

      VAR_18 = VAR_13 ? &VAR_5->physical->link : &VAR_4->link;
      if (!FUNC_10(&VAR_3->ncp, &VAR_4->out.af, VAR_18))
        break;

      if (VAR_19)
        FUNC_3(VAR_1, "Don't send data as PROTO_IP, MRU < MRRU\n");
      else if (VAR_13)
        FUNC_3(VAR_1, "Sending data as PROTO_IP, not PROTO_MP\n");

      if (VAR_13) {
        VAR_8 = FUNC_2(&VAR_5->physical->link);
        if (VAR_8) {

          VAR_7 += VAR_8;
          continue;
        }
      }
    }

    VAR_16 = FUNC_1(&VAR_4->link);
    if (VAR_16) {
      VAR_9 = FUNC_5(VAR_16);
      VAR_14 = 1;
      VAR_15 = 0;

      while (!VAR_15) {
        if (VAR_5->state == VAR_0) {

          if (VAR_9 <= VAR_5->physical->link.lcp.his_mru) {
            VAR_17 = VAR_16;
            VAR_15 = 1;
            FUNC_6(VAR_17, VAR_2);
          } else {

            VAR_17 = FUNC_4(VAR_5->physical->link.lcp.his_mru, VAR_2);
            VAR_9 -= VAR_17->m_len;
            VAR_16 = FUNC_7(VAR_16, FUNC_0(VAR_17), VAR_17->m_len);
          }
          FUNC_8(VAR_4, VAR_3, &VAR_5->physical->link, VAR_17, VAR_14, VAR_15);
          VAR_14 = 0;
        }

        if (!VAR_15) {
          VAR_11--;
          VAR_5 = VAR_5->next;
          if (!VAR_5) {
            VAR_5 = VAR_3->links;
            VAR_10 = 0;
          } else
            VAR_10++;
        }
      }
    }
  }
  VAR_4->out.link = VAR_10;

  return VAR_7;
}
