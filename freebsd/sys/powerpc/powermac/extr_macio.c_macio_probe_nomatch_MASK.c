
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct macio_devinfo {struct resource_list mdi_resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct macio_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_3, device_t VAR_4)
{
        struct macio_devinfo *VAR_5;
        struct resource_list *VAR_6;
 const char *VAR_7;

 if (VAR_2) {
  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = &VAR_5->mdi_resources;

  if ((VAR_7 = FUNC_3(VAR_4)) == ((void*)0))
   VAR_7 = "(unknown)";
  FUNC_1(VAR_3, "<%s, %s>", VAR_7, FUNC_2(VAR_4));
  FUNC_5(VAR_6, "mem", VAR_1, "%#jx");
  FUNC_5(VAR_6, "irq", VAR_0, "%jd");
  FUNC_4(" (no driver attached)\n");
 }
}
