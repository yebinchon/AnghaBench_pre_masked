
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* text; } ;
typedef TYPE_1__ message ;


 double VAR_0 ;
 double FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4 (message *VAR_3, int VAR_4) {
  if (FUNC_3 (VAR_3, VAR_4) < 0) {
    return -1;
  }

  if (VAR_2 > 2) {
    FUNC_2 (VAR_1, "bayes_is_spam\n%s\n", VAR_3->text);
  }
  FUNC_1 ("CHECK: <%s>\n", VAR_3->text);

  double VAR_5 = FUNC_0 (VAR_3, VAR_4);

  FUNC_1 ("RES: %.9lf\n", VAR_5);
  FUNC_1 ("%s\n", VAR_5 > VAR_0 ? "spam" : "ham");

  if (VAR_5 < -1.99999) {
    return -2;
  }

  return VAR_5 > VAR_0;
}
