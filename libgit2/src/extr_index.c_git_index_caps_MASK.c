
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ no_symlinks; scalar_t__ distrust_filemode; scalar_t__ ignore_case; } ;
typedef TYPE_1__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(const git_index *VAR_3)
{
 return ((VAR_3->ignore_case ? VAR_0 : 0) |
   (VAR_3->distrust_filemode ? VAR_1 : 0) |
   (VAR_3->no_symlinks ? VAR_2 : 0));
}
