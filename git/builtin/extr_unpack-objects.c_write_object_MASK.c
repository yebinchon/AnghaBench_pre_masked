
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object {int flags; } ;
struct TYPE_3__ {int flags; } ;
struct blob {TYPE_1__ object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {struct object* obj; int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct object*,void*,unsigned long) ;
 int FUNC_1 (unsigned int,int,void*,unsigned long) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,unsigned long,int ,int *) ;
 struct blob* FUNC_5 (int ,int *) ;
 TYPE_2__* VAR_3 ;
 struct object* FUNC_6 (int ,int *,int,unsigned long,void*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (void*,unsigned long,int ,int *) ;

__attribute__((used)) static void FUNC_9(unsigned VAR_6, enum object_type VAR_7,
    void *VAR_8, unsigned long VAR_9)
{
 if (!VAR_4) {
  if (FUNC_8(VAR_8, VAR_9, FUNC_7(VAR_7),
          &VAR_3[VAR_6].oid) < 0)
   FUNC_2("failed to write object");
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_3(VAR_8);
  VAR_3[VAR_6].obj = ((void*)0);
 } else if (VAR_7 == VAR_2) {
  struct blob *VAR_10;
  if (FUNC_8(VAR_8, VAR_9, FUNC_7(VAR_7),
          &VAR_3[VAR_6].oid) < 0)
   FUNC_2("failed to write object");
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_3(VAR_8);

  VAR_10 = FUNC_5(VAR_5, &VAR_3[VAR_6].oid);
  if (VAR_10)
   VAR_10->object.flags |= VAR_1;
  else
   FUNC_2("invalid blob object");
  VAR_3[VAR_6].obj = ((void*)0);
 } else {
  struct object *VAR_11;
  int VAR_12;
  FUNC_4(VAR_8, VAR_9, FUNC_7(VAR_7), &VAR_3[VAR_6].oid);
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
  VAR_11 = FUNC_6(VAR_5, &VAR_3[VAR_6].oid,
       VAR_7, VAR_9, VAR_8,
       &VAR_12);
  if (!VAR_11)
   FUNC_2("invalid %s", FUNC_7(VAR_7));
  FUNC_0(VAR_11, VAR_8, VAR_9);
  VAR_11->flags |= VAR_0;
  VAR_3[VAR_6].obj = VAR_11;
 }
}
