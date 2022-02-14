
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 (char const*,size_t) ;
 char* FUNC_5 (char const*,char,size_t const) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(git_buf *VAR_0, const char *VAR_1, int VAR_2, char VAR_3)
{
 const size_t VAR_4 = FUNC_6(VAR_1);

 int VAR_5 = 0;
 size_t VAR_6, VAR_7, VAR_8;
 char *VAR_9;

 FUNC_3(VAR_0);

 for (VAR_6 = 0; VAR_6 < FUNC_6(VAR_1); VAR_6 += VAR_7) {
  VAR_9 = FUNC_5(VAR_1 + VAR_6, '\n', VAR_4 - VAR_6);

  if (VAR_9 != ((void*)0)) {
   VAR_7 = VAR_9 - (VAR_1 + VAR_6) + 1;
  } else {
   VAR_7 = VAR_4 - VAR_6;
  }

  if (VAR_2 && VAR_7 && VAR_1[VAR_6] == VAR_3)
   continue;

  VAR_8 = FUNC_4(VAR_1 + VAR_6, VAR_7);

  if (!VAR_8) {
   VAR_5++;
   continue;
  }

  if (VAR_5 > 0 && VAR_0->size > 0)
   FUNC_2(VAR_0, '\n');

  VAR_5 = 0;
  FUNC_1(VAR_0, VAR_1 + VAR_6, VAR_8);
  FUNC_2(VAR_0, '\n');
 }

 return FUNC_0(VAR_0) ? -1 : 0;
}
