
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int state; int socket; int flags; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (struct sdp_sock*) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_4 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_5 (struct sdp_sock*) ;
 int FUNC_6 (struct sdp_sock*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct sdp_sock *VAR_4)
{

 FUNC_2(VAR_4);

 switch (VAR_4->state) {
 case 130:
  VAR_4->state = 133;
  FUNC_3(VAR_4);
  FUNC_6(VAR_4);
  FUNC_1(VAR_4);

 case 133:
  VAR_4 = FUNC_5(VAR_4);




  FUNC_0(VAR_4 != ((void*)0),
      ("sdp_usrclosed: sdp_closed() returned NULL"));
  break;

 case 128:

 case 129:
  VAR_4->flags |= VAR_0;
  break;

 case 131:
  VAR_4->flags |= VAR_0;
  VAR_4->state = VAR_1;
  break;

 case 132:
  VAR_4->state = VAR_3;
  break;
 }
 if (VAR_4->state >= VAR_2) {

  if (VAR_4->state == VAR_2)
   FUNC_4(VAR_4);
  else
   FUNC_7(VAR_4->socket);
 }
}
