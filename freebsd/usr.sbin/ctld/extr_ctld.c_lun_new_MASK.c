
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int l_ctl_lun; int l_options; int l_name; struct conf* l_conf; } ;
struct conf {int conf_luns; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lun*,int ) ;
 struct lun* FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,char const*) ;
 struct lun* FUNC_6 (struct conf*,char const*) ;

struct lun *
FUNC_7(struct conf *VAR_1, const char *VAR_2)
{
 struct lun *VAR_3;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_5("duplicated lun \"%s\"", VAR_2);
  return (((void*)0));
 }

 VAR_3 = FUNC_2(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_4(1, "calloc");
 VAR_3->l_conf = VAR_1;
 VAR_3->l_name = FUNC_3(VAR_2);
 FUNC_0(&VAR_3->l_options);
 FUNC_1(&VAR_1->conf_luns, VAR_3, VAR_0);
 VAR_3->l_ctl_lun = -1;

 return (VAR_3);
}
