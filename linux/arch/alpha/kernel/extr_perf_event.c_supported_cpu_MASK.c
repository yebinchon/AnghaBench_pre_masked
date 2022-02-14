
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct percpu_struct {int type; } ;
struct TYPE_2__ {int processor_offset; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(void)
{
 struct percpu_struct *VAR_3;
 unsigned long VAR_4;


 VAR_3 = (struct percpu_struct *)((char *)VAR_2 + VAR_2->processor_offset);
 VAR_4 = VAR_3->type & 0xffffffff;

 return (VAR_4 >= VAR_0) && (VAR_4 <= VAR_1);
}
