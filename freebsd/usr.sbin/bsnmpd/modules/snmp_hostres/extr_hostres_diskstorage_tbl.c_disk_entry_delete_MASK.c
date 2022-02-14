
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk_entry {int index; } ;
struct device_entry {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct disk_entry*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_entry*) ;
 struct device_entry* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct disk_entry*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct disk_entry *VAR_3)
{
 struct device_entry *VAR_4;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_0(&VAR_1, VAR_3, VAR_2);

 VAR_4 = FUNC_3(VAR_3->index);

 FUNC_4(VAR_3);






 if (VAR_4 != ((void*)0) &&
     (VAR_4->flags & VAR_0) == VAR_0)
  FUNC_2(VAR_4);
}
