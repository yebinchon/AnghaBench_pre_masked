
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink {int dummy; } ;
struct bundle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bundle*,char const*) ;
 int FUNC_1 (struct bundle*,int ) ;
 int FUNC_2 (struct datalink*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;

int
FUNC_4(struct bundle *VAR_1, struct datalink *VAR_2,
                     const char *VAR_3)
{
  if (FUNC_0(VAR_1, VAR_3)) {
    FUNC_3(VAR_0, "Clone: %s: name already exists\n", VAR_3);
    return 0;
  }

  FUNC_1(VAR_1, FUNC_2(VAR_2, VAR_3));
  return 1;
}
