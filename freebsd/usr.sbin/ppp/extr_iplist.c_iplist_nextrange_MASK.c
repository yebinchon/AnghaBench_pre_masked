
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* srcptr; } ;
struct iplist {char* src; TYPE_1__ cur; } ;


 int VAR_0 ;
 int FUNC_0 (struct iplist*,char*) ;
 int FUNC_1 (int ,char*,int,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct iplist *VAR_1)
{
  char *VAR_2, *VAR_3, *VAR_4;

  VAR_2 = VAR_1->cur.srcptr;
  if (VAR_2 != ((void*)0) && (VAR_2 = FUNC_2(VAR_2, ',')) != ((void*)0))
    VAR_2++;
  else
    VAR_2 = VAR_1->src;

  while (*VAR_2 != '\0' && !FUNC_0(VAR_1, VAR_2)) {
    if ((VAR_4 = FUNC_2(VAR_2, ',')) == ((void*)0))
      VAR_4 = VAR_2 + FUNC_3(VAR_2);
    if (VAR_4 == VAR_2)
      return 0;
    FUNC_1(VAR_0, "%.*s: Invalid IP range (skipping)\n",
               (int)(VAR_4 - VAR_2), VAR_2);
    VAR_3 = VAR_2;
    do
      *VAR_3 = *VAR_4++;
    while (*VAR_3++ != '\0');
    if (*VAR_2 == '\0')
      VAR_2 = VAR_1->src;
  }

  return 1;
}
