
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_name; } ;
struct pitem {int port; int onoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 struct servent* FUNC_1 (int ,char*) ;
 int VAR_2 ;
 struct pitem* VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct pitem *VAR_5;
 struct servent *VAR_6;

 for (VAR_5 = VAR_3; VAR_5 < VAR_3+VAR_2; VAR_5++) {
  VAR_6 = FUNC_1(VAR_5->port,
      VAR_4 == (VAR_0|VAR_1) ? 0 : VAR_4 == VAR_0 ? "tcp" : "udp");
  if (!VAR_5->onoff)
   FUNC_0('!');
  if (VAR_6)
   FUNC_2("%s ", VAR_6->s_name);
  else
   FUNC_2("%d ", VAR_5->port);
 }
}
