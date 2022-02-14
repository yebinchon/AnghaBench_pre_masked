
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_gid_table {int default_gid_indices; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(const struct ib_gid_table *VAR_0,
     unsigned int VAR_1)
{
 return VAR_1 < 32 && (FUNC_0(VAR_1) & VAR_0->default_gid_indices);
}
