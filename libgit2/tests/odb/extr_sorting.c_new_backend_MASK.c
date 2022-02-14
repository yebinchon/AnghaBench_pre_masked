
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_odb_backend ;
struct TYPE_4__ {void (* free ) (int *) ;int version; } ;
struct TYPE_5__ {size_t position; TYPE_1__ base; } ;
typedef TYPE_2__ fake_backend ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static git_odb_backend *FUNC_1(size_t VAR_2)
{
 fake_backend *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(fake_backend));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->base.free = (void (*)(git_odb_backend *)) VAR_1;
 VAR_3->base.version = VAR_0;
 VAR_3->position = VAR_2;
 return (git_odb_backend *)VAR_3;
}
