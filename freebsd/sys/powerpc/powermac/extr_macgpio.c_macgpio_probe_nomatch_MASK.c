
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macgpio_devinfo {scalar_t__ gpio_num; int mdi_resources; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct macgpio_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_2, device_t VAR_3)
{
        struct macgpio_devinfo *VAR_4;
 const char *VAR_5;

 if (VAR_1) {
  VAR_4 = FUNC_0(VAR_3);

  if ((VAR_5 = FUNC_3(VAR_3)) == ((void*)0))
   VAR_5 = "(unknown)";
  FUNC_1(VAR_2, "<%s, %s>", VAR_5, FUNC_2(VAR_3));
  if (VAR_4->gpio_num >= 0)
   FUNC_4(" gpio %d",VAR_4->gpio_num);
  FUNC_5(&VAR_4->mdi_resources, "irq",
      VAR_0, "%jd");
  FUNC_4(" (no driver attached)\n");
 }
}
