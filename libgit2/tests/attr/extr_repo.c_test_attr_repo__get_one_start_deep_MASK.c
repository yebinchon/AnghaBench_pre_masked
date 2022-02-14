
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_expected {int attr; int expected_str; int expected; int path; } ;


 scalar_t__ FUNC_0 (struct attr_expected*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 struct attr_expected* VAR_2 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (char const**,int ,int ,int ,int ) ;

void FUNC_6(void)
{
 int VAR_3;

 for (VAR_3 = (int)FUNC_0(VAR_2) - 1; VAR_3 >= 0; --VAR_3) {
  struct attr_expected *VAR_4 = &VAR_2[VAR_3];
  const char *VAR_5;

  FUNC_3(FUNC_5(&VAR_5, VAR_1, 0, VAR_4->path, VAR_4->attr));
  FUNC_1(
   VAR_4->expected, VAR_4->expected_str, VAR_4->attr, VAR_5);
 }

 FUNC_2(FUNC_4(
  VAR_1, VAR_0, ".git/info/attributes"));
 FUNC_2(FUNC_4(
  VAR_1, VAR_0, ".gitattributes"));
 FUNC_2(FUNC_4(
  VAR_1, VAR_0, "sub/.gitattributes"));
}
