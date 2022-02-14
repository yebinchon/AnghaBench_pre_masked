
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_1 (int *,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct sysctl_oid_list *VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 FUNC_1(((void*)0), VAR_7, VAR_2, "mapstart",
     VAR_0, &VAR_4,
     "MemGuard KVA base");
 FUNC_1(((void*)0), VAR_7, VAR_2, "maplimit",
     VAR_0, &VAR_5,
     "MemGuard KVA size");
 FUNC_0(((void*)0), VAR_7, VAR_2, "mapused",
     VAR_0 | VAR_1, ((void*)0), 0, VAR_6, "LU",
     "MemGuard KVA used");
}
