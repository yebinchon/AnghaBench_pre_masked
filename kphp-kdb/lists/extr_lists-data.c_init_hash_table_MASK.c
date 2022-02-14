
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 double VAR_3 ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3 (int VAR_4) {
  VAR_4 = (int)VAR_4 * 1.5;
  VAR_2 = FUNC_0 ((VAR_4 <= VAR_0 ? VAR_0 : VAR_4));
  VAR_1 = FUNC_1 (VAR_2 * sizeof (void *));
  FUNC_2 (VAR_1, 0, VAR_2 * sizeof (void *));
  VAR_3 = 0.7 * VAR_2;
}
