
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int dummy; } ;
struct object_id {int dummy; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct object_id const*,int,int ,int,int,struct packed_git*,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct object_id const*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int VAR_3 ;
 int FUNC_6 (struct object_id const*,int,struct packed_git**,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_5, enum object_type VAR_6,
       const char *VAR_7, int VAR_8)
{
 struct packed_git *VAR_9 = ((void*)0);
 off_t VAR_10 = 0;

 FUNC_2(VAR_3, ++VAR_2);

 if (FUNC_3(VAR_5, VAR_8))
  return 0;

 if (!FUNC_6(VAR_5, VAR_8, &VAR_9, &VAR_10)) {

  if (VAR_4) {
   if (VAR_4 != VAR_0)
    FUNC_7(FUNC_0(VAR_1));
   VAR_4 = 0;
  }
  return 0;
 }

 FUNC_1(VAR_5, VAR_6, FUNC_5(VAR_7),
       VAR_8, VAR_7 && FUNC_4(VAR_7),
       VAR_9, VAR_10);
 return 1;
}
