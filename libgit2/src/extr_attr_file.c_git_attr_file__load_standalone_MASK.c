
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_11__ {int pool; int entry; } ;
typedef TYPE_2__ git_attr_file ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *,char const*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**,int *,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;

int FUNC_6(git_attr_file **VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_1;
 git_attr_file *VAR_5 = ((void*)0);
 int VAR_6;

 if ((VAR_6 = FUNC_5(&VAR_4, VAR_3)) < 0)
  goto out;






 if ((VAR_6 = FUNC_2(&VAR_5, ((void*)0), VAR_0)) < 0 ||
     (VAR_6 = FUNC_3(((void*)0), VAR_5, VAR_4.ptr, 1)) < 0 ||
     (VAR_6 = FUNC_0(&VAR_5->entry, ((void*)0), VAR_3, &VAR_5->pool)) < 0)
  goto out;

 *VAR_2 = VAR_5;
out:
 if (VAR_6 < 0)
  FUNC_1(VAR_5);
 FUNC_4(&VAR_4);

 return VAR_6;
}
