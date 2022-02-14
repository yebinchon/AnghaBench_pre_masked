
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_directory {int loose_objects_subdir_seen; int * loose_objects_cache; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct object_directory *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->loose_objects_cache); VAR_1++)
  FUNC_2(&VAR_0->loose_objects_cache[VAR_1]);
 FUNC_1(&VAR_0->loose_objects_subdir_seen, 0,
        sizeof(VAR_0->loose_objects_subdir_seen));
}
