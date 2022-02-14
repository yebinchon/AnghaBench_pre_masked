
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; int len; int type; } ;
typedef TYPE_2__ git_rawobj ;
typedef int git_oid ;
struct TYPE_7__ {int size; int type; int oid; } ;
struct TYPE_9__ {int buffer; TYPE_1__ cached; } ;
typedef TYPE_3__ git_odb_object ;


 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static git_odb_object *FUNC_2(const git_oid *VAR_0, git_rawobj *VAR_1)
{
 git_odb_object *VAR_2 = FUNC_0(1, sizeof(git_odb_object));

 if (VAR_2 != ((void*)0)) {
  FUNC_1(&VAR_2->cached.oid, VAR_0);
  VAR_2->cached.type = VAR_1->type;
  VAR_2->cached.size = VAR_1->len;
  VAR_2->buffer = VAR_1->data;
 }

 return VAR_2;
}
