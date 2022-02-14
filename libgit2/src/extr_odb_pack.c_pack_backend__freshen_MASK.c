
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct pack_backend {int dummy; } ;
struct git_pack_entry {TYPE_1__* p; } ;
typedef int git_oid ;
typedef int git_odb_backend ;
struct TYPE_2__ {scalar_t__ last_freshen; int pack_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (struct git_pack_entry*,struct pack_backend*,int const*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 git_odb_backend *VAR_1, const git_oid *VAR_2)
{
 struct git_pack_entry VAR_3;
 time_t VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_3, (struct pack_backend *)VAR_1, VAR_2)) < 0)
  return VAR_5;

 VAR_4 = FUNC_2(((void*)0));

 if (VAR_3.p->last_freshen > VAR_4 - VAR_0)
  return 0;

 if ((VAR_5 = FUNC_0(VAR_3.p->pack_name, &VAR_4)) < 0)
  return VAR_5;

 VAR_3.p->last_freshen = VAR_4;
 return 0;
}
