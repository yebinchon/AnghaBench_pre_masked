
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct lock_file*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, void *VAR_2)
{
 struct lock_file *VAR_3 = VAR_2;

 return FUNC_1(
   VAR_3, VAR_1, VAR_0,
   FUNC_0()) < 0 ? -1 : 0;
}
