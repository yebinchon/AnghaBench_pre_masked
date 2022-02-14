
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct hostinfo {int tcp_port; int hostname; } ;
struct expand_path_context {int directory; struct hostinfo* hostinfo; } ;


 int FUNC_0 (struct hostinfo*) ;
 int FUNC_1 (struct hostinfo*) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (struct strbuf*,int ) ;

__attribute__((used)) static size_t FUNC_4(struct strbuf *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct expand_path_context *VAR_3 = VAR_2;
 struct hostinfo *VAR_4 = VAR_3->hostinfo;

 switch (VAR_1[0]) {
 case 'H':
  FUNC_2(VAR_0, &VAR_4->hostname);
  return 1;
 case 'C':
  if (VAR_1[1] == 'H') {
   FUNC_3(VAR_0, FUNC_0(VAR_4));
   return 2;
  }
  break;
 case 'I':
  if (VAR_1[1] == 'P') {
   FUNC_3(VAR_0, FUNC_1(VAR_4));
   return 2;
  }
  break;
 case 'P':
  FUNC_2(VAR_0, &VAR_4->tcp_port);
  return 1;
 case 'D':
  FUNC_3(VAR_0, VAR_3->directory);
  return 1;
 }
 return 0;
}
