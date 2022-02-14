
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object_id const*,int ,void*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 struct object* FUNC_2 (int ,struct object_id const*) ;
 int FUNC_3 (struct object_id const*) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_4,
       const char *VAR_5, void *VAR_6)
{
 struct stat VAR_7;
 struct object *VAR_8 = FUNC_2(VAR_3, VAR_4);

 if (VAR_8 && VAR_8->flags & VAR_1)
  return 0;

 if (FUNC_4(VAR_5, &VAR_7) < 0) {






  if (VAR_2 == VAR_0)
   return 0;
  return FUNC_1("unable to stat %s", FUNC_3(VAR_4));
 }

 FUNC_0(VAR_4, VAR_7.st_mtime, VAR_6);
 return 0;
}
