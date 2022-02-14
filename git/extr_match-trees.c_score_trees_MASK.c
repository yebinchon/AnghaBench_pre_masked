
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int oid; } ;
struct tree_desc {TYPE_1__ entry; scalar_t__ size; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 void* FUNC_1 (struct tree_desc*,struct object_id const*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct tree_desc*) ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_0, const struct object_id *VAR_1)
{
 struct tree_desc VAR_2;
 struct tree_desc VAR_3;
 void *VAR_4 = FUNC_1(&VAR_2, VAR_0);
 void *VAR_5 = FUNC_1(&VAR_3, VAR_1);
 int VAR_6 = 0;

 for (;;) {
  int VAR_7;

  if (VAR_2.size && VAR_3.size)
   VAR_7 = FUNC_0(&VAR_2.entry, &VAR_3.entry);
  else if (VAR_2.size)

   VAR_7 = -1;
  else if (VAR_3.size)

   VAR_7 = 1;
  else
   break;

  if (VAR_7 < 0) {

   VAR_6 += FUNC_6(VAR_2.entry.mode);
   FUNC_7(&VAR_2);
  } else if (VAR_7 > 0) {

   VAR_6 += FUNC_6(VAR_3.entry.mode);
   FUNC_7(&VAR_3);
  } else {

   if (!FUNC_3(&VAR_2.entry.oid, &VAR_3.entry.oid)) {

    VAR_6 += FUNC_4(VAR_2.entry.mode,
             VAR_3.entry.mode);
   } else {

    VAR_6 += FUNC_5(VAR_2.entry.mode,
             VAR_3.entry.mode);
   }
   FUNC_7(&VAR_2);
   FUNC_7(&VAR_3);
  }
 }
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 return VAR_6;
}
