
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct da9052*,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct da9052 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, 0x30, 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, 0x33, 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2, 0x33, 0);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
