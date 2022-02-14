
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flush; int name; } ;


 int FUNC_0 (char*,int ,struct hci_dev*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hci_dev *VAR_1)
{
 FUNC_0("%s %p", VAR_1->name, VAR_1);


 VAR_1->flush = VAR_0;

 return 0;
}
