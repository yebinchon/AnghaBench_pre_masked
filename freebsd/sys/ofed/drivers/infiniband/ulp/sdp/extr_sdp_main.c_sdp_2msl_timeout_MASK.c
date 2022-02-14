
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int flags; int shutdown_task; int keep2msl; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct sdp_sock *VAR_3;

 VAR_3 = VAR_2;

        if (!FUNC_1(&VAR_3->keep2msl))
  goto out;
        FUNC_2(&VAR_3->keep2msl);

 if ((VAR_3->flags & VAR_0) == 0)
  goto out;
 FUNC_3(VAR_1, &VAR_3->shutdown_task);
out:
 FUNC_0(VAR_3);
 return;
}
