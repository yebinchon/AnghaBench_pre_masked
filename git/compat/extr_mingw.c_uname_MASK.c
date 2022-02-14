
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int version; int release; int sysname; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct utsname*,int ,int) ;
 int FUNC_2 (int ,int,char*,...) ;

int FUNC_3(struct utsname *VAR_0)
{
 unsigned VAR_1 = (unsigned)FUNC_0();
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_2(VAR_0->sysname, sizeof(VAR_0->sysname), "Windows");
 FUNC_2(VAR_0->release, sizeof(VAR_0->release),
   "%u.%u", VAR_1 & 0xff, (VAR_1 >> 8) & 0xff);

 FUNC_2(VAR_0->version, sizeof(VAR_0->version),
    "%u", (VAR_1 >> 16) & 0x7fff);
 return 0;
}
