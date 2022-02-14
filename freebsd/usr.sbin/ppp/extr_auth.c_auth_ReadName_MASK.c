
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {char* name; } ;
struct authinfo {TYPE_1__ in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (struct mbuf*) ;
 size_t FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (struct mbuf*,int *,size_t) ;

struct mbuf *
FUNC_4(struct authinfo *VAR_1, struct mbuf *VAR_2, size_t VAR_3)
{
  if (VAR_3 > sizeof VAR_1->in.name - 1)
    FUNC_0(VAR_0, "auth_ReadName: Name too long (%zu) !\n", VAR_3);
  else {
    size_t VAR_4 = FUNC_2(VAR_2);

    if (VAR_3 > VAR_4)
      FUNC_0(VAR_0, "auth_ReadName: Short packet (%zu > %zu) !\n",
                 VAR_3, VAR_4);
    else {
      VAR_2 = FUNC_3(VAR_2, (u_char *)VAR_1->in.name, VAR_3);
      VAR_1->in.name[VAR_3] = '\0';
      return VAR_2;
    }
  }

  *VAR_1->in.name = '\0';
  FUNC_1(VAR_2);
  return ((void*)0);
}
