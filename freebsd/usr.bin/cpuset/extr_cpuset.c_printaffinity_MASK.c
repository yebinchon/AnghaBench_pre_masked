
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitset {int dummy; } ;
typedef int mask ;
typedef int intmax_t ;
typedef int domainset_t ;
typedef int domain ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (size_t,size_t,scalar_t__,int,int *) ;
 scalar_t__ FUNC_1 (size_t,size_t,scalar_t__,int,int *,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (char*,char*,int ,int ,...) ;
 int FUNC_5 (struct bitset*,int ) ;
 size_t VAR_9 ;
 char** VAR_10 ;

__attribute__((used)) static void
FUNC_6(void)
{
 domainset_t VAR_11;
 cpuset_t VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_6, VAR_9, VAR_5, sizeof(VAR_12), &VAR_12) != 0)
  FUNC_2(VAR_2, "getaffinity");
 FUNC_4("%s %jd%s mask: ", VAR_10[VAR_9], (intmax_t)VAR_5,
     VAR_7[VAR_6]);
 FUNC_5((struct bitset *)&VAR_12, VAR_0);
 if (VAR_4)
  goto out;
 if (FUNC_1(VAR_6, VAR_9, VAR_5, sizeof(VAR_11), &VAR_11,
     &VAR_13) != 0)
  FUNC_2(VAR_2, "getdomain");
 FUNC_4("%s %jd%s domain policy: %s mask: ", VAR_10[VAR_9],
     (intmax_t)VAR_5, VAR_7[VAR_6], VAR_8[VAR_13]);
 FUNC_5((struct bitset *)&VAR_11, VAR_1);
out:
 FUNC_3(VAR_3);
}
