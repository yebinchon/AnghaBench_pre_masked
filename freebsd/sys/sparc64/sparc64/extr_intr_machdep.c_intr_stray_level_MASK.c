
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct trapframe {size_t tf_level; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(struct trapframe *VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = VAR_2->tf_level;
 if (VAR_1[VAR_3] < VAR_0) {
  FUNC_0("stray level interrupt %ld\n", VAR_3);
  VAR_1[VAR_3]++;
  if (VAR_1[VAR_3] >= VAR_0)
   FUNC_0("got %d stray level interrupt %ld's: not "
       "logging anymore\n", VAR_0, VAR_3);
 }
}
