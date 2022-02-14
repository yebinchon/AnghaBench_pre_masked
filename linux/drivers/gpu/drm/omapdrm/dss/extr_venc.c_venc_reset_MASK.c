
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct venc_device*,int ) ;
 int FUNC_3 (struct venc_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct venc_device *VAR_1)
{
 int VAR_2 = 1000;

 FUNC_3(VAR_1, VAR_0, 1<<8);
 while (FUNC_2(VAR_1, VAR_0) & (1<<8)) {
  if (--VAR_2 == 0) {
   FUNC_0("Failed to reset venc\n");
   return;
  }
 }






}
