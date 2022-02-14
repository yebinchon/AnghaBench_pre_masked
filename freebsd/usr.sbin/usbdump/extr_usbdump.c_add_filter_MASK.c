
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_filt {int unit; int endpoint; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct usb_filt*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 struct usb_filt* FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(int VAR_3, int VAR_4)
{
 struct usb_filt *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct usb_filt));
 if (VAR_5 == ((void*)0))
  FUNC_1(VAR_0, "Out of memory.");

 VAR_5->unit = VAR_3;
 VAR_5->endpoint = VAR_4;

 FUNC_0(&VAR_2, VAR_5, VAR_1);
}
