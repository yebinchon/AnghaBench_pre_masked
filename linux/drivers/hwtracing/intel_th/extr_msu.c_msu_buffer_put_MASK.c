
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msu_buffer_entry {int owner; } ;
struct msu_buffer {int name; } ;


 struct msu_buffer_entry* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const struct msu_buffer *VAR_1)
{
 struct msu_buffer_entry *VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->name);
 if (VAR_2)
  FUNC_1(VAR_2->owner);
 FUNC_3(&VAR_0);
}
