
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_5__ {scalar_t__ oid; } ;
typedef TYPE_1__ fake_object ;
struct TYPE_6__ {TYPE_1__* objects; } ;
typedef TYPE_2__ fake_backend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(const fake_object **VAR_3, fake_backend *VAR_4, const git_oid *VAR_5, size_t VAR_6)
{
 const fake_object *VAR_7 = VAR_4->objects, *VAR_8 = ((void*)0);

 while (VAR_7 && VAR_7->oid) {
  git_oid VAR_9;

  FUNC_0(&VAR_9, VAR_7->oid);

  if (FUNC_1(&VAR_9, VAR_5, VAR_6) == 0) {
   if (VAR_8)
    return VAR_0;
   VAR_8 = VAR_7;
  }

  VAR_7++;
 }

 if (VAR_8 && VAR_3)
  *VAR_3 = VAR_8;

 return VAR_8 ? VAR_2 : VAR_1;
}
