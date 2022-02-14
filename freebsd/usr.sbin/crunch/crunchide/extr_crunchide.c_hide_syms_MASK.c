
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* check ) (int,char const*) ;char* name; int (* hide ) (int,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,char const*) ;
 int FUNC_6 (int,char const*) ;
 scalar_t__ VAR_4 ;

int
FUNC_7(const char *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_3(VAR_5, VAR_0, 0);
 if (VAR_6 == -1) {
  FUNC_4(VAR_5);
  return 1;
 }

 VAR_9 = 0;

        VAR_8 = sizeof VAR_2 / sizeof VAR_2[0];
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (FUNC_2(VAR_6, 0, VAR_1) != 0) {
   FUNC_4(VAR_5);
   goto err;
  }
                if ((*VAR_2[VAR_7].check)(VAR_6, VAR_5) != 0)
                        break;
 }
 if (VAR_7 == VAR_8) {
  FUNC_1(VAR_3, "%s: unknown executable format\n", VAR_5);
  goto err;
 }

 if (VAR_4)
  FUNC_1(VAR_3, "%s is an %s binary\n", VAR_5,
      VAR_2[VAR_7].name);

 if (FUNC_2(VAR_6, 0, VAR_1) != 0) {
  FUNC_4(VAR_5);
  goto err;
 }
 VAR_9 = (*VAR_2[VAR_7].hide)(VAR_6, VAR_5);

out:
 FUNC_0 (VAR_6);
 return (VAR_9);

err:
 VAR_9 = 1;
 goto out;
}
