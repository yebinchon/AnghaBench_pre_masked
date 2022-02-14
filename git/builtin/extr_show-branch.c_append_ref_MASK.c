
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct commit* FUNC_1 (int ,struct object_id const*,int) ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,char const*,int) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, const struct object_id *VAR_5,
        int VAR_6)
{
 struct commit *VAR_7 = FUNC_1(VAR_3,
              VAR_5, 1);
 int VAR_8;

 if (!VAR_7)
  return 0;

 if (!VAR_6) {

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   if (!FUNC_2(VAR_4, VAR_1[VAR_8]))
    return 0;
 }
 if (VAR_0 <= VAR_2) {
  FUNC_3(FUNC_0("ignoring %s; cannot handle more than %d ref",
      "ignoring %s; cannot handle more than %d refs",
      VAR_0), VAR_4, VAR_0);
  return 0;
 }
 VAR_1[VAR_2++] = FUNC_4(VAR_4);
 VAR_1[VAR_2] = ((void*)0);
 return 0;
}
