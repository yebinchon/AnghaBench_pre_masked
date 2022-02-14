
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int ptr; } ;
typedef TYPE_1__ git_merge_file_input ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (int ,int ,size_t) ;

__attribute__((used)) static bool FUNC_1(const git_merge_file_input *VAR_2)
{
 size_t VAR_3 = VAR_2 ? VAR_2->size : 0;

 if (VAR_3 > VAR_1)
  return 1;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 return VAR_3 ? (FUNC_0(VAR_2->ptr, 0, VAR_3) != ((void*)0)) : 0;
}
