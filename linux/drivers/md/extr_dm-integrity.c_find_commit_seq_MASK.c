
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {int dummy; } ;
typedef scalar_t__ commit_id_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (struct dm_integrity_c*,unsigned int,unsigned int,unsigned char) ;
 int FUNC_1 (struct dm_integrity_c*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dm_integrity_c *VAR_2, unsigned VAR_3, unsigned VAR_4, commit_id_t VAR_5)
{
 unsigned char VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6) == VAR_5)
   return VAR_6;
 }
 FUNC_1(VAR_2, "journal commit id", -VAR_0);
 return -VAR_0;
}
