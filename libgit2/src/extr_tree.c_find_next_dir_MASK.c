
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 size_t FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static size_t FUNC_4(const char *VAR_0, git_index *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5 = FUNC_0(VAR_1);

 VAR_3 = FUNC_3(VAR_0);
 for (VAR_4 = VAR_2; VAR_4 < VAR_5; ++VAR_4) {
  const git_index_entry *VAR_6 = FUNC_1(VAR_1, VAR_4);
  if (FUNC_3(VAR_6->path) < VAR_3 ||
      FUNC_2(VAR_6->path, VAR_0, VAR_3) ||
   (VAR_3 > 0 && VAR_6->path[VAR_3] != '/')) {
   break;
  }
 }

 return VAR_4;
}
