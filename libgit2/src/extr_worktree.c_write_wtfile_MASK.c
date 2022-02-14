
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__ const*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, const char *VAR_5, const git_buf *VAR_6)
{
 git_buf VAR_7 = VAR_0;
 int VAR_8;

 FUNC_0(VAR_4 && VAR_5 && VAR_6);

 if ((VAR_8 = FUNC_2(&VAR_7, VAR_4, VAR_5)) < 0)
  goto out;

 if ((VAR_8 = FUNC_3(VAR_6, VAR_7.ptr, VAR_1|VAR_2|VAR_3, 0644)) < 0)
  goto out;

out:
 FUNC_1(&VAR_7);

 return VAR_8;
}
