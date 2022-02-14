
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ prefix_len; } ;
typedef TYPE_1__ git_patch_options ;
typedef int git_patch ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*,size_t,TYPE_1__*) ;

int FUNC_2(const uint8_t *VAR_1, size_t VAR_2)
{
 if (VAR_2) {
  git_patch *VAR_3 = ((void*)0);
  git_patch_options VAR_4 = VAR_0;
  VAR_4.prefix_len = (uint32_t)VAR_1[0];
  FUNC_1(&VAR_3, (const char *)VAR_1 + 1, VAR_2 - 1,
                        &VAR_4);
  FUNC_0(VAR_3);
 }
 return 0;
}
