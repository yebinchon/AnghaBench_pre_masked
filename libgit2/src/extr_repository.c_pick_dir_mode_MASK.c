
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_3__ {scalar_t__ mode; } ;
typedef TYPE_1__ git_repository_init_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static mode_t FUNC_0(git_repository_init_options *VAR_4)
{
 if (VAR_4->mode == VAR_2)
  return 0777;
 if (VAR_4->mode == VAR_1)
  return (0775 | VAR_3);
 if (VAR_4->mode == VAR_0)
  return (0777 | VAR_3);
 return VAR_4->mode;
}
