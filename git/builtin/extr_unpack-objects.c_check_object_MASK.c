
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct object {int flags; int type; int oid; } ;
struct obj_buffer {int size; int buffer; } ;
struct fsck_options {int dummy; } ;
struct TYPE_4__ {int (* walk ) (struct object*,int,void*,struct fsck_options*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct object*,int ,int ,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 (struct object*,int *,TYPE_1__*) ;
 struct obj_buffer* FUNC_3 (struct object*) ;
 int FUNC_4 (int ,int *,unsigned long*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (struct object*,struct obj_buffer*) ;

__attribute__((used)) static int FUNC_7(struct object *VAR_5, int VAR_6, void *VAR_7, struct fsck_options *VAR_8)
{
 struct obj_buffer *VAR_9;

 if (!VAR_5)
  return 1;

 if (VAR_5->flags & VAR_1)
  return 0;

 if (VAR_6 != VAR_2 && VAR_5->type != VAR_6)
  FUNC_0("object type mismatch");

 if (!(VAR_5->flags & VAR_0)) {
  unsigned long VAR_10;
  int VAR_11 = FUNC_4(VAR_4, &VAR_5->oid, &VAR_10);
  if (VAR_11 != VAR_5->type || VAR_11 <= 0)
   FUNC_0("object of unexpected type");
  VAR_5->flags |= VAR_1;
  return 0;
 }

 VAR_9 = FUNC_3(VAR_5);
 if (!VAR_9)
  FUNC_0("Whoops! Cannot find object '%s'", FUNC_5(&VAR_5->oid));
 if (FUNC_1(VAR_5, VAR_9->buffer, VAR_9->size, &VAR_3))
  FUNC_0("fsck error in packed object");
 VAR_3.walk = FUNC_7;
 if (FUNC_2(VAR_5, ((void*)0), &VAR_3))
  FUNC_0("Error on reachable objects of %s", FUNC_5(&VAR_5->oid));
 FUNC_6(VAR_5, VAR_9);
 return 0;
}
