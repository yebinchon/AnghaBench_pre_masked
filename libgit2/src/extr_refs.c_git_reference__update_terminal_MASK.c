
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const git_signature ;
typedef int git_repository ;
struct TYPE_7__ {char const* symbolic; int oid; } ;
struct TYPE_8__ {char const* name; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__**,int *,char const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int const**,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (TYPE_2__**,int *,char const*,int const*,int *,int,int const*,char const*,int *,int *) ;

int FUNC_8(
 git_repository *VAR_3,
 const char *VAR_4,
 const git_oid *VAR_5,
 const git_signature *VAR_6,
 const char *VAR_7)
{
 git_reference *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 git_signature *VAR_10 = ((void*)0);
 const git_signature *VAR_11;
 int VAR_12 = 0;

 if (!VAR_6 && (VAR_12 = FUNC_3(&VAR_10, VAR_3)) < 0)
  return VAR_12;

 VAR_11 = VAR_6 ? VAR_6 : VAR_10;
 VAR_12 = FUNC_1(&VAR_8, VAR_3, VAR_4, 0);


 if (VAR_12 == VAR_0 && VAR_8) {
  FUNC_0(FUNC_5(VAR_8) == VAR_2);
  FUNC_2();
  VAR_12 = FUNC_7(&VAR_9, VAR_3, VAR_8->target.symbolic, VAR_5, ((void*)0), 0, VAR_11,
       VAR_7, ((void*)0), ((void*)0));
 } else if (VAR_12 == VAR_0) {
  FUNC_2();
  VAR_12 = FUNC_7(&VAR_9, VAR_3, VAR_4, VAR_5, ((void*)0), 0, VAR_11,
       VAR_7, ((void*)0), ((void*)0));
 } else if (VAR_12 == 0) {
  FUNC_0(FUNC_5(VAR_8) == VAR_1);
  VAR_12 = FUNC_7(&VAR_9, VAR_3, VAR_8->name, VAR_5, ((void*)0), 1, VAR_11,
       VAR_7, &VAR_8->target.oid, ((void*)0));
 }

 FUNC_4(VAR_9);
 FUNC_4(VAR_8);
 FUNC_6(VAR_10);
 return VAR_12;
}
