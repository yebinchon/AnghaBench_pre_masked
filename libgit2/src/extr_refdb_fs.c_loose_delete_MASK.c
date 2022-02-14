
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int commonpath; } ;
typedef TYPE_1__ refdb_fs_backend ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(refdb_fs_backend *VAR_4, const char *VAR_5)
{
 git_buf VAR_6 = VAR_1;
 int VAR_7 = 0;

 if (FUNC_1(&VAR_6, VAR_4->commonpath, VAR_5) < 0)
  return -1;

 VAR_7 = FUNC_2(VAR_6.ptr);
 if (VAR_7 < 0 && VAR_3 == VAR_0)
  VAR_7 = VAR_2;
 else if (VAR_7 != 0)
  VAR_7 = -1;

 FUNC_0(&VAR_6);

 return VAR_7;
}
