
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
 if (!FUNC_9(VAR_6, "pack.island")) {
  struct strbuf VAR_9 = VAR_1;

  if (!VAR_7)
   return FUNC_2(VAR_6);

  FUNC_0(VAR_3, VAR_5 + 1, VAR_4);

  if (*VAR_7 != '^')
   FUNC_6(&VAR_9, '^');
  FUNC_7(&VAR_9, VAR_7);

  if (FUNC_5(&VAR_3[VAR_5], VAR_9.buf, VAR_0))
   FUNC_3(FUNC_1("failed to load island regex for '%s': %s"), VAR_6, VAR_9.buf);

  FUNC_8(&VAR_9);
  VAR_5++;
  return 0;
 }

 if (!FUNC_9(VAR_6, "pack.islandcore"))
  return FUNC_4(&VAR_2, VAR_6, VAR_7);

 return 0;
}
