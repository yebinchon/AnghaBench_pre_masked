
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int end; int start; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1, struct resource *VAR_2,
     int VAR_3)
{

 if ((VAR_2->flags & VAR_0) == 0)
  return 0;


 if (VAR_3 == 0 && FUNC_1(VAR_1, "gc"))
  VAR_2->end = VAR_2->start + 0x1ffff;


 if (VAR_3 >= 2 && FUNC_1(VAR_1, "radio"))
  return 1;



 if ((VAR_2->start & 0x0001f000) == 0x00008000)
  VAR_2->end = VAR_2->start + 0xff;






 if (FUNC_1(VAR_1, "escc"))
  return 1;


 if (VAR_3 >= 3 && (FUNC_1(VAR_1, "ch-a") ||
      FUNC_1(VAR_1, "ch-b")))
  return 1;


 if (VAR_3 > 0 && FUNC_1(VAR_1, "media-bay"))
  return 1;


 if (FUNC_1(VAR_1, "IDE") || FUNC_1(VAR_1, "ATA") ||
     FUNC_0(VAR_1, "ide") || FUNC_0(VAR_1, "ata")) {
  if (VAR_3 == 0 && (VAR_2->end - VAR_2->start) > 0xfff)
   VAR_2->end = VAR_2->start + 0xfff;
  if (VAR_3 == 1 && (VAR_2->end - VAR_2->start) > 0xff)
   VAR_2->end = VAR_2->start + 0xff;
 }
 return 0;
}
