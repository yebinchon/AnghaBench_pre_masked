
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xinpgen {int dummy; } ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char*,...) ;
 struct xinpgen* FUNC_2 (size_t) ;
 int FUNC_3 (char const*,struct xinpgen*,size_t*,int *,int ) ;

__attribute__((used)) static struct xinpgen *
FUNC_4(const char *VAR_0)
{
 struct xinpgen *VAR_1;
 size_t VAR_2;
 int VAR_3;

 VAR_2 = 0;
 VAR_3 = FUNC_3(VAR_0, ((void*)0), &VAR_2, ((void*)0), 0);
 if (VAR_3 == -1)
  FUNC_0(1, "sysctlbyname %s", VAR_0);

 if (VAR_2 == 0)
  FUNC_1(1, "%s is empty", VAR_0);

 VAR_1 = FUNC_2(VAR_2);
 if (VAR_1 == ((void*)0))
  FUNC_1(1, "malloc failed");

 VAR_3 = FUNC_3(VAR_0, VAR_1, &VAR_2, ((void*)0), 0);
 if (VAR_3 == -1)
  FUNC_0(1, "sysctlbyname %s", VAR_0);

 return (VAR_1);
}
