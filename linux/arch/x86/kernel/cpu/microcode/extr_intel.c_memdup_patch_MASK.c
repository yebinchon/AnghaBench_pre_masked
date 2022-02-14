
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucode_patch {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucode_patch*) ;
 int FUNC_1 (void*,unsigned int,int ) ;
 struct ucode_patch* FUNC_2 (int,int ) ;

__attribute__((used)) static struct ucode_patch *FUNC_3(void *VAR_1, unsigned int VAR_2)
{
 struct ucode_patch *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct ucode_patch), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->data = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (!VAR_3->data) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
