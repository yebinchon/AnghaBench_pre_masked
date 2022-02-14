
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_validity {scalar_t__ sd; } ;
struct stat_data {int dummy; } ;
struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct stat*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (struct stat_validity*) ;
 scalar_t__ FUNC_4 (int,int) ;

void FUNC_5(struct stat_validity *VAR_0, int VAR_1)
{
 struct stat VAR_2;

 if (FUNC_2(VAR_1, &VAR_2) < 0 || !FUNC_0(VAR_2.st_mode))
  FUNC_3(VAR_0);
 else {
  if (!VAR_0->sd)
   VAR_0->sd = FUNC_4(1, sizeof(struct stat_data));
  FUNC_1(VAR_0->sd, &VAR_2);
 }
}
