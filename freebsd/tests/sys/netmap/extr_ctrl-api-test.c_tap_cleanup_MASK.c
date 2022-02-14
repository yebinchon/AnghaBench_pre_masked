
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ifname; } ;


 int FUNC_0 (char const**,int,char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int,char const**) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(int VAR_1)
{
 const char *VAR_2[8];
 int VAR_3 = 0;

 (void)VAR_1;





 FUNC_0(VAR_2, VAR_3, "ip");
 FUNC_0(VAR_2, VAR_3, "link");
 FUNC_0(VAR_2, VAR_3, "del");
 FUNC_0(VAR_2, VAR_3, VAR_0.ifname);

 FUNC_0(VAR_2, VAR_3, ((void*)0));
 if (FUNC_1(VAR_3, VAR_2)) {
  FUNC_2("Failed to destroy tap interface\n");
 }
}
