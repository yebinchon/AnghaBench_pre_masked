
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {scalar_t__ date; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct commit *VAR_2 = *(struct commit **)VAR_0;
 struct commit *VAR_3 = *(struct commit **)VAR_1;
 return (long)VAR_3->date - (long)VAR_2->date;
}
