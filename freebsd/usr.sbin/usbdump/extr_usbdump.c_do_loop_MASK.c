
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usbcap {scalar_t__ buffer; int bufsize; int fd; } ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 char* FUNC_4 (int) ;
 int * VAR_3 ;
 int FUNC_5 (struct usbcap*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(struct usbcap *VAR_4)
{
 int VAR_5;

 while (VAR_0 == 0) {
  VAR_5 = FUNC_3(VAR_4->fd, (uint8_t *)VAR_4->buffer, VAR_4->bufsize);
  if (VAR_5 < 0) {
   switch (VAR_1) {
   case 128:
    break;
   default:
    FUNC_1(VAR_2, "read: %s\n", FUNC_4(VAR_1));
    return;
   }
   continue;
  }
  if (VAR_5 == 0)
   continue;

  FUNC_0(VAR_4->buffer, VAR_5);

  if (VAR_3 != ((void*)0))
   FUNC_5(VAR_4, VAR_4->buffer, VAR_5);
  FUNC_2(VAR_4->buffer, VAR_5);
 }
}
