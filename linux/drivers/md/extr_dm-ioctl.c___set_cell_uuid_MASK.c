
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_cell {char* uuid; int uuid_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hash_cell *VAR_2, char *VAR_3)
{
 FUNC_2(&VAR_1);
 VAR_2->uuid = VAR_3;
 FUNC_3(&VAR_1);

 FUNC_1(&VAR_2->uuid_list, VAR_0 + FUNC_0(VAR_3));
}
