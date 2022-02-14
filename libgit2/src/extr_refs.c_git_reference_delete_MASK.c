
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* symbolic; int oid; } ;
struct TYPE_5__ {scalar_t__ type; int name; int db; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int const*,char const*) ;

int FUNC_1(git_reference *VAR_1)
{
 const git_oid *VAR_2 = ((void*)0);
 const char *VAR_3 = ((void*)0);

 if (VAR_1->type == VAR_0)
  VAR_2 = &VAR_1->target.oid;
 else
  VAR_3 = VAR_1->target.symbolic;

 return FUNC_0(VAR_1->db, VAR_1->name, VAR_2, VAR_3);
}
