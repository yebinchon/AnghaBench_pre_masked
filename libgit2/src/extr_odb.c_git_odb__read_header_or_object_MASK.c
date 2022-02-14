
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_6__ {size_t size; int type; } ;
struct TYPE_7__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_odb_object ;
typedef int git_odb ;
typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 TYPE_2__* FUNC_2 (int ,int const*) ;
 int FUNC_3 (char*,int const*,int ) ;
 int FUNC_4 (TYPE_2__**,int *,int const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (size_t*,int *,int *,int const*,int) ;

int FUNC_9(
 git_odb_object **VAR_3, size_t *VAR_4, git_object_t *VAR_5,
 git_odb *VAR_6, const git_oid *VAR_7)
{
 int VAR_8 = VAR_0;
 git_odb_object *VAR_9;

 FUNC_0(VAR_6 && VAR_7 && VAR_3 && VAR_4 && VAR_5);

 *VAR_3 = ((void*)0);

 if (FUNC_6(VAR_7))
  return FUNC_1(VAR_0, "cannot read object");

 if ((VAR_9 = FUNC_2(FUNC_7(VAR_6), VAR_7)) != ((void*)0)) {
  *VAR_4 = VAR_9->cached.size;
  *VAR_5 = VAR_9->cached.type;
  *VAR_3 = VAR_9;
  return 0;
 }

 VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, 0);

 if (VAR_8 == VAR_0 && !FUNC_5(VAR_6))
  VAR_8 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, 1);

 if (VAR_8 == VAR_0)
  return FUNC_3("cannot read header for", VAR_7, VAR_1);


 if (!VAR_8)
  return 0;

 if (VAR_8 == VAR_2) {




  VAR_8 = FUNC_4(&VAR_9, VAR_6, VAR_7);
  if (!VAR_8) {
   *VAR_4 = VAR_9->cached.size;
   *VAR_5 = VAR_9->cached.type;
   *VAR_3 = VAR_9;
  }
 }

 return VAR_8;
}
