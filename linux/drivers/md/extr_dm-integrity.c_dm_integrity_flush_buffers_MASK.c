
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {int bufio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_integrity_c*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct dm_integrity_c *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_0(VAR_0->bufio);
 if (FUNC_2(VAR_1))
  FUNC_1(VAR_0, "writing tags", VAR_1);
}
