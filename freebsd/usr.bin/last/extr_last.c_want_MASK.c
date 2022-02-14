
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct utmpx {int ut_user; int ut_line; int ut_host; int ut_type; } ;
struct TYPE_3__ {int type; int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ ARG ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct utmpx *VAR_6)
{
 ARG *VAR_7;

 if (VAR_5)
  return (VAR_1);

 if (!VAR_4)
  return (VAR_3);

 for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_7->next)
  switch(VAR_7->type) {
  case 130:
   if (VAR_6->ut_type == VAR_0 ||
       VAR_6->ut_type == VAR_2)
    return (VAR_3);
   break;
  case 131:
   if (!FUNC_0(VAR_7->name, VAR_6->ut_host))
    return (VAR_3);
   break;
  case 129:
   if (!FUNC_1(VAR_7->name, VAR_6->ut_line))
    return (VAR_3);
   break;
  case 128:
   if (!FUNC_1(VAR_7->name, VAR_6->ut_user))
    return (VAR_3);
   break;
  }
 return (VAR_1);
}
