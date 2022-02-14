
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk_entry {int dummy; } ;


 int VAR_0 ;
 struct disk_entry* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct disk_entry*,int ) ;
 int FUNC_2 (int) ;
 struct disk_entry* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct disk_entry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(void)
{
 struct disk_entry *VAR_5;

 while ((VAR_5 = FUNC_0(&VAR_2)) != ((void*)0)) {
  FUNC_1(&VAR_2, VAR_5, VAR_3);
  FUNC_3(VAR_5);
 }

 FUNC_3(VAR_1);

 if (VAR_4 > 0) {
  if (FUNC_2(VAR_4) == -1)
   FUNC_4(VAR_0,"close (/dev/mdctl) failed: %m");
  VAR_4 = -1;
 }
}
