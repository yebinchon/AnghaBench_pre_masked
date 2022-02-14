
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_rdev; } ;
typedef scalar_t__ dev_t ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, void *VAR_1)
{
 dev_t VAR_2 = *(dev_t *) VAR_1;

 return VAR_0->i_rdev == VAR_2;
}
