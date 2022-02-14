
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwimage_header {scalar_t__ version; } ;



__attribute__((used)) static int
FUNC_0(struct fwimage_header *VAR_0, int VAR_1)
{
  if (VAR_0->version != 0)
   return 1;
  return 0;
}
