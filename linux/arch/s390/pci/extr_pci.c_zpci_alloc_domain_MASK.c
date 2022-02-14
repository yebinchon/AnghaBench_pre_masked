
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct zpci_dev {scalar_t__ domain; scalar_t__ uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_5(struct zpci_dev *VAR_6)
{
 if (VAR_5) {
  VAR_6->domain = (u16) VAR_6->uid;
  if (VAR_6->domain >= VAR_2)
   return 0;

  FUNC_2(&VAR_4);
  if (FUNC_4(VAR_6->domain, VAR_3)) {
   FUNC_3(&VAR_4);
   return -VAR_0;
  }
  FUNC_1(VAR_6->domain, VAR_3);
  FUNC_3(&VAR_4);
  return 0;
 }

 FUNC_2(&VAR_4);
 VAR_6->domain = FUNC_0(VAR_3, VAR_2);
 if (VAR_6->domain == VAR_2) {
  FUNC_3(&VAR_4);
  return -VAR_1;
 }
 FUNC_1(VAR_6->domain, VAR_3);
 FUNC_3(&VAR_4);
 return 0;
}
