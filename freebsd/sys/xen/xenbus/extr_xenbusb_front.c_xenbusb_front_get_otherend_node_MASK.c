
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_ivars {char* xd_otherend_path; int xd_otherend_path_len; int xd_otherend_id; int xd_node; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,char*,char*,int *,char*,int *,char**,int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, struct xenbus_device_ivars *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if (VAR_4->xd_otherend_path != ((void*)0)) {
  FUNC_0(VAR_4->xd_otherend_path, VAR_0);
  VAR_4->xd_otherend_path = ((void*)0);
 }

 VAR_6 = FUNC_3(VAR_2, VAR_4->xd_node,
     "backend-id", "%i", &VAR_4->xd_otherend_id,
     "backend", ((void*)0), &VAR_5,
     ((void*)0));

 if (VAR_6 == 0) {
  VAR_4->xd_otherend_path = FUNC_1(VAR_5, VAR_0);
  VAR_4->xd_otherend_path_len = FUNC_2(VAR_5);
  FUNC_0(VAR_5, VAR_1);
 }
 return (VAR_6);
}
