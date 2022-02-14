
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; scalar_t__ allow_dirty_shutdown; int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct bufferevent_openssl*,unsigned long) ;
 int FUNC_6 (struct bufferevent_openssl*) ;
 int FUNC_7 (struct bufferevent_openssl*) ;

__attribute__((used)) static void
FUNC_8(struct bufferevent_openssl *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_1;
 int VAR_8 = 0;
 unsigned long VAR_9;

 switch (VAR_5) {
 case 128:

  if (FUNC_2(VAR_3->ssl) & VAR_2)
   VAR_7 = VAR_0;
  else
   VAR_8 = 1;
  break;
 case 134:

  if ((VAR_6 == 0 || VAR_6 == -1) && FUNC_1() == 0)
   VAR_8 = 1;
  FUNC_5(VAR_3, VAR_5);
  break;
 case 135:

  FUNC_5(VAR_3, VAR_5);
  break;
 case 129:

  FUNC_5(VAR_3, VAR_5);
  break;
 case 136:
 case 131:
 case 130:
 case 132:
 case 133:
 default:

  FUNC_4("BUG: Unexpected OpenSSL error code %d", VAR_5);
  break;
 }

 while ((VAR_9 = FUNC_0())) {
  FUNC_5(VAR_3, VAR_9);
 }

 if (VAR_8 && VAR_3->allow_dirty_shutdown)
  VAR_7 = VAR_0;

 FUNC_6(VAR_3);
 FUNC_7(VAR_3);


 VAR_7 = VAR_4 | VAR_7;
 FUNC_3(&VAR_3->bev.bev, VAR_7, 0);
}
