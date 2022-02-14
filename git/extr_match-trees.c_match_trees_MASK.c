
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {scalar_t__ size; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (unsigned short) ;
 void* FUNC_1 (struct tree_desc*,struct object_id const*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct object_id const*,struct object_id const*) ;
 struct object_id* FUNC_4 (struct tree_desc*,char const**,unsigned short*) ;
 int FUNC_5 (struct tree_desc*) ;
 char* FUNC_6 (char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_7(const struct object_id *VAR_0,
   const struct object_id *VAR_1,
   int *VAR_2,
   char **VAR_3,
   const char *VAR_4,
   int VAR_5)
{
 struct tree_desc VAR_6;
 void *VAR_7 = FUNC_1(&VAR_6, VAR_0);

 while (VAR_6.size) {
  const char *VAR_8;
  const struct object_id *VAR_9;
  unsigned short VAR_10;
  int VAR_11;

  VAR_9 = FUNC_4(&VAR_6, &VAR_8, &VAR_10);
  if (!FUNC_0(VAR_10))
   goto next;
  VAR_11 = FUNC_3(VAR_9, VAR_1);
  if (*VAR_2 < VAR_11) {
   FUNC_2(*VAR_3);
   *VAR_3 = FUNC_6("%s%s", VAR_4, VAR_8);
   *VAR_2 = VAR_11;
  }
  if (VAR_5) {
   char *VAR_12 = FUNC_6("%s%s/", VAR_4, VAR_8);
   FUNC_7(VAR_9, VAR_1, VAR_2, VAR_3,
        VAR_12, VAR_5 - 1);
   FUNC_2(VAR_12);
  }

 next:
  FUNC_5(&VAR_6);
 }
 FUNC_2(VAR_7);
}
