
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_info_component {char* name; char* version; int build_time; int build_date; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,char*,char*,char*,char*,char*,int ,int ,int ,char const*) ;

void
FUNC_1(struct mfi_info_component *VAR_4, const char *VAR_5)
{

 FUNC_0("%-*s  %-*s  %-*s  %-*s  %s\n", VAR_1, VAR_4->name,
     VAR_3, VAR_4->version, VAR_0, VAR_4->build_date,
     VAR_2, VAR_4->build_time, VAR_5);
}
