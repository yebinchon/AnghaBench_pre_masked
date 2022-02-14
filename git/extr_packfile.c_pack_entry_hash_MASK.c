
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int dummy; } ;
typedef scalar_t__ off_t ;



__attribute__((used)) static unsigned int FUNC_0(struct packed_git *VAR_0, off_t VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = (unsigned int)(intptr_t)VAR_0 + (unsigned int)VAR_1;
 VAR_2 += (VAR_2 >> 8) + (VAR_2 >> 16);
 return VAR_2;
}
