
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ length; int id; } ;
typedef TYPE_1__ git_odb_expand_id ;
typedef int git_odb ;
typedef scalar_t__ git_object_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int *,scalar_t__,int) ;
 int FUNC_5 (scalar_t__*,int *,int *) ;

int FUNC_6(
 git_odb *VAR_3,
 git_odb_expand_id *VAR_4,
 size_t VAR_5)
{
 size_t VAR_6;

 FUNC_0(VAR_3 && VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  git_odb_expand_id *VAR_7 = &VAR_4[VAR_6];
  int VAR_8 = 129;

  if (!VAR_7->type)
   VAR_7->type = VAR_0;


  if (VAR_7->length >= VAR_2 && VAR_7->length < VAR_1) {
   git_oid VAR_9;

   VAR_8 = FUNC_4(&VAR_9, VAR_3, &VAR_7->id, VAR_7->length, 0);
   if (!VAR_8) {
    FUNC_2(&VAR_7->id, &VAR_9);
    VAR_7->length = VAR_1;
   }
  }





  if (VAR_7->length >= VAR_1) {
   git_object_t VAR_10;

   VAR_8 = FUNC_5(&VAR_10, VAR_3, &VAR_7->id);
   if (!VAR_8) {
    if (VAR_7->type != VAR_0 && VAR_7->type != VAR_10)
     VAR_8 = 128;
    else
     VAR_7->type = VAR_10;
   }
  }

  switch (VAR_8) {

  case 0:
   continue;


  case 128:
  case 129:
   FUNC_3(&VAR_7->id, 0, sizeof(git_oid));
   VAR_7->length = 0;
   VAR_7->type = 0;
   break;


  default:
   return VAR_8;
  }
 }

 FUNC_1();
 return 0;
}
