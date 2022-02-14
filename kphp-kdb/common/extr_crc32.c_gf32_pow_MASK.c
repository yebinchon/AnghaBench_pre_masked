
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1 (unsigned VAR_0, int VAR_1) {
  if (!VAR_1) { return 1; }
  unsigned VAR_2 = FUNC_1 (FUNC_0 (VAR_0, VAR_0), VAR_1 >> 1);
  if (VAR_1 & 1) {
    VAR_2 = FUNC_0 (VAR_2, VAR_0);
  }
  return VAR_2;
}
