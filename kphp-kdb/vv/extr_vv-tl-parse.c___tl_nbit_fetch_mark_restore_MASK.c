
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nb_iterator_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2 (void) {
  FUNC_0 (VAR_0);
  *VAR_2 = *(nb_iterator_t *)VAR_0;
  FUNC_1 (VAR_0, sizeof (nb_iterator_t));
  VAR_0 = 0;
  int VAR_5 = VAR_3 - VAR_1;
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
}
