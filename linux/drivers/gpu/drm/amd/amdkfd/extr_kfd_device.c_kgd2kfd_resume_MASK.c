
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int init_complete; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct kfd_dev*) ;
 int FUNC_3 () ;

int FUNC_4(struct kfd_dev *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1->init_complete)
  return 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_1(&VAR_0);
 FUNC_0(VAR_3 < 0, "KFD suspend / resume ref. error");
 if (VAR_3 == 0)
  VAR_2 = FUNC_3();

 return VAR_2;
}
