
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {scalar_t__ len; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_2,
        unsigned VAR_3, char **VAR_4,
        char **VAR_5)
{
 int VAR_6, VAR_7;
 char *VAR_8 = ((void*)0);

 *VAR_5 = ((void*)0);




 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_7 += FUNC_3(VAR_4[VAR_6]) + 1;

 VAR_7 += 20;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_8) {
  FUNC_0("Unable to allocate memory for constructor string");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_8, "%llu", (unsigned long long)VAR_2->len);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_7 += FUNC_2(VAR_8 + VAR_7, " %s", VAR_4[VAR_6]);

 *VAR_5 = VAR_8;
 return VAR_7;
}
