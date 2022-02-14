
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdp_sock {int flags; int keep2msl; TYPE_1__* socket; } ;
struct TYPE_2__ {int so_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdp_sock*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,void (*) (void*),struct sdp_sock*) ;
 int FUNC_5 (struct sdp_sock*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct sdp_sock *VAR_4;

 VAR_4 = VAR_3;

        if (!FUNC_1(&VAR_4->keep2msl))
                return;

 if (FUNC_3(&VAR_4->keep2msl))
  goto out;
        FUNC_2(&VAR_4->keep2msl);
 if (VAR_4->flags & VAR_0 ||
     (VAR_4->socket->so_options & VAR_2) == 0)
  goto out;
 FUNC_5(VAR_4);
 FUNC_4(&VAR_4->keep2msl, VAR_1,
     FUNC_6, VAR_4);
out:
 FUNC_0(VAR_4);
}
