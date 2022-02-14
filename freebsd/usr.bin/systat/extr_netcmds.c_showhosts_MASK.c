
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; } ;
struct hitem {int addr; int onoff; } ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 struct hostent* FUNC_1 (char*,int,int ) ;
 struct hitem* VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct hitem *VAR_3;
 struct hostent *VAR_4;

 for (VAR_3 = VAR_1; VAR_3 < VAR_1+VAR_2; VAR_3++) {
  VAR_4 = FUNC_1((char *)&VAR_3->addr, sizeof (VAR_3->addr), VAR_0);
  if (!VAR_3->onoff)
   FUNC_0('!');
  FUNC_3("%s ", VAR_4 ? VAR_4->h_name : (char *)FUNC_2(VAR_3->addr));
 }
}
