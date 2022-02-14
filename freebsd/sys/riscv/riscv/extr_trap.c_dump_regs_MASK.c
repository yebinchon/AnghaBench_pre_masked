
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_sstatus; int tf_sepc; int * tf_a; int * tf_s; int * tf_t; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(struct trapframe *VAR_0)
{
 int VAR_1;
 int VAR_2;

 VAR_1 = (sizeof(VAR_0->tf_t) / sizeof(VAR_0->tf_t[0]));
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0("t[%d] == 0x%016lx\n", VAR_2, VAR_0->tf_t[VAR_2]);

 VAR_1 = (sizeof(VAR_0->tf_s) / sizeof(VAR_0->tf_s[0]));
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0("s[%d] == 0x%016lx\n", VAR_2, VAR_0->tf_s[VAR_2]);

 VAR_1 = (sizeof(VAR_0->tf_a) / sizeof(VAR_0->tf_a[0]));
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0("a[%d] == 0x%016lx\n", VAR_2, VAR_0->tf_a[VAR_2]);

 FUNC_0("sepc == 0x%016lx\n", VAR_0->tf_sepc);
 FUNC_0("sstatus == 0x%016lx\n", VAR_0->tf_sstatus);
}
