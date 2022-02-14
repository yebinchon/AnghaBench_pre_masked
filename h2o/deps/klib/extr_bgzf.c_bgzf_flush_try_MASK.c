
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ block_offset; } ;
typedef TYPE_1__ BGZF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(BGZF *VAR_1, ssize_t VAR_2)
{
 if (VAR_1->block_offset + VAR_2 > VAR_0)
  return FUNC_0(VAR_1);
 return -1;
}
