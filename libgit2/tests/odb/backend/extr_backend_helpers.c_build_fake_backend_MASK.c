
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_odb_backend ;
typedef int fake_object ;
struct TYPE_5__ {int * free; int exists_prefix; int exists; int read_header; int read_prefix; int read; int * refresh; int version; } ;
struct TYPE_6__ {TYPE_1__ parent; int const* objects; } ;
typedef TYPE_2__ fake_backend ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (int,int) ;

int FUNC_2(
 git_odb_backend **VAR_7,
 const fake_object *VAR_8)
{
 fake_backend *VAR_9;

 VAR_9 = FUNC_1(1, sizeof(fake_backend));
 FUNC_0(VAR_9);

 VAR_9->parent.version = VAR_0;

 VAR_9->parent.refresh = ((void*)0);
 VAR_9->objects = VAR_8;

 VAR_9->parent.read = VAR_4;
 VAR_9->parent.read_prefix = VAR_6;
 VAR_9->parent.read_header = VAR_5;
 VAR_9->parent.exists = VAR_1;
 VAR_9->parent.exists_prefix = VAR_2;
 VAR_9->parent.free = &VAR_3;

 *VAR_7 = (git_odb_backend *)VAR_9;

 return 0;
}
