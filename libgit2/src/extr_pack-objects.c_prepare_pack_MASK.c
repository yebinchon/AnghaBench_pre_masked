
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int size; } ;
typedef TYPE_1__ git_pobject ;
struct TYPE_11__ {size_t nr_objects; int done; int big_file_threshold; TYPE_1__* object_list; int progress_cb_payload; int (* progress_cb ) (int ,int ,size_t,int ) ;} ;
typedef TYPE_2__ git_packbuilder ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__**) ;
 TYPE_1__** FUNC_2 (size_t,int) ;
 int FUNC_3 (void**,size_t,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__**,size_t,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,size_t,int) ;
 int FUNC_6 (int ,int ,size_t,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(git_packbuilder *VAR_4)
{
 git_pobject **VAR_5;
 size_t VAR_6, VAR_7 = 0;

 if (VAR_4->nr_objects == 0 || VAR_4->done)
  return 0;





 if (VAR_4->progress_cb)
   VAR_4->progress_cb(VAR_0, 0, VAR_4->nr_objects, VAR_4->progress_cb_payload);

 VAR_5 = FUNC_2(VAR_4->nr_objects, sizeof(*VAR_5));
 FUNC_0(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_4->nr_objects; ++VAR_6) {
  git_pobject *VAR_8 = VAR_4->object_list + VAR_6;


  if (VAR_8->size < 50 || VAR_8->size > VAR_4->big_file_threshold)
   continue;

  VAR_5[VAR_7++] = VAR_8;
 }

 if (VAR_7 > 1) {
  FUNC_3((void **)VAR_5, VAR_7, VAR_3);
  if (FUNC_4(VAR_4, VAR_5, VAR_7,
       VAR_2 + 1,
       VAR_1) < 0) {
   FUNC_1(VAR_5);
   return -1;
  }
 }

 FUNC_5(VAR_4, VAR_4->nr_objects, 1);

 VAR_4->done = 1;
 FUNC_1(VAR_5);
 return 0;
}
