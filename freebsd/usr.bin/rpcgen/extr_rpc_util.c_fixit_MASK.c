
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rel; char* old_type; } ;
struct TYPE_5__ {TYPE_1__ ty; } ;
struct TYPE_6__ {scalar_t__ def_kind; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_3, const char *VAR_4)
{
 definition *VAR_5;

 VAR_5 = (definition *) FUNC_0(VAR_1, VAR_3, VAR_2);
 if (VAR_5 == ((void*)0) || VAR_5->def_kind != VAR_0) {
  return (VAR_4);
 }
 switch (VAR_5->def.ty.rel) {
 case 128:
  if (FUNC_1(VAR_5->def.ty.old_type, "opaque"))
   return ("char");
  else
   return (VAR_5->def.ty.old_type);

 case 129:
  return (FUNC_2(VAR_5->def.ty.old_type, VAR_4));
 default:
  return (VAR_4);
 }
}
