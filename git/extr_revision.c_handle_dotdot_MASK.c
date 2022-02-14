
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct object_context {int path; } ;
typedef int b_oc ;
typedef int a_oc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,struct rev_info*,int,int,struct object_context*,struct object_context*) ;
 int FUNC_2 (struct object_context*,int ,int) ;
 char* FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0,
    struct rev_info *VAR_1, int VAR_2,
    int VAR_3)
{
 struct object_context VAR_4, VAR_5;
 char *VAR_6 = FUNC_3(VAR_0, "..");
 int VAR_7;

 if (!VAR_6)
  return -1;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 *VAR_6 = '\0';
 VAR_7 = FUNC_1(VAR_0, VAR_6, VAR_1, VAR_2, VAR_3,
         &VAR_4, &VAR_5);
 *VAR_6 = '.';

 FUNC_0(VAR_4.path);
 FUNC_0(VAR_5.path);

 return VAR_7;
}
