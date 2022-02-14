
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_8__ {TYPE_1__* db; } ;
typedef TYPE_2__ git_reference ;
struct TYPE_7__ {int repo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__**,TYPE_2__*,char const*,int,int *,char const*) ;

int FUNC_4(
 git_reference **VAR_0,
 git_reference *VAR_1,
 const char *VAR_2,
 int VAR_3,
 const char *VAR_4)
{
 git_signature *VAR_5;
 int VAR_6;

 FUNC_0(VAR_0 && VAR_1);

 if ((VAR_6 = FUNC_1(&VAR_5, VAR_1->db->repo)) < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);
 FUNC_2(VAR_5);

 return VAR_6;
}
