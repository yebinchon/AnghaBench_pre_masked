
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; } ;
struct hid_device {int bdaddr; scalar_t__ new_device; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hostent* FUNC_0 (char*,int,int ) ;
 char* FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*,char*) ;
 struct hid_device* FUNC_4 (struct hid_device*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(bdaddr_t *VAR_4, int VAR_5, char **VAR_6)
{
 struct hid_device *VAR_7 = ((void*)0);
 struct hostent *VAR_8 = ((void*)0);
 int VAR_9 = VAR_1;

 if (FUNC_5() == 0) {
  if (FUNC_6() == 0) {
   VAR_9 = VAR_2;

   for (VAR_7 = FUNC_4(VAR_7);
        VAR_7 != ((void*)0);
        VAR_7 = FUNC_4(VAR_7)) {
    if (VAR_7->new_device)
     continue;

    VAR_8 = FUNC_0((char *) &VAR_7->bdaddr,
      sizeof(VAR_7->bdaddr),
      VAR_0);

    FUNC_3(VAR_3,
"%s %s\n", FUNC_1(&VAR_7->bdaddr, ((void*)0)),
     (VAR_8 != ((void*)0) && VAR_8->h_name != ((void*)0))?
      VAR_8->h_name : "");
   }
  }

  FUNC_2();
 }

 return (VAR_9);
}
