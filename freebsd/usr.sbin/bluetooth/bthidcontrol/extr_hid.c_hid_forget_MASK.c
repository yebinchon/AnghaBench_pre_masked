
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int new_device; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct hid_device* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(bdaddr_t *VAR_2, int VAR_3, char **VAR_4)
{
 struct hid_device *VAR_5 = ((void*)0);
 int VAR_6 = VAR_0;

 if (FUNC_2() == 0) {
  if (FUNC_3() == 0) {
   if ((VAR_5 = FUNC_1(VAR_2)) != ((void*)0)) {
    VAR_5->new_device = 1;
    if (FUNC_4() == 0)
     VAR_6 = VAR_1;
   }
  }

  FUNC_0();
 }

 return (VAR_6);
}
