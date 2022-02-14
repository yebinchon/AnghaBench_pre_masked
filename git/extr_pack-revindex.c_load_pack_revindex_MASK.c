
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int revindex; } ;


 int FUNC_0 (struct packed_git*) ;
 scalar_t__ FUNC_1 (struct packed_git*) ;

int FUNC_2(struct packed_git *VAR_0)
{
 if (!VAR_0->revindex) {
  if (FUNC_1(VAR_0))
   return -1;
  FUNC_0(VAR_0);
 }
 return 0;
}
