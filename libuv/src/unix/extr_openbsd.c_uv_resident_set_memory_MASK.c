
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {size_t p_vm_rssize; } ;


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
  size_t VAR_6 = FUNC_1();
  size_t VAR_7 = sizeof(struct kinfo_proc);
  int VAR_8[6];

  VAR_8[0] = VAR_0;
  VAR_8[1] = VAR_1;
  VAR_8[2] = VAR_2;
  VAR_8[3] = FUNC_2();
  VAR_8[4] = sizeof(struct kinfo_proc);
  VAR_8[5] = 1;

  if (FUNC_3(VAR_8, 6, &VAR_5, &VAR_7, ((void*)0), 0) < 0)
    return FUNC_0(VAR_3);

  *VAR_4 = VAR_5.p_vm_rssize * VAR_6;
  return 0;
}
