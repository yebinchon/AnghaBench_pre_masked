
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long offset; } ;
struct TYPE_4__ {unsigned long size; } ;
struct TYPE_6__ {unsigned long total; TYPE_2__ r1; TYPE_1__ rm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 TYPE_3__ VAR_0 ;

unsigned long FUNC_2(unsigned long VAR_1)
{
 FUNC_0(FUNC_1(VAR_1));
 return (VAR_1 < VAR_0.rm.size || VAR_1 >= VAR_0.total)
  ? VAR_1 : VAR_1 + VAR_0.r1.offset;
}
