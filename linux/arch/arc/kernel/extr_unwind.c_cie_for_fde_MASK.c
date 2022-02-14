
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct unwind_table {int dummy; } ;


 int const VAR_0 ;
 int* FUNC_0 (int const*) ;
 int const VAR_1 ;
 int const VAR_2 ;

__attribute__((used)) static const u32 *FUNC_1(const u32 *VAR_3, const struct unwind_table *VAR_4)
{
 const u32 *VAR_5;

 if (!*VAR_3 || (*VAR_3 & (sizeof(*VAR_3) - 1)))
  return &VAR_1;

 if (VAR_3[1] == VAR_0)
  return &VAR_2;

 if ((VAR_3[1] & (sizeof(*VAR_3) - 1)))

  return ((void*)0);

 VAR_5 = FUNC_0(VAR_3);

 if (*VAR_5 <= sizeof(*VAR_5) + 4 || *VAR_5 >= VAR_3[1] - sizeof(*VAR_3)
     || (*VAR_5 & (sizeof(*VAR_5) - 1))
     || (VAR_5[1] != VAR_0))
  return ((void*)0);
 return VAR_5;
}
