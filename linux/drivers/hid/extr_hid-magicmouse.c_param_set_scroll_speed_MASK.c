
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_1(const char *VAR_2,
      const struct kernel_param *VAR_3) {
 unsigned long VAR_4;
 if (!VAR_2 || FUNC_0(VAR_2, 0, &VAR_4) || VAR_4 > 63)
  return -VAR_0;
 VAR_1 = VAR_4;
 return 0;
}
