
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {scalar_t__ len; int path; } ;
typedef TYPE_1__ _findfile_path ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(_findfile_path *VAR_0, const wchar_t *VAR_1)
{
 VAR_0->len = FUNC_1(VAR_1, VAR_0->path, FUNC_0(VAR_0->path));

 if (!VAR_0->len || VAR_0->len > FUNC_0(VAR_0->path))
  return -1;

 return 0;
}
