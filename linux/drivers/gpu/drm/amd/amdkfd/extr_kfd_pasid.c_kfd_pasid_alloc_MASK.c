
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {scalar_t__ kfd2kgd; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int,struct kfd_dev**) ;
 int VAR_1 ;

unsigned int FUNC_2(void)
{
 int VAR_2;


 if (!VAR_0) {
  struct kfd_dev *VAR_3 = ((void*)0);
  unsigned int VAR_4 = 0;

  while ((FUNC_1(VAR_4, &VAR_3)) == 0) {
   if (VAR_3 && VAR_3->kfd2kgd) {
    VAR_0 = VAR_3->kfd2kgd;
    break;
   }
   VAR_4++;
  }

  if (!VAR_0)
   return 0;
 }

 VAR_2 = FUNC_0(VAR_1);

 return VAR_2 > 0 ? VAR_2 : 0;
}
