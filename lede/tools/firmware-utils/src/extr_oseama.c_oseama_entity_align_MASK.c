
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(FILE *VAR_0, size_t VAR_1, size_t VAR_2) {
 if (VAR_1 & (VAR_2 - 1)) {
  size_t VAR_3 = VAR_2 - (VAR_1 % VAR_2);

  return FUNC_0(VAR_0, VAR_3);
 }

 return 0;
}
