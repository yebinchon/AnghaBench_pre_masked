
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int idx; int guid; int attrs; int size; int data; int name; } ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct entry*,int ) ;
 int FUNC_2 (int **,char**) ;
 int FUNC_3 (int ,char*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char) ;
 struct entry* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_12(void)
{

 efi_guid_t *VAR_3;
 char *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 struct entry *VAR_6;

 FUNC_0(&VAR_1);
 while ((VAR_5 = FUNC_2(&VAR_3, &VAR_4)) > 0) {



  if (FUNC_4(VAR_3, &VAR_0) != 0 ||
      FUNC_9(VAR_4) != 8 ||
      FUNC_10(VAR_4, "Boot", 4) != 0 ||
      !FUNC_6(VAR_4[4]) ||
      !FUNC_6(VAR_4[5]) ||
      !FUNC_6(VAR_4[6]) ||
      !FUNC_6(VAR_4[7]))
   continue;
  VAR_6 = FUNC_7(sizeof(struct entry));
  VAR_6->name = FUNC_8(VAR_4);

  VAR_5 = FUNC_3(*VAR_3, VAR_4, &VAR_6->data,
      &VAR_6->size, &VAR_6->attrs);
  if (VAR_5 < 0)
   FUNC_5(1, "efi_get_variable");
  VAR_6->guid = *VAR_3;
  VAR_6->idx = FUNC_11(&VAR_4[4], ((void*)0), 16);
  FUNC_1(&VAR_1, VAR_6, VAR_2);
 }
}
