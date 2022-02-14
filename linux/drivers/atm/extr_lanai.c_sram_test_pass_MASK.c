
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lanai_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lanai_dev const*,int,int ) ;

__attribute__((used)) static int FUNC_1(const struct lanai_dev *VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_4 == 0; VAR_3 += 4)
  VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);
 return VAR_4;
}
