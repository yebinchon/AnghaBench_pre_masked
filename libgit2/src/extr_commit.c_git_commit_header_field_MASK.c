
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* raw_header; } ;
typedef TYPE_1__ git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char const*) ;

int FUNC_9(git_buf *VAR_2, const git_commit *VAR_3, const char *VAR_4)
{
 const char *VAR_5, *VAR_6 = VAR_3->raw_header;

 FUNC_1(VAR_2);

 while ((VAR_5 = FUNC_7(VAR_6, '\n'))) {

  if (VAR_6[0] == ' ') {
   VAR_6 = VAR_5 + 1;
   continue;
  }


  if (FUNC_0(VAR_6, VAR_4)) {
   VAR_6 = VAR_5 + 1;
   continue;
  }

  VAR_6 += FUNC_8(VAR_4);

  if (VAR_6[0] != ' ') {
   VAR_6 = VAR_5 + 1;
   continue;
  }

  VAR_6++;

  FUNC_3(VAR_2, VAR_6, VAR_5 - VAR_6);
  if (FUNC_2(VAR_2))
   goto oom;


  while (VAR_5[1] == ' ') {
   FUNC_4(VAR_2, '\n');
   VAR_6 = VAR_5 + 2;
   VAR_5 = FUNC_7(VAR_6, '\n');
   if (!VAR_5)
    goto malformed;

   FUNC_3(VAR_2, VAR_6, VAR_5 - VAR_6);
  }

  if (FUNC_2(VAR_2))
   goto oom;

  return 0;
 }

 FUNC_5(VAR_1, "no such field '%s'", VAR_4);
 return VAR_0;

malformed:
 FUNC_5(VAR_1, "malformed header");
 return -1;
oom:
 FUNC_6();
 return -1;
}
