
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct hostent {scalar_t__ h_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 struct hostent* FUNC_2 (char*) ;
 struct servent* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct in_addr*,int) ;
 int FUNC_7 (int ,int) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_4, int VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8;
 struct servent *VAR_9;
 struct hostent *VAR_10;
 struct in_addr VAR_11;

 VAR_7 = VAR_8 = FUNC_9(VAR_4);
 VAR_6 = FUNC_8(VAR_8, '\n');
 if (VAR_6)
  *VAR_6 = '\0';
 for (;;VAR_8 = VAR_6) {
  for (VAR_6 = VAR_8; *VAR_6 && FUNC_5(*VAR_6); VAR_6++)
   ;
  VAR_8 = VAR_6;
  for (; *VAR_6 && !FUNC_5(*VAR_6); VAR_6++)
   ;
  if (*VAR_6)
   *VAR_6++ = '\0';
  if (VAR_6 - VAR_8 == 0)
   break;
  VAR_9 = FUNC_3(VAR_8,
      VAR_3 == VAR_1 ? "tcp" : VAR_3 == VAR_2 ? "udp" : 0);
  if (VAR_9) {
   FUNC_7(VAR_9->s_port, VAR_5);
   continue;
  }
  VAR_10 = FUNC_2(VAR_8);
  if (VAR_10 == ((void*)0)) {
   VAR_11.s_addr = FUNC_4(VAR_8);
   if (VAR_11.s_addr == VAR_0) {
    FUNC_0("%s: unknown host or port", VAR_8);
    continue;
   }
  } else
   VAR_11 = *(struct in_addr *)VAR_10->h_addr;
  FUNC_6(&VAR_11, VAR_5);
 }
 FUNC_1(VAR_7);
}
