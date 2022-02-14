
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLog ;
typedef int GHolder ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_0, GLog * VAR_1, GHolder * VAR_2)
{
  char *VAR_3 = ((void*)0);

  if ((VAR_3 = FUNC_2 (VAR_1, VAR_2, 1)) == ((void*)0))
    return;

  FUNC_0 (VAR_0, "<script type='text/javascript'>");
  FUNC_0 (VAR_0, "var json_data=%s", VAR_3);
  FUNC_0 (VAR_0, "</script>");

  FUNC_1 (VAR_3);
}
