
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int line_len; int line; } ;
struct TYPE_6__ {TYPE_5__ ctx; } ;
typedef TYPE_1__ git_config_parser ;


 int FUNC_0 (char*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 char* FUNC_6 (size_t) ;
 char* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_1__*,char*,int,char*,char**) ;
 int FUNC_11 (TYPE_1__*,int,char*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int FUNC_13(git_config_parser *VAR_0, char **VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7;
 char *VAR_8;
 size_t VAR_9;

 FUNC_9(&VAR_0->ctx);
 VAR_8 = FUNC_7(VAR_0->ctx.line, VAR_0->ctx.line_len);
 if (VAR_8 == ((void*)0))
  return -1;


 VAR_3 = FUNC_12(VAR_8, ']');
 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_8);
  FUNC_11(VAR_0, 0, "missing ']' in section header");
  return -1;
 }

 FUNC_1(&VAR_9, (size_t)(VAR_3 - VAR_8), 1);
 VAR_2 = FUNC_6(VAR_9);
 FUNC_0(VAR_2);

 VAR_4 = 0;
 VAR_6 = 0;


 VAR_5 = VAR_8[VAR_6++];
 FUNC_2(VAR_5 == '[');

 VAR_5 = VAR_8[VAR_6++];

 do {
  if (FUNC_5(VAR_5)){
   VAR_2[VAR_4] = '\0';
   VAR_7 = FUNC_10(VAR_0, VAR_8, VAR_6, VAR_2, VAR_1);
   FUNC_4(VAR_8);
   FUNC_4(VAR_2);
   return VAR_7;
  }

  if (!FUNC_3(VAR_5) && VAR_5 != '.') {
   FUNC_11(VAR_0, VAR_6, "unexpected character in header");
   goto fail_parse;
  }

  VAR_2[VAR_4++] = (char)FUNC_8(VAR_5);

 } while ((VAR_5 = VAR_8[VAR_6++]) != ']');

 if (VAR_8[VAR_6 - 1] != ']') {
  FUNC_11(VAR_0, VAR_6, "unexpected end of file");
  goto fail_parse;
 }

 FUNC_4(VAR_8);

 VAR_2[VAR_4] = 0;
 *VAR_1 = VAR_2;

 return VAR_6;

fail_parse:
 FUNC_4(VAR_8);
 FUNC_4(VAR_2);
 return -1;
}
