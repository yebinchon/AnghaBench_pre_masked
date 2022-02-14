
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in_len; } ;
typedef TYPE_1__ git_zstream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_0(git_zstream *VAR_2)
{
 if (VAR_2->in_len > VAR_1)
  return VAR_1;
 else if (VAR_2->in_len > VAR_0)
  return VAR_2->in_len;
 else
  return VAR_0;
}
