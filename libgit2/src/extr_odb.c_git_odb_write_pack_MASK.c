
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct git_odb_writepack {int dummy; } ;
struct TYPE_9__ {int (* writepack ) (struct git_odb_writepack**,TYPE_1__*,TYPE_2__*,int ,void*) ;} ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_12__ {size_t length; } ;
struct TYPE_10__ {TYPE_7__ backends; } ;
typedef TYPE_2__ git_odb ;
typedef int git_indexer_progress_cb ;
struct TYPE_11__ {scalar_t__ is_alternate; TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (TYPE_7__*,size_t) ;
 int FUNC_3 (struct git_odb_writepack**,TYPE_1__*,TYPE_2__*,int ,void*) ;

int FUNC_4(struct git_odb_writepack **VAR_2, git_odb *VAR_3, git_indexer_progress_cb VAR_4, void *VAR_5)
{
 size_t VAR_6, VAR_7 = 0;
 int VAR_8 = VAR_0;

 FUNC_0(VAR_2 && VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3->backends.length && VAR_8 < 0; ++VAR_6) {
  backend_internal *VAR_9 = FUNC_2(&VAR_3->backends, VAR_6);
  git_odb_backend *VAR_10 = VAR_9->backend;


  if (VAR_9->is_alternate)
   continue;

  if (VAR_10->writepack != ((void*)0)) {
   ++VAR_7;
   VAR_8 = VAR_10->writepack(VAR_2, VAR_10, VAR_3, VAR_4, VAR_5);
  }
 }

 if (VAR_8 == VAR_1)
  VAR_8 = 0;
 if (VAR_8 < 0 && !VAR_7)
  VAR_8 = FUNC_1("write pack");

 return VAR_8;
}
