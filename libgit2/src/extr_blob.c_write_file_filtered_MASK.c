
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_off_t ;
typedef int git_odb ;
typedef int git_filter_list ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int *,char const*) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(
 git_oid *VAR_2,
 git_off_t *VAR_3,
 git_odb *VAR_4,
 const char *VAR_5,
 git_filter_list *VAR_6)
{
 int VAR_7;
 git_buf VAR_8 = VAR_0;

 VAR_7 = FUNC_1(&VAR_8, VAR_6, ((void*)0), VAR_5);


 if (!VAR_7) {
  *VAR_3 = VAR_8.size;

  VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_8.ptr, VAR_8.size, VAR_1);
 }

 FUNC_0(&VAR_8);
 return VAR_7;
}
