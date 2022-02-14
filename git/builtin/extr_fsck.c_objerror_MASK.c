
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct object*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,char const*) ;
 int FUNC_3 (struct object*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct object *VAR_3, const char *VAR_4)
{
 VAR_1 |= VAR_0;

 FUNC_2(VAR_2, FUNC_0("error in %s %s: %s"),
     FUNC_3(VAR_3), FUNC_1(VAR_3), VAR_4);
 return -1;
}
