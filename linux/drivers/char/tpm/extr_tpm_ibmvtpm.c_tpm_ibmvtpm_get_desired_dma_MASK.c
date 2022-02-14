
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dev; } ;
struct tpm_chip {int dev; } ;
struct ibmvtpm_dev {unsigned long rtce_size; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (int *) ;

__attribute__((used)) static unsigned long FUNC_1(struct vio_dev *VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_0(&VAR_2->dev);
 struct ibmvtpm_dev *VAR_4;






 if (VAR_3)
  VAR_4 = FUNC_0(&VAR_3->dev);
 else
  return VAR_0 + VAR_1;

 return VAR_0 + VAR_4->rtce_size;
}
