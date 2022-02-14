
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {int failed; int number_of_mismatches; } ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dm_integrity_c *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_3 == -VAR_0)
  FUNC_1(&VAR_1->number_of_mismatches);
 if (!FUNC_2(&VAR_1->failed, 0, VAR_3))
  FUNC_0("Error on %s: %d", VAR_2, VAR_3);
}
