
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_object_store {struct object_directory* odb; } ;
struct object_directory {struct object_directory* next; } ;


 int FUNC_0 (struct object_directory*) ;

__attribute__((used)) static void FUNC_1(struct raw_object_store *VAR_0)
{
 while (VAR_0->odb) {
  struct object_directory *VAR_1;

  VAR_1 = VAR_0->odb->next;
  FUNC_0(VAR_0->odb);
  VAR_0->odb = VAR_1;
 }
}
