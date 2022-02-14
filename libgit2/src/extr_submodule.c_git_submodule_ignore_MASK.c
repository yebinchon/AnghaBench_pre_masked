
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ git_submodule_ignore_t ;
struct TYPE_4__ {scalar_t__ ignore; } ;
typedef TYPE_1__ git_submodule ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

git_submodule_ignore_t FUNC_1(git_submodule *VAR_1)
{
 FUNC_0(VAR_1);
 return (VAR_1->ignore < VAR_0) ?
  VAR_0 : VAR_1->ignore;
}
