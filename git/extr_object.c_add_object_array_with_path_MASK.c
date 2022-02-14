
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array_entry {unsigned int mode; int * path; int * name; struct object* item; } ;
struct object_array {unsigned int nr; unsigned int alloc; struct object_array_entry* objects; } ;
struct object {int dummy; } ;


 int FUNC_0 (struct object_array_entry*,unsigned int) ;
 int * VAR_0 ;
 void* FUNC_1 (char const*) ;

void FUNC_2(struct object *VAR_1, const char *VAR_2,
    struct object_array *VAR_3,
    unsigned VAR_4, const char *VAR_5)
{
 unsigned VAR_6 = VAR_3->nr;
 unsigned VAR_7 = VAR_3->alloc;
 struct object_array_entry *VAR_8 = VAR_3->objects;
 struct object_array_entry *VAR_9;

 if (VAR_6 >= VAR_7) {
  VAR_7 = (VAR_7 + 32) * 2;
  FUNC_0(VAR_8, VAR_7);
  VAR_3->alloc = VAR_7;
  VAR_3->objects = VAR_8;
 }
 VAR_9 = &VAR_8[VAR_6];
 VAR_9->item = VAR_1;
 if (!VAR_2)
  VAR_9->name = ((void*)0);
 else if (!*VAR_2)

  VAR_9->name = VAR_0;
 else
  VAR_9->name = FUNC_1(VAR_2);
 VAR_9->mode = VAR_4;
 if (VAR_5)
  VAR_9->path = FUNC_1(VAR_5);
 else
  VAR_9->path = ((void*)0);
 VAR_3->nr = ++VAR_6;
}
