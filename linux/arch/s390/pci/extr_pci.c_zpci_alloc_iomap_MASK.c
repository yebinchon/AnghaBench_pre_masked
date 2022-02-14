
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct zpci_dev *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_3);
 VAR_5 = FUNC_0(VAR_2, VAR_1);
 if (VAR_5 == VAR_1) {
  FUNC_3(&VAR_3);
  return -VAR_0;
 }
 FUNC_1(VAR_5, VAR_2);
 FUNC_3(&VAR_3);
 return VAR_5;
}
