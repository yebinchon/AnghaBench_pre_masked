
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int dummy; } ;
struct commit {int dummy; } ;


 char* FUNC_0 (int,char const**,char const*,struct commit const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char const*,char const*,int ,struct wt_status*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1, const char **VAR_2, const char *VAR_3,
     const struct commit *VAR_4, struct wt_status *VAR_5)
{
 int VAR_6;
 const char *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 1);
 VAR_6 = FUNC_2(VAR_0, VAR_7, VAR_3, 0, VAR_5);
 FUNC_1();

 return VAR_6 ? 0 : 1;
}
