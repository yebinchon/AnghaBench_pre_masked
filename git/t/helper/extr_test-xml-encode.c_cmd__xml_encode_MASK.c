
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,unsigned char) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (unsigned char*,int,int,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_5 (int ,unsigned char*,int) ;

int FUNC_6(int VAR_2, const char **VAR_3)
{
 unsigned char VAR_4[1024], VAR_5[4], *VAR_6 = ((void*)0);
 ssize_t VAR_7 = 0, VAR_8 = 1, VAR_9 = 0;
 unsigned char VAR_10;

 for (;;) {
  if (++VAR_7 == VAR_8) {
   VAR_8 = FUNC_5(0, VAR_4, sizeof(VAR_4));
   if (!VAR_8)
    return 0;
   if (VAR_8 < 0)
    FUNC_0("Could not read <stdin>");
   VAR_7 = 0;
  }
  VAR_10 = VAR_4[VAR_7];

  if (VAR_6) {
   if ((VAR_10 & 0xc0) != 0x80) {
    FUNC_3(VAR_1, VAR_0);
    VAR_6 = ((void*)0);
    VAR_7--;
    continue;
   }
   *VAR_6 = VAR_10;
   VAR_6++;
   if (--VAR_9 == 0) {
    FUNC_4(VAR_5, VAR_6 - VAR_5, 1, VAR_0);
    VAR_6 = ((void*)0);
   }
   continue;
  }

  if (!(VAR_10 & 0x80)) {

   if (VAR_10 == '&')
    FUNC_3("&amp;", VAR_0);
   else if (VAR_10 == '\'')
    FUNC_3("&apos;", VAR_0);
   else if (VAR_10 == '"')
    FUNC_3("&quot;", VAR_0);
   else if (VAR_10 == '<')
    FUNC_3("&lt;", VAR_0);
   else if (VAR_10 == '>')
    FUNC_3("&gt;", VAR_0);
   else if (VAR_10 >= 0x20)
    FUNC_2(VAR_10, VAR_0);
   else if (VAR_10 == 0x09 || VAR_10 == 0x0a || VAR_10 == 0x0d)
    FUNC_1(VAR_0, "&#x%02hhx;", VAR_10);
   else
    FUNC_3(VAR_1, VAR_0);
  } else if ((VAR_10 & 0xe0) == 0xc0) {

   VAR_5[0] = VAR_10;
   VAR_9 = 1;
   VAR_6 = VAR_5 + 1;
  } else if ((VAR_10 & 0xf0) == 0xe0) {

   VAR_5[0] = VAR_10;
   VAR_9 = 2;
   VAR_6 = VAR_5 + 1;
  } else if ((VAR_10 & 0xf8) == 0xf0) {

   VAR_5[0] = VAR_10;
   VAR_9 = 3;
   VAR_6 = VAR_5 + 1;
  } else
   FUNC_3(VAR_1, VAR_0);
 }

 return 0;
}
