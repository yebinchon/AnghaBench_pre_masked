
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {scalar_t__ state; int flags; scalar_t__ qp_active; int keep2msl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdp_sock*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sdp_sock*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct sdp_sock *VAR_5;

 VAR_5 = VAR_4;

        if (!FUNC_1(&VAR_5->keep2msl))
  goto out;

 if (FUNC_3(&VAR_5->keep2msl))
  goto out;
        FUNC_2(&VAR_5->keep2msl);
 if (VAR_5->state != VAR_2 && VAR_5->state != VAR_3)
  goto out;
 if ((VAR_5->flags & VAR_1) == 0)
  goto out;
 VAR_5->flags &= ~VAR_1;
 VAR_5->flags |= VAR_0;
 FUNC_4(VAR_5);
 VAR_5->qp_active = 0;
out:
 FUNC_0(VAR_5);
}
