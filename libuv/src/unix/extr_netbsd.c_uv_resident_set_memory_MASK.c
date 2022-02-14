
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc2 {int p_vm_rssize; } ;
typedef int pid_t ;
typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 struct kinfo_proc2* FUNC_3 (int *,int ,int ,int,int*) ;
 int * FUNC_4 (int *,int *,int *,int ,char*) ;

int FUNC_5(size_t* VAR_3) {
  kvm_t *VAR_4 = ((void*)0);
  struct kinfo_proc2 *VAR_5 = ((void*)0);
  pid_t VAR_6;
  int VAR_7;
  int VAR_8 = sizeof(struct kinfo_proc2);
  int VAR_9;

  VAR_9 = FUNC_0();
  VAR_6 = FUNC_1();

  VAR_4 = FUNC_4(((void*)0), ((void*)0), ((void*)0), VAR_1, "kvm_open");

  if (VAR_4 == ((void*)0)) goto error;

  VAR_5 = FUNC_3(VAR_4, VAR_0, VAR_6, VAR_8, &VAR_7);
  if (VAR_5 == ((void*)0)) goto error;

  *VAR_3 = VAR_5->p_vm_rssize * VAR_9;

  FUNC_2(VAR_4);

  return 0;

error:
  if (VAR_4) FUNC_2(VAR_4);
  return VAR_2;
}
