
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;
struct TYPE_5__ {int content; } ;
typedef TYPE_1__ fake_object ;
struct TYPE_6__ {int read_calls; } ;
typedef TYPE_2__ fake_backend ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const**,TYPE_2__*,int const*,int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
 void **VAR_2, size_t *VAR_3, git_object_t *VAR_4,
 git_odb_backend *VAR_5, const git_oid *VAR_6)
{
 const fake_object *VAR_7;
 fake_backend *VAR_8;
 int VAR_9;

 VAR_8 = (fake_backend *)VAR_5;

 VAR_8->read_calls++;

 if ((VAR_9 = FUNC_1(&VAR_7, VAR_8, VAR_6, VAR_1)) < 0)
  return VAR_9;

 *VAR_3 = FUNC_2(VAR_7->content);
 *VAR_2 = FUNC_0(VAR_7->content);
 *VAR_4 = VAR_0;

 return 0;
}
