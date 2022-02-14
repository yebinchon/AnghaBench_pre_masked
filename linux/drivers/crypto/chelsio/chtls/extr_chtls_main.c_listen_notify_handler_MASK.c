
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct chtls_listen {int sk; int cdev; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct chtls_listen*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_1,
     unsigned long VAR_2, void *VAR_3)
{
 struct chtls_listen *VAR_4;
 int VAR_5 = VAR_0;

 VAR_4 = (struct chtls_listen *)VAR_3;

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_0(VAR_4->cdev, VAR_4->sk);
  FUNC_2(VAR_4);
  break;
 case 128:
  FUNC_1(VAR_4->cdev, VAR_4->sk);
  FUNC_2(VAR_4);
  break;
 }
 return VAR_5;
}
