
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct komeda_format_caps_table {int n_formats; struct komeda_format_caps* format_caps; } ;
struct komeda_format_caps {scalar_t__ supported_layer_types; scalar_t__ fourcc; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int,int,int ) ;

u32 *FUNC_1(struct komeda_format_caps_table *VAR_1,
      u32 VAR_2, u32 *VAR_3)
{
 const struct komeda_format_caps *VAR_4;
 u32 *VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0;

 VAR_5 = FUNC_0(VAR_1->n_formats, sizeof(u32), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_1->n_formats; VAR_6++) {
  VAR_4 = &VAR_1->format_caps[VAR_6];
  if (!(VAR_2 & VAR_4->supported_layer_types) ||
      (VAR_4->fourcc == 0))
   continue;




  for (VAR_7 = VAR_8 - 1; VAR_7 >= 0; VAR_7--)
   if (VAR_5[VAR_7] == VAR_4->fourcc)
    break;

  if (VAR_7 < 0)
   VAR_5[VAR_8++] = VAR_4->fourcc;
 }

 if (VAR_3)
  *VAR_3 = VAR_8;

 return VAR_5;
}
