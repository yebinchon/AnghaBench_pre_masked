
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct vm_map_entry {int dummy; } ;
struct vm_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (char*,int,int *,int ,int *,int ,int *,int,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;

void
FUNC_3(void)
{
 FUNC_0(&VAR_7, "vm map sleep mutex", ((void*)0), VAR_1);
 VAR_9 = FUNC_2("MAP", sizeof(struct vm_map), ((void*)0),



     ((void*)0),

     &VAR_11, ((void*)0), &VAR_2, VAR_4);
 FUNC_1(VAR_9, VAR_0);
 VAR_6 = FUNC_2("KMAP ENTRY", sizeof(struct vm_map_entry),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_2,
     VAR_3 | VAR_5);
 VAR_8 = FUNC_2("MAP ENTRY", sizeof(struct vm_map_entry),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_2, 0);
 VAR_14 = FUNC_2("VMSPACE", sizeof(struct vmspace), ((void*)0),



     ((void*)0),

     &VAR_13, ((void*)0), &VAR_2, VAR_4);
}
