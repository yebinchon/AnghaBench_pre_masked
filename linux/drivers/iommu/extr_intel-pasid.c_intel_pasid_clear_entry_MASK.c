
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_entry {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct pasid_entry* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct pasid_entry*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, int VAR_1)
{
 struct pasid_entry *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(!VAR_2))
  return;

 FUNC_2(VAR_2);
}
