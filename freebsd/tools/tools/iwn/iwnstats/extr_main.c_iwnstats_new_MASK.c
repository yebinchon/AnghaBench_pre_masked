
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwnstats {scalar_t__ s; } ;
typedef int buf ;


 int VAR_0 ;
 struct iwnstats* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static struct iwnstats *
FUNC_4(const char *VAR_1)
{
 struct iwnstats *VAR_2;
 char VAR_3[128];

 VAR_2 = FUNC_0(1, sizeof(struct iwnstats));
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_3(VAR_3, sizeof(VAR_3), "/dev/%s", VAR_1);
 VAR_2->s = FUNC_2(VAR_3, VAR_0);
 if (VAR_2->s < 0)
  FUNC_1(1, "open");

 return (VAR_2);
}
