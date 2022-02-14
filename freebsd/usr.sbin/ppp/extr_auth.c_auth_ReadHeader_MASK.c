
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct mbuf {int dummy; } ;
struct TYPE_3__ {void* length; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct authinfo {TYPE_2__ in; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,size_t) ;
 int FUNC_2 (struct mbuf*) ;
 size_t FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (struct mbuf*,int *,int) ;
 int FUNC_5 (void*) ;

struct mbuf *
FUNC_6(struct authinfo *VAR_1, struct mbuf *VAR_2)
{
  size_t VAR_3;

  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 >= sizeof VAR_1->in.hdr) {
    VAR_2 = FUNC_4(VAR_2, (u_char *)&VAR_1->in.hdr, sizeof VAR_1->in.hdr);
    if (VAR_3 >= FUNC_5(VAR_1->in.hdr.length))
      return VAR_2;
    VAR_1->in.hdr.length = FUNC_0(0);
    FUNC_1(VAR_0, "auth_ReadHeader: Short packet (%u > %zu) !\n",
               FUNC_5(VAR_1->in.hdr.length), VAR_3);
  } else {
    VAR_1->in.hdr.length = FUNC_0(0);
    FUNC_1(VAR_0, "auth_ReadHeader: Short packet header (%u > %zu) !\n",
               (int)(sizeof VAR_1->in.hdr), VAR_3);
  }

  FUNC_2(VAR_2);
  return ((void*)0);
}
