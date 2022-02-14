
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int ** VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int ** FUNC_0 (int **,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(uv_loop_t* VAR_6) {
  uv_loop_t** VAR_7;
  int VAR_8, VAR_9;

  FUNC_1(&VAR_4);

  if (VAR_5 == VAR_3) {
    VAR_8 = VAR_3 + VAR_1;
    VAR_7 = FUNC_0(VAR_2, sizeof(uv_loop_t*) * VAR_8);
    if (!VAR_7)
      goto failed_loops_realloc;
    VAR_2 = VAR_7;
    for (VAR_9 = VAR_3; VAR_9 < VAR_8; ++VAR_9)
      VAR_2[VAR_9] = ((void*)0);
    VAR_3 = VAR_8;
  }
  VAR_2[VAR_5] = VAR_6;
  ++VAR_5;

  FUNC_2(&VAR_4);
  return 0;

failed_loops_realloc:
  FUNC_2(&VAR_4);
  return VAR_0;
}
