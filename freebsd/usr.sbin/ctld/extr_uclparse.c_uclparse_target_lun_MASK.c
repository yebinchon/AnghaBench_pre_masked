
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct target {struct lun** t_luns; int t_name; } ;
struct lun {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char**,char*,int ,size_t) ;
 int VAR_4 ;
 int FUNC_1 (char*,size_t,...) ;
 struct lun* FUNC_2 (int ,int ) ;
 struct lun* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct lun*,char*) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,char*) ;
 size_t FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_8(struct target *VAR_5, const ucl_object_t *VAR_6)
{
 struct lun *VAR_7;
 uint64_t VAR_8;

 if (VAR_6->type == VAR_1) {
  char *VAR_9;

  VAR_8 = FUNC_6(VAR_6);
  if (VAR_8 >= VAR_0) {
   FUNC_1("LU number %ju in target \"%s\" is too big",
       VAR_8, VAR_5->t_name);
   return (1);
  }

  FUNC_0(&VAR_9, "%d,lun,%ju", VAR_5->t_name, VAR_8);
  VAR_7 = FUNC_3(VAR_4, VAR_9);
  if (VAR_7 == ((void*)0))
   return (1);

  FUNC_4(VAR_7, VAR_9);
  VAR_5->t_luns[VAR_8] = VAR_7;
  return (0);
 }

 if (VAR_6->type == VAR_2) {
  const ucl_object_t *VAR_10 = FUNC_5(VAR_6, "number");
  const ucl_object_t *VAR_11 = FUNC_5(VAR_6, "name");

  if (VAR_10 == ((void*)0) || VAR_10->type != VAR_1) {
   FUNC_1("lun section in target \"%s\" is missing "
       "\"number\" integer property", VAR_5->t_name);
   return (1);
  }
  VAR_8 = FUNC_6(VAR_10);
  if (VAR_8 >= VAR_0) {
   FUNC_1("LU number %ju in target \"%s\" is too big",
       VAR_8, VAR_5->t_name);
   return (1);
  }

  if (VAR_11 == ((void*)0) || VAR_11->type != VAR_3) {
   FUNC_1("lun section in target \"%s\" is missing "
       "\"name\" string property", VAR_5->t_name);
   return (1);
  }

  VAR_7 = FUNC_2(VAR_4, FUNC_7(VAR_11));
  if (VAR_7 == ((void*)0))
   return (1);

  VAR_5->t_luns[VAR_8] = VAR_7;
 }

 return (0);
}
