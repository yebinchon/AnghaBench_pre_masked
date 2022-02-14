
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_8__ {TYPE_2__* db; } ;
typedef TYPE_1__ git_reference ;
struct TYPE_9__ {TYPE_4__* backend; } ;
typedef TYPE_2__ git_refdb ;
struct TYPE_10__ {int (* rename ) (TYPE_1__**,TYPE_4__*,char const*,char const*,int,int const*,char const*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**,TYPE_4__*,char const*,char const*,int,int const*,char const*) ;

int FUNC_3(
 git_reference **VAR_0,
 git_refdb *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 int VAR_4,
 const git_signature *VAR_5,
 const char *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_1 && VAR_1->backend);
 VAR_7 = VAR_1->backend->rename(VAR_0, VAR_1->backend, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_0) {
  FUNC_0(VAR_1);
  (*VAR_0)->db = VAR_1;
 }

 return 0;
}
