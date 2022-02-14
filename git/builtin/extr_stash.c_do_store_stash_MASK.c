
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct object_id const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int ,struct object_id const*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct object_id *VAR_5, const char *VAR_6,
     int VAR_7)
{
 if (!VAR_6)
  VAR_6 = "Created via \"git stash store\".";

 if (FUNC_3(VAR_6, VAR_3, VAR_5, ((void*)0),
         VAR_0,
         VAR_7 ? VAR_2 :
         VAR_1)) {
  if (!VAR_7) {
   FUNC_1(VAR_4, FUNC_0("Cannot update %s with %s"),
       VAR_3, FUNC_2(VAR_5));
  }
  return -1;
 }

 return 0;
}
