
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {scalar_t__ data_offset; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t
FUNC_1(struct md_rdev *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%llu\n", (unsigned long long)VAR_0->data_offset);
}
