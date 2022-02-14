
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_cond_t ;
typedef int pthread_condattr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(uv_cond_t* VAR_1) {
  pthread_condattr_t VAR_2;
  int VAR_3;

  VAR_3 = FUNC_4(&VAR_2);
  if (VAR_3)
    return FUNC_0(VAR_3);


  VAR_3 = FUNC_5(&VAR_2, VAR_0);
  if (VAR_3)
    goto error2;


  VAR_3 = FUNC_2(VAR_1, &VAR_2);
  if (VAR_3)
    goto error2;

  VAR_3 = FUNC_3(&VAR_2);
  if (VAR_3)
    goto error;

  return 0;

error:
  FUNC_1(VAR_1);
error2:
  FUNC_3(&VAR_2);
  return FUNC_0(VAR_3);
}
