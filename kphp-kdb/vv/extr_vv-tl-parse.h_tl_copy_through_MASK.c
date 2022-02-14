
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3 (int VAR_4, int VAR_5) {
  if (!&FUNC_0 || FUNC_1 (VAR_4) < 0 || FUNC_2 (VAR_4) < 0) {
    return -1;
  }
  FUNC_0 (VAR_4, VAR_5);
  if (VAR_5) {
    VAR_0 += VAR_4;
    VAR_1 -= VAR_4;
  }
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  return VAR_4;
}
