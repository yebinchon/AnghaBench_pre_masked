
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int malloc_mutex_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int *,int,int ) ;
 int VAR_2 ;
 int * VAR_3 ;

malloc_mutex_t *
FUNC_1(void) {
 unsigned VAR_4 = FUNC_0(&VAR_2, 1, VAR_0);

 return &VAR_3[(VAR_4 - 1) % VAR_1];
}
