
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;
struct TYPE_5__ {int content; int oid; } ;
typedef TYPE_1__ fake_object ;
struct TYPE_6__ {int read_prefix_calls; } ;
typedef TYPE_2__ fake_backend ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__ const**,TYPE_2__*,int const*,size_t) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
 git_oid *VAR_1, void **VAR_2, size_t *VAR_3, git_object_t *VAR_4,
 git_odb_backend *VAR_5, const git_oid *VAR_6, size_t VAR_7)
{
 const fake_object *VAR_8;
 fake_backend *VAR_9;
 int VAR_10;

 VAR_9 = (fake_backend *)VAR_5;

 VAR_9->read_prefix_calls++;

 if ((VAR_10 = FUNC_2(&VAR_8, VAR_9, VAR_6, VAR_7)) < 0)
  return VAR_10;

 FUNC_1(VAR_1, VAR_8->oid);
 *VAR_3 = FUNC_3(VAR_8->content);
 *VAR_2 = FUNC_0(VAR_8->content);
 *VAR_4 = VAR_0;

 return 0;
}
