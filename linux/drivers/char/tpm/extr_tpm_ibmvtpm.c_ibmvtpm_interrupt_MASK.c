
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvtpm_dev {int dummy; } ;
struct ibmvtpm_crq {scalar_t__ valid; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct ibmvtpm_crq* FUNC_0 (struct ibmvtpm_dev*) ;
 int FUNC_1 (struct ibmvtpm_crq*,struct ibmvtpm_dev*) ;
 int FUNC_2 () ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct ibmvtpm_dev *VAR_3 = (struct ibmvtpm_dev *) VAR_2;
 struct ibmvtpm_crq *VAR_4;





 while ((VAR_4 = FUNC_0(VAR_3)) != ((void*)0)) {
  FUNC_1(VAR_4, VAR_3);
  VAR_4->valid = 0;
  FUNC_2();
 }

 return VAR_0;
}
