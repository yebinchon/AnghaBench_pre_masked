
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* read ) (int *,int *,int *,TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ git_reader ;
typedef int git_oid ;
typedef int git_filemode_t ;
typedef int git_buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_1__*,char const*) ;

int FUNC_2(
 git_buf *VAR_0,
 git_oid *VAR_1,
 git_filemode_t *VAR_2,
 git_reader *VAR_3,
 const char *VAR_4)
{
 FUNC_0(VAR_0 && VAR_3 && VAR_4);

 return VAR_3->read(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
