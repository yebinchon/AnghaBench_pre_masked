
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_entry {char* path; int mode; } ;


 int FUNC_0 (char*,int,int,char*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, struct name_entry *VAR_1)
{
 FUNC_0("ent#%d %06o %s\n", VAR_0,
        VAR_1->path ? VAR_1->mode : 0,
        VAR_1->path ? VAR_1->path : "(missing)");
}
