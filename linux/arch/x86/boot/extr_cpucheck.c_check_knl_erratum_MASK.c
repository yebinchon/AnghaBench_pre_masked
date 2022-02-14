
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int family; scalar_t__ model; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

int FUNC_3(void)
{



 if (!FUNC_1() ||
     VAR_3.family != 6 ||
     VAR_3.model != VAR_2)
  return 0;
 if (FUNC_0(VAR_0) || FUNC_0(VAR_1))
  return 0;

 FUNC_2("This 32-bit kernel can not run on this Xeon Phi x200\n"
      "processor due to a processor erratum.  Use a 64-bit\n"
      "kernel, or enable PAE in this 32-bit kernel.\n\n");

 return -1;
}
