
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgasr_priv {scalar_t__ debugfs_root; } ;


 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,scalar_t__,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vgasr_priv *VAR_1)
{

 if (VAR_1->debugfs_root)
  return;

 VAR_1->debugfs_root = FUNC_0("vgaswitcheroo", ((void*)0));

 FUNC_1("switch", 0644, VAR_1->debugfs_root, ((void*)0),
       &VAR_0);
}
