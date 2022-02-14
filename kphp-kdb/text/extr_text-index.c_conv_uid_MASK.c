
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0 (int VAR_4) {
  int VAR_5 = VAR_4 % VAR_3;
  if (!VAR_4 || (VAR_5 != VAR_2 && VAR_5 != -VAR_2)) {
    return -1;
  }
  VAR_4 /= VAR_3;
  if (VAR_4 < 0 || VAR_5 < 0) {
    VAR_4--;
  }
  VAR_4 += VAR_1;
  return (unsigned) VAR_4 < VAR_0 ? VAR_4 : -1;
}
