
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int flags; char* argh; scalar_t__ long_name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char const*,int ) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_2, FILE *VAR_3)
{
 const char *VAR_4;
 int VAR_5 = (VAR_2->flags & VAR_0) ||
  !VAR_2->argh || !!FUNC_1(VAR_2->argh, "()<>[]|");
 if (VAR_2->flags & VAR_1)
  if (VAR_2->long_name)
   VAR_4 = VAR_5 ? "[=%s]" : "[=<%s>]";
  else
   VAR_4 = VAR_5 ? "[%s]" : "[<%s>]";
 else
  VAR_4 = VAR_5 ? " %s" : " <%s>";
 return FUNC_2(VAR_3, VAR_4, VAR_2->argh ? FUNC_0(VAR_2->argh) : FUNC_0("..."));
}
