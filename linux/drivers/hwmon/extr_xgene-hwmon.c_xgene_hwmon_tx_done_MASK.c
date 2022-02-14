
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mbox_client {int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mbox_client *VAR_0, void *VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "TX did not complete: CMD sent:%x, ret:%d\n",
   *(u16 *)VAR_1, VAR_2);
 } else {
  FUNC_0(VAR_0->dev, "TX completed. CMD sent:%x, ret:%d\n",
   *(u16 *)VAR_1, VAR_2);
 }
}
