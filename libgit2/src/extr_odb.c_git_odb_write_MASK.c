
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_15__ {int (* finalize_write ) (TYPE_1__*,int *) ;int (* write ) (TYPE_1__*,void const*,size_t) ;} ;
typedef TYPE_1__ git_odb_stream ;
struct TYPE_16__ {int (* write ) (TYPE_2__*,int *,void const*,size_t,int ) ;} ;
typedef TYPE_2__ git_odb_backend ;
struct TYPE_19__ {size_t length; } ;
struct TYPE_17__ {TYPE_9__ backends; } ;
typedef TYPE_3__ git_odb ;
typedef int git_object_t ;
struct TYPE_18__ {scalar_t__ is_alternate; TYPE_2__* backend; } ;
typedef TYPE_4__ backend_internal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *,void const*,size_t,int ) ;
 int FUNC_4 (TYPE_1__**,TYPE_3__*,size_t,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (TYPE_9__*,size_t) ;
 int FUNC_8 (TYPE_2__*,int *,void const*,size_t,int ) ;
 int FUNC_9 (TYPE_1__*,void const*,size_t) ;
 int FUNC_10 (TYPE_1__*,int *) ;

int FUNC_11(
 git_oid *VAR_3, git_odb *VAR_4, const void *VAR_5, size_t VAR_6, git_object_t VAR_7)
{
 size_t VAR_8;
 int VAR_9 = VAR_1;
 git_odb_stream *VAR_10;

 FUNC_0(VAR_3 && VAR_4);

 FUNC_3(VAR_3, VAR_5, VAR_6, VAR_7);

 if (FUNC_6(VAR_3))
  return FUNC_1(VAR_0, "cannot write object");

 if (FUNC_2(VAR_4, VAR_3))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->backends.length && VAR_9 < 0; ++VAR_8) {
  backend_internal *VAR_11 = FUNC_7(&VAR_4->backends, VAR_8);
  git_odb_backend *VAR_12 = VAR_11->backend;


  if (VAR_11->is_alternate)
   continue;

  if (VAR_12->write != ((void*)0))
   VAR_9 = VAR_12->write(VAR_12, VAR_3, VAR_5, VAR_6, VAR_7);
 }

 if (!VAR_9 || VAR_9 == VAR_2)
  return 0;





 if ((VAR_9 = FUNC_4(&VAR_10, VAR_4, VAR_6, VAR_7)) != 0)
  return VAR_9;

 VAR_10->write(VAR_10, VAR_5, VAR_6);
 VAR_9 = VAR_10->finalize_write(VAR_10, VAR_3);
 FUNC_5(VAR_10);

 return VAR_9;
}
