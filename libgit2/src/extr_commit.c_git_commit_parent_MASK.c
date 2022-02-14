
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_8__ {int repo; } ;
struct TYPE_9__ {TYPE_1__ object; } ;
typedef TYPE_2__ git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__**,int ,int const*) ;
 int * FUNC_2 (TYPE_2__ const*,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int) ;

int FUNC_4(
 git_commit **VAR_2, const git_commit *VAR_3, unsigned int VAR_4)
{
 const git_oid *VAR_5;
 FUNC_0(VAR_3);

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_1, "parent %u does not exist", VAR_4);
  return VAR_0;
 }

 return FUNC_1(VAR_2, VAR_3->object.repo, VAR_5);
}
