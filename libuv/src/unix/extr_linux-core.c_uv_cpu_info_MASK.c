
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ speed; } ;
typedef TYPE_1__ uv_cpu_info_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,TYPE_1__*) ;
 int FUNC_4 (unsigned int,TYPE_1__*) ;
 int FUNC_5 (int *,unsigned int,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (unsigned int,int) ;
 int FUNC_7 (int *,unsigned int*) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*,unsigned int) ;

int FUNC_10(uv_cpu_info_t** VAR_4, int* VAR_5) {
  unsigned int VAR_6;
  uv_cpu_info_t* VAR_7;
  int VAR_8;
  FILE* VAR_9;

  *VAR_4 = ((void*)0);
  *VAR_5 = 0;

  VAR_9 = FUNC_8("/proc/stat");
  if (VAR_9 == ((void*)0))
    return FUNC_0(VAR_3);

  VAR_8 = FUNC_7(VAR_9, &VAR_6);
  if (VAR_8 < 0)
    goto out;

  VAR_8 = VAR_2;
  VAR_7 = FUNC_6(VAR_6, sizeof(*VAR_7));
  if (VAR_7 == ((void*)0))
    goto out;

  VAR_8 = FUNC_3(VAR_6, VAR_7);
  if (VAR_8 == 0)
    VAR_8 = FUNC_5(VAR_9, VAR_6, VAR_7);

  if (VAR_8) {
    FUNC_9(VAR_7, VAR_6);
    goto out;
  }




  if (VAR_7[0].speed == 0)
    FUNC_4(VAR_6, VAR_7);

  *VAR_4 = VAR_7;
  *VAR_5 = VAR_6;
  VAR_8 = 0;

out:

  if (FUNC_2(VAR_9))
    if (VAR_3 != VAR_1 && VAR_3 != VAR_0)
      FUNC_1();

  return VAR_8;
}
