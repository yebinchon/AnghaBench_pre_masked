
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_client {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct mbox_client *VAR_0,
       void *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_0->dev,
    "Client: Message could not be sent: %d\n", VAR_2);
 else
  FUNC_0(VAR_0->dev,
    "Client: Message sent\n");
}
