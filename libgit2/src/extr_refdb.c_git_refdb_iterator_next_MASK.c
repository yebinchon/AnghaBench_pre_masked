
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* next ) (TYPE_2__**,TYPE_1__*) ;int db; } ;
typedef TYPE_1__ git_reference_iterator ;
struct TYPE_8__ {int db; } ;
typedef TYPE_2__ git_reference ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**,TYPE_1__*) ;

int FUNC_2(git_reference **VAR_0, git_reference_iterator *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = VAR_1->next(VAR_0, VAR_1)) < 0)
  return VAR_2;

 FUNC_0(VAR_1->db);
 (*VAR_0)->db = VAR_1->db;

 return 0;
}
