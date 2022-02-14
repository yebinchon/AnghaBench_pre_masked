
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {size_t kp_vm_rssize; size_t ki_rssize; } ;
typedef int kinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 size_t FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int*,int,struct kinfo_proc*,size_t*,int *,int ) ;

int FUNC_4(size_t* VAR_4) {
  struct kinfo_proc VAR_5;
  size_t VAR_6;
  size_t VAR_7;
  int VAR_8[4];

  VAR_8[0] = VAR_0;
  VAR_8[1] = VAR_1;
  VAR_8[2] = VAR_2;
  VAR_8[3] = FUNC_2();

  VAR_7 = sizeof(VAR_5);

  if (FUNC_3(VAR_8, 4, &VAR_5, &VAR_7, ((void*)0), 0))
    return FUNC_0(VAR_3);

  VAR_6 = FUNC_1();




  *VAR_4 = VAR_5.ki_rssize * VAR_6;


  return 0;
}
