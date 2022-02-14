
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct repository*,struct object_id const*,char const**) ;
 void* FUNC_6 (int *,unsigned long,int ,int ,int,int ) ;
 unsigned long FUNC_7 (int ) ;

__attribute__((used)) static void *FUNC_8(struct repository *VAR_2, const char *VAR_3,
        const struct object_id *VAR_4, unsigned long *VAR_5)
{
 void *VAR_6;
 int VAR_7;

 if (VAR_3)
  VAR_7 = FUNC_4(VAR_3);
 else
  VAR_7 = FUNC_5(VAR_2, VAR_4, &VAR_3);
 VAR_6 = ((void*)0);
 if (VAR_7 >= 0) {
  struct stat VAR_8;

  if (!FUNC_3(VAR_7, &VAR_8)) {
   *VAR_5 = FUNC_7(VAR_8.st_size);
   if (!*VAR_5) {

    FUNC_2(FUNC_0("object file %s is empty"), VAR_3);
    FUNC_1(VAR_7);
    return ((void*)0);
   }
   VAR_6 = FUNC_6(((void*)0), *VAR_5, VAR_1, VAR_0, VAR_7, 0);
  }
  FUNC_1(VAR_7);
 }
 return VAR_6;
}
