
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct proc_dir_entry* FUNC_1 (char*,int ,struct proc_dir_entry*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 struct proc_dir_entry* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int *,char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_4)
{
 struct proc_dir_entry *VAR_5, *VAR_6;
 char VAR_7[64];

 if(VAR_3 == ((void*)0)) FUNC_0();

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if(!VAR_5) return;

 VAR_6 = FUNC_1("media", VAR_0, VAR_5,
   VAR_1);
 if(!VAR_6) return;
 FUNC_4(VAR_7, sizeof(VAR_7), "ide0/%s", VAR_4);
 FUNC_3(VAR_4, VAR_3, VAR_7);
}
