
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {unsigned long long recovery_offset; int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct md_rdev *VAR_2, char *VAR_3)
{
 unsigned long long VAR_4 = VAR_2->recovery_offset;

 if (FUNC_1(VAR_0, &VAR_2->flags) ||
     VAR_4 == VAR_1)
  return FUNC_0(VAR_3, "none\n");

 return FUNC_0(VAR_3, "%llu\n", VAR_4);
}
