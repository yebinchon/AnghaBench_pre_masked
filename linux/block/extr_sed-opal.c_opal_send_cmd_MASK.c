
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int (* send_recv ) (int ,int ,int ,int ,int ,int) ;int cmd; int comid; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct opal_dev *VAR_2)
{
 return VAR_2->send_recv(VAR_2->data, VAR_2->comid, VAR_1,
         VAR_2->cmd, VAR_0,
         1);
}
