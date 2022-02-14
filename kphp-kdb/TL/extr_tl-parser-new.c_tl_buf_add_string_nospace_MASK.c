
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (char*) ;

void FUNC_2 (char *VAR_2, int VAR_3) {
  if (VAR_3 < 0) { VAR_3 = FUNC_1 (VAR_2); }

  FUNC_0 (VAR_0 + VAR_1, VAR_2, VAR_3); VAR_1 += VAR_3;
  VAR_0[VAR_1] = 0;
}
