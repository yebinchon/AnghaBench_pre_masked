
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_gid_table {unsigned int sz; int default_gid_indices; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct ib_device *VAR_0, u8 VAR_1,
          struct ib_gid_table *VAR_2)
{
 unsigned int VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 VAR_5 = FUNC_1(VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_5 && VAR_3 < VAR_2->sz; VAR_3++)
  VAR_2->default_gid_indices |= FUNC_0(VAR_3);
}
