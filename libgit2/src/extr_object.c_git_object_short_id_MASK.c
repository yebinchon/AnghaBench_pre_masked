
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_17__ {int* id; TYPE_1__ member_0; } ;
typedef TYPE_4__ git_oid ;
typedef int git_odb ;
struct TYPE_15__ {int id; } ;
struct TYPE_16__ {TYPE_2__ oid; } ;
struct TYPE_18__ {TYPE_3__ cached; } ;
typedef TYPE_5__ git_object ;
struct TYPE_19__ {int size; int ptr; } ;
typedef TYPE_6__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 () ;
 int * FUNC_4 (TYPE_5__ const*) ;
 int FUNC_5 (int *,int *,TYPE_4__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,TYPE_4__*) ;
 int FUNC_8 (int*,int *,int ) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int**,int *,int) ;

int FUNC_11(git_buf *VAR_4, const git_object *VAR_5)
{
 git_repository *VAR_6;
 int VAR_7 = VAR_0, VAR_8;
 git_oid VAR_9 = {0};
 git_odb *VAR_10;

 FUNC_0(VAR_4 && VAR_5);

 FUNC_2(VAR_4);
 VAR_6 = FUNC_4(VAR_5);

 if ((VAR_8 = FUNC_8(&VAR_7, VAR_6, VAR_1)) < 0)
  return VAR_8;

 if ((VAR_8 = FUNC_9(&VAR_10, VAR_6)) < 0)
  return VAR_8;

 while (VAR_7 < VAR_3) {

  FUNC_10(&VAR_9.id, &VAR_5->cached.oid.id, (VAR_7 + 1) / 2);
  if (VAR_7 & 1)
   VAR_9.id[VAR_7 / 2] &= 0xf0;

  VAR_8 = FUNC_5(((void*)0), VAR_10, &VAR_9, VAR_7);
  if (VAR_8 != VAR_2)
   break;

  FUNC_3();
  VAR_7++;
 }

 if (!VAR_8 && !(VAR_8 = FUNC_1(VAR_4, VAR_7 + 1))) {
  FUNC_7(VAR_4->ptr, VAR_7 + 1, &VAR_9);
  VAR_4->size = VAR_7;
 }

 FUNC_6(VAR_10);

 return VAR_8;
}
