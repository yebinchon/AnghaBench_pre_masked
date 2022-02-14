
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,int*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (char const*,char const*,struct wt_status*) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_6 (char const*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(const char *VAR_5, const char *VAR_6, void *VAR_7)
{
 struct wt_status *VAR_8 = VAR_7;
 int VAR_9;

 if (!FUNC_6(VAR_5, "commit.template"))
  return FUNC_2(&VAR_4, VAR_5, VAR_6);
 if (!FUNC_6(VAR_5, "commit.status")) {
  VAR_2 = FUNC_0(VAR_5, VAR_6);
  return 0;
 }
 if (!FUNC_6(VAR_5, "commit.cleanup"))
  return FUNC_3(&VAR_0, VAR_5, VAR_6);
 if (!FUNC_6(VAR_5, "commit.gpgsign")) {
  VAR_3 = FUNC_0(VAR_5, VAR_6) ? "" : ((void*)0);
  return 0;
 }
 if (!FUNC_6(VAR_5, "commit.verbose")) {
  int VAR_10;
  VAR_1 = FUNC_1(VAR_5, VAR_6, &VAR_10);
  return 0;
 }

 VAR_9 = FUNC_4(VAR_5, VAR_6, ((void*)0));
 if (VAR_9)
  return VAR_9;
 return FUNC_5(VAR_5, VAR_6, VAR_8);
}
