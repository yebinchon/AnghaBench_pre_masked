
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_8__ {TYPE_2__* db; } ;
typedef TYPE_1__ git_reference ;
struct TYPE_9__ {TYPE_3__* backend; } ;
typedef TYPE_2__ git_refdb ;
typedef int git_oid ;
struct TYPE_10__ {int (* write ) (TYPE_3__*,TYPE_1__*,int,int const*,char const*,int const*,char const*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int,int const*,char const*,int const*,char const*) ;

int FUNC_3(git_refdb *VAR_0, git_reference *VAR_1, int VAR_2, const git_signature *VAR_3, const char *VAR_4, const git_oid *VAR_5, const char *VAR_6)
{
 FUNC_1(VAR_0 && VAR_0->backend);

 FUNC_0(VAR_0);
 VAR_1->db = VAR_0;

 return VAR_0->backend->write(VAR_0->backend, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
