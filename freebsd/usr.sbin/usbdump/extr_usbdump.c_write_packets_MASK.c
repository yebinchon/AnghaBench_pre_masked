
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usbcap {int wfd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ,int const*,int const) ;

__attribute__((used)) static void
FUNC_3(struct usbcap *VAR_1, const uint8_t *VAR_2, const int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1->wfd, &VAR_4, sizeof(int));
 if (VAR_5 != sizeof(int)) {
  FUNC_0(VAR_0, "Could not write length "
      "field of USB data payload");
 }
 VAR_5 = FUNC_2(VAR_1->wfd, VAR_2, VAR_3);
 if (VAR_5 != VAR_3) {
  FUNC_0(VAR_0, "Could not write "
      "complete USB data payload");
 }
}
