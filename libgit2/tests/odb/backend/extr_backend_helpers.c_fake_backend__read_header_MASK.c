
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
struct TYPE_6__ {int read_header_calls; } ;
typedef TYPE_2__ fake_backend ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const**,TYPE_2__*,int const*,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(
 size_t *VAR_2, git_object_t *VAR_3,
 git_odb_backend *VAR_4, const git_oid *VAR_5)
{
 const fake_object *VAR_6;
 fake_backend *VAR_7;
 int VAR_8;

 VAR_7 = (fake_backend *)VAR_4;

 VAR_7->read_header_calls++;

 if ((VAR_8 = FUNC_0(&VAR_6, VAR_7, VAR_5, VAR_1)) < 0)
  return VAR_8;

 *VAR_2 = FUNC_1(VAR_6->content);
 *VAR_3 = VAR_0;

 return 0;
}
