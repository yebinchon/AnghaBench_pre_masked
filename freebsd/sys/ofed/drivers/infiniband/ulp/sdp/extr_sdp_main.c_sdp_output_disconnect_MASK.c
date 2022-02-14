
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int flags; int keep2msl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (int *,int ,int ,struct sdp_sock*) ;
 int VAR_4 ;
 int FUNC_2 (struct sdp_sock*,int ) ;

__attribute__((used)) static void
FUNC_3(struct sdp_sock *VAR_5)
{

 FUNC_0(VAR_5);
 FUNC_1(&VAR_5->keep2msl, VAR_2,
     VAR_4, VAR_5);
 VAR_5->flags |= VAR_3 | VAR_1;
 FUNC_2(VAR_5, VAR_0);
}
