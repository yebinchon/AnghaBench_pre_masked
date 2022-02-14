
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msu_buffer_entry {int entry; } ;
struct msu_buffer {int name; } ;


 struct msu_buffer_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct msu_buffer_entry*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(const struct msu_buffer *VAR_1)
{
 struct msu_buffer_entry *VAR_2;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->name);
 if (VAR_2) {
  FUNC_2(&VAR_2->entry);
  FUNC_1(VAR_2);
 }
 FUNC_4(&VAR_0);
}
