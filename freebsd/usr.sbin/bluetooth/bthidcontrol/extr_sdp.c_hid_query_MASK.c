
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int bdaddr; } ;
typedef int int32_t ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,char*,char*,int) ;
 scalar_t__ FUNC_2 (int *,struct hid_device*,int*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct hid_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int32_t
FUNC_6(bdaddr_t *VAR_4, int VAR_5, char **VAR_6)
{
 struct hid_device VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7.bdaddr, VAR_4, sizeof(VAR_7.bdaddr));
 if (FUNC_2(((void*)0), &VAR_7, &VAR_8) < 0) {
  FUNC_1(VAR_2, "Could not perform SDP query on the " "device %s. %s (%d)\n", FUNC_0(VAR_4, ((void*)0)),

   FUNC_5(VAR_8), VAR_8);
  return (VAR_0);
 }

 FUNC_4(&VAR_7, VAR_3);

 return (VAR_1);
}
