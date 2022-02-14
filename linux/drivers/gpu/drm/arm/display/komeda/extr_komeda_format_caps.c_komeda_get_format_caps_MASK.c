
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct komeda_format_caps_table {int n_formats; struct komeda_format_caps* format_caps; } ;
struct komeda_format_caps {scalar_t__ fourcc; scalar_t__ supported_afbc_layouts; int supported_afbc_features; } ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long long,int ) ;

const struct komeda_format_caps *
FUNC_2(struct komeda_format_caps_table *VAR_1,
         u32 VAR_2, u64 VAR_3)
{
 const struct komeda_format_caps *VAR_4;
 u64 VAR_5 = VAR_3 & ~(VAR_0);
 u32 VAR_6 = VAR_3 & VAR_0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1->n_formats; VAR_7++) {
  VAR_4 = &VAR_1->format_caps[VAR_7];

  if (VAR_2 != VAR_4->fourcc)
   continue;

  if ((VAR_3 == 0ULL) && (VAR_4->supported_afbc_layouts == 0))
   return VAR_4;

  if (FUNC_1(VAR_5, VAR_4->supported_afbc_features) &&
      FUNC_0(VAR_6, VAR_4->supported_afbc_layouts))
   return VAR_4;
 }

 return ((void*)0);
}
