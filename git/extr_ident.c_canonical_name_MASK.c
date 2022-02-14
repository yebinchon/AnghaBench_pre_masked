
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct hostent {scalar_t__ h_name; } ;
struct addrinfo {scalar_t__ ai_canonname; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 struct hostent* FUNC_2 (char const*) ;
 int FUNC_3 (struct addrinfo*,char,int) ;
 int FUNC_4 (struct strbuf*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,char) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, struct strbuf *VAR_2)
{
 int VAR_3 = -1;


 struct addrinfo VAR_4, *VAR_5;
 FUNC_3 (&VAR_4, '\0', sizeof (VAR_4));
 VAR_4.ai_flags = VAR_0;
 if (!FUNC_1(VAR_1, ((void*)0), &VAR_4, &VAR_5)) {
  if (VAR_5 && VAR_5->ai_canonname && FUNC_5(VAR_5->ai_canonname, '.')) {
   FUNC_4(VAR_2, VAR_5->ai_canonname);
   VAR_3 = 0;
  }
  FUNC_0(VAR_5);
 }
 return VAR_3;
}
