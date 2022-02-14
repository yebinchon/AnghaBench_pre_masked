
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ suspend_hi; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%llu\n", (unsigned long long)VAR_0->suspend_hi);
}
