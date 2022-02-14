
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {scalar_t__* bios_dir; } ;
struct inode {int * i_private; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct tpm_chip *VAR_1)
{
 int VAR_2;
 struct inode *VAR_3;







 for (VAR_2 = (VAR_0 - 1); VAR_2 >= 0; VAR_2--) {
  if (VAR_1->bios_dir[VAR_2]) {
   VAR_3 = FUNC_0(VAR_1->bios_dir[VAR_2]);
   FUNC_1(VAR_3);
   VAR_3->i_private = ((void*)0);
   FUNC_2(VAR_3);
   FUNC_3(VAR_1->bios_dir[VAR_2]);
  }
 }
}
