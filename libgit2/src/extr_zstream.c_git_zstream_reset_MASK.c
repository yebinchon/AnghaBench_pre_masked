
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int zerr; scalar_t__ in_len; int * in; int z; } ;
typedef TYPE_1__ git_zstream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(git_zstream *VAR_2)
{
 if (VAR_2->type == VAR_0)
  FUNC_1(&VAR_2->z);
 else
  FUNC_0(&VAR_2->z);
 VAR_2->in = ((void*)0);
 VAR_2->in_len = 0;
 VAR_2->zerr = VAR_1;
}
