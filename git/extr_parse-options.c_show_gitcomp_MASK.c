
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int type; char* long_name; int flags; } ;



 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (struct option const*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_9)
{
 const struct option *VAR_10 = VAR_9;
 int VAR_11 = 0;

 for (; VAR_9->type != VAR_0; VAR_9++) {
  const char *VAR_12 = "";

  if (!VAR_9->long_name)
   continue;
  if (VAR_9->flags & (VAR_3 | VAR_6))
   continue;

  switch (VAR_9->type) {
  case 131:
   continue;
  case 128:
  case 132:
  case 130:
  case 129:
  case 133:
   if (VAR_9->flags & VAR_5)
    break;
   if (VAR_9->flags & VAR_7)
    break;
   if (VAR_9->flags & VAR_4)
    break;
   VAR_12 = "=";
   break;
  default:
   break;
  }
  if (VAR_9->flags & VAR_2)
   VAR_12 = "=";
  if (FUNC_3(VAR_9->long_name, "no-"))
   VAR_11++;
  FUNC_1(" --%s%s", VAR_9->long_name, VAR_12);
 }
 FUNC_2(VAR_10, -1);
 FUNC_2(VAR_10, VAR_11);
 FUNC_0('\n', VAR_8);
 return VAR_1;
}
