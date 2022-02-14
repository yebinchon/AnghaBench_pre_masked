
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_parts {struct cmdline_parts* next_parts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmdline_parts**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct cmdline_parts**,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

int FUNC_6(struct cmdline_parts **VAR_3, const char *VAR_4)
{
 int VAR_5;
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 struct cmdline_parts **VAR_9;

 *VAR_3 = ((void*)0);

 VAR_8 = VAR_7 = VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_9 = VAR_3;

 while (VAR_8 && *VAR_7) {
  VAR_8 = FUNC_5(VAR_7, ';');
  if (VAR_8)
   *VAR_8 = '\0';

  VAR_5 = FUNC_3(VAR_9, VAR_7);
  if (VAR_5)
   goto fail;

  if (VAR_8)
   VAR_7 = ++VAR_8;

  VAR_9 = &(*VAR_9)->next_parts;
 }

 if (!*VAR_3) {
  FUNC_4("cmdline partition has no valid partition.");
  VAR_5 = -VAR_0;
  goto fail;
 }

 VAR_5 = 0;
done:
 FUNC_1(VAR_6);
 return VAR_5;

fail:
 FUNC_0(VAR_3);
 goto done;
}
