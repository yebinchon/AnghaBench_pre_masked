
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usbcap {int rfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ,int*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct usbcap *VAR_3)
{
 int VAR_4;
 int VAR_5;
 uint8_t *VAR_6;

 while ((VAR_5 = FUNC_7(VAR_3->rfd, &VAR_4, sizeof(int))) == sizeof(int)) {
  VAR_4 = FUNC_4(VAR_4);
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6 == ((void*)0))
   FUNC_1(VAR_1, "Out of memory.");
  VAR_5 = FUNC_7(VAR_3->rfd, VAR_6, VAR_4);
  if (VAR_5 != VAR_4) {
   FUNC_0(VAR_0, "Could not read complete "
       "USB data payload");
  }
  if (VAR_2 == 2)
   FUNC_2(VAR_6, VAR_4);

  FUNC_6(VAR_6, VAR_4);
  FUNC_3(VAR_6);
 }
}
