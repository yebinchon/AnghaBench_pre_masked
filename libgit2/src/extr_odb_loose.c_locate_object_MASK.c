
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int loose_backend ;
typedef int git_oid ;
struct TYPE_4__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int const*) ;

__attribute__((used)) static int FUNC_2(
 git_buf *VAR_1,
 loose_backend *VAR_2,
 const git_oid *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (!VAR_4 && !FUNC_0(VAR_1->ptr))
  return VAR_0;

 return VAR_4;
}
