
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int,int *,int *,int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 struct dentry *VAR_2;

 if (!FUNC_2()) {
  FUNC_1();
  VAR_2 = FUNC_0("kernel_hash_pagetable",
    0400, ((void*)0), ((void*)0), &VAR_1);
  return VAR_2 ? 0 : -VAR_0;
 }
 return 0;
}
