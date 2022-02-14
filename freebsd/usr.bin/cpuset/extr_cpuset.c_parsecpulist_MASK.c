
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitset {int dummy; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int,int,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,struct bitset*,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_4, cpuset_t *VAR_5)
{

 if (FUNC_3(VAR_4, "all") == 0) {
  if (FUNC_0(VAR_0, VAR_2, -1,
      sizeof(*VAR_5), VAR_5) != 0)
   FUNC_1(VAR_3, "getaffinity");
  return;
 }
 FUNC_2(VAR_4, (struct bitset *)VAR_5, VAR_1);
}
