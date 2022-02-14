
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;


 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int VAR_0 ;

int FUNC_3(struct repository *VAR_1,
     struct strbuf *VAR_2)
{
 if (VAR_2) {
  int VAR_3;
  int VAR_4;
  int VAR_5;

  FUNC_2(VAR_2, "shallow");

  if (!FUNC_1(VAR_0,
      "uploadpack.allowfilter",
      &VAR_3) &&
      VAR_3)
   FUNC_2(VAR_2, " filter");

  if (!FUNC_1(VAR_0,
      "uploadpack.allowrefinwant",
      &VAR_4) &&
      VAR_4)
   FUNC_2(VAR_2, " ref-in-want");

  if (FUNC_0("GIT_TEST_SIDEBAND_ALL", 0) ||
      (!FUNC_1(VAR_0,
        "uploadpack.allowsidebandall",
        &VAR_5) &&
       VAR_5))
   FUNC_2(VAR_2, " sideband-all");
 }

 return 1;
}
