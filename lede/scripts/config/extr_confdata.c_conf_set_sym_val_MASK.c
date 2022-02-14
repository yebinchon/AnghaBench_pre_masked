
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int type; int flags; int name; TYPE_1__* def; } ;
struct TYPE_2__ {int val; int tri; } ;



 int VAR_0 ;





 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (struct symbol*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct symbol *VAR_4, int VAR_5, int VAR_6, char *VAR_7)
{
 char *VAR_8;

 switch (VAR_4->type) {
 case 128:
  if (VAR_7[0] == 'm') {
   VAR_4->def[VAR_5].tri = VAR_1;
   VAR_4->flags |= VAR_6;
   break;
  }

 case 133:
  if (VAR_7[0] == 'y') {
   VAR_4->def[VAR_5].tri = VAR_3;
   VAR_4->flags |= VAR_6;
   break;
  }
  if (VAR_7[0] == 'n') {
   VAR_4->def[VAR_5].tri = VAR_2;
   VAR_4->flags |= VAR_6;
   break;
  }
  if (VAR_5 != VAR_0)
   FUNC_0("symbol value '%s' invalid for %s",
         VAR_7, VAR_4->name);
  return 1;
 case 130:
  if (*VAR_7 != '"') {
   for (VAR_8 = VAR_7; *VAR_8 && !FUNC_1(*VAR_8); VAR_8++)
    ;
   VAR_4->type = 129;
   goto done;
  }

 case 129:
  if (*VAR_7++ != '"')
   break;
  for (VAR_8 = VAR_7; (VAR_8 = FUNC_5(VAR_8, "\"\\")); VAR_8++) {
   if (*VAR_8 == '"') {
    *VAR_8 = 0;
    break;
   }
   FUNC_2(VAR_8, VAR_8 + 1, FUNC_4(VAR_8));
  }
  if (!VAR_8) {
   if (VAR_5 != VAR_0)
    FUNC_0("invalid string found");
   return 1;
  }

 case 131:
 case 132:
 done:
  if (FUNC_6(VAR_4, VAR_7)) {
   VAR_4->def[VAR_5].val = FUNC_3(VAR_7);
   VAR_4->flags |= VAR_6;
  } else {
   if (VAR_5 != VAR_0)
    FUNC_0("symbol value '%s' invalid for %s",
          VAR_7, VAR_4->name);
   return 1;
  }
  break;
 default:
  ;
 }
 return 0;
}
