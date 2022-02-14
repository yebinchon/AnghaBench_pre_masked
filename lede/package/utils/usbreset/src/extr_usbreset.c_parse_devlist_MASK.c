
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbentry {void* product_id; void* vendor_id; void* dev_num; void* bus_num; int product_name; int vendor_name; } ;
struct dirent {int * d_name; } ;
typedef int dev ;
typedef int DIR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbentry*,int ,int) ;
 struct dirent* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (char*,int *,int) ;
 char* FUNC_6 (int *,char*) ;

__attribute__((used)) static struct usbentry * FUNC_7(DIR *VAR_0)
{
 char *VAR_1;
 struct dirent *VAR_2;
 static struct usbentry VAR_3;

 do {
  VAR_2 = FUNC_2(VAR_0);

  if (!VAR_2)
   return ((void*)0);
 }
 while(!FUNC_0(VAR_2->d_name[0]) || FUNC_3(VAR_2->d_name, ':'));

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 if ((VAR_1 = FUNC_6(VAR_2->d_name, "busnum")) != ((void*)0))
  VAR_3.bus_num = FUNC_5(VAR_1, ((void*)0), 10);

 if ((VAR_1 = FUNC_6(VAR_2->d_name, "devnum")) != ((void*)0))
  VAR_3.dev_num = FUNC_5(VAR_1, ((void*)0), 10);

 if ((VAR_1 = FUNC_6(VAR_2->d_name, "idVendor")) != ((void*)0))
  VAR_3.vendor_id = FUNC_5(VAR_1, ((void*)0), 16);

 if ((VAR_1 = FUNC_6(VAR_2->d_name, "idProduct")) != ((void*)0))
  VAR_3.product_id = FUNC_5(VAR_1, ((void*)0), 16);

 if ((VAR_1 = FUNC_6(VAR_2->d_name, "manufacturer")) != ((void*)0))
  FUNC_4(VAR_3.vendor_name, VAR_1);

 if ((VAR_1 = FUNC_6(VAR_2->d_name, "product")) != ((void*)0))
  FUNC_4(VAR_3.product_name, VAR_1);

 if (VAR_3.bus_num && VAR_3.dev_num && VAR_3.vendor_id && VAR_3.product_id)
  return &VAR_3;

 return ((void*)0);
}
