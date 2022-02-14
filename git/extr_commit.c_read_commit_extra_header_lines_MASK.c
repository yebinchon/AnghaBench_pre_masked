
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct commit_extra_header {int len; void* value; struct commit_extra_header* next; int key; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,char const**) ;
 char* FUNC_1 (char const*,char,int) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 void* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 struct commit_extra_header* FUNC_6 (int,int) ;
 int FUNC_7 (char const*,int) ;

__attribute__((used)) static struct commit_extra_header *FUNC_8(
 const char *VAR_1, size_t VAR_2,
 const char **VAR_3)
{
 struct commit_extra_header *VAR_4 = ((void*)0), **VAR_5 = &VAR_4, *VAR_6 = ((void*)0);
 const char *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 struct strbuf VAR_11 = VAR_0;

 for (VAR_7 = VAR_1, VAR_10 = VAR_7 + VAR_2;
      VAR_7 < VAR_10 && *VAR_7 != '\n';
      VAR_7 = VAR_8) {
  VAR_8 = FUNC_1(VAR_7, '\n', VAR_10 - VAR_7);
  VAR_8 = VAR_8 ? VAR_8 + 1 : VAR_10;
  if (*VAR_7 == ' ') {

   if (VAR_6)
    FUNC_3(&VAR_11, VAR_7 + 1, VAR_8 - (VAR_7 + 1));
   continue;
  }
  if (VAR_6)
   VAR_6->value = FUNC_4(&VAR_11, &VAR_6->len);
  FUNC_5(&VAR_11);
  VAR_6 = ((void*)0);

  VAR_9 = FUNC_1(VAR_7, ' ', VAR_8 - VAR_7);
  if (!VAR_9)
   VAR_9 = VAR_8;
  else if (FUNC_2(VAR_7, VAR_9 - VAR_7) ||
    FUNC_0(VAR_7, VAR_9 - VAR_7, VAR_3))
   continue;

  VAR_6 = FUNC_6(1, sizeof(*VAR_6));
  VAR_6->key = FUNC_7(VAR_7, VAR_9-VAR_7);
  *VAR_5 = VAR_6;
  VAR_5 = &VAR_6->next;
  if (VAR_9 + 1 < VAR_8)
   FUNC_3(&VAR_11, VAR_9 + 1, VAR_8 - (VAR_9 + 1));
 }
 if (VAR_6)
  VAR_6->value = FUNC_4(&VAR_11, &VAR_6->len);
 return VAR_4;
}
