
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int desc; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct hid_device* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(bdaddr_t *VAR_2, int VAR_3, char **VAR_4)
{
 struct hid_device *VAR_5 = ((void*)0);
 int VAR_6 = VAR_0;

 if (FUNC_3() == 0) {
  if ((VAR_5 = FUNC_1(VAR_2)) != ((void*)0)) {
   FUNC_2(VAR_5->desc);
   VAR_6 = VAR_1;
  }

  FUNC_0();
 }

 return (VAR_6);
}
