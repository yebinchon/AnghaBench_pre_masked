
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct komeda_format_caps_table {int (* format_mod_supported ) (struct komeda_format_caps const*,int,int ,int) ;} ;
struct komeda_format_caps {int supported_layer_types; } ;


 struct komeda_format_caps* FUNC_0 (struct komeda_format_caps_table*,int,int ) ;
 int FUNC_1 (struct komeda_format_caps const*,int,int ,int) ;

bool FUNC_2(struct komeda_format_caps_table *VAR_0,
     u32 VAR_1, u32 VAR_2, u64 VAR_3,
     u32 VAR_4)
{
 const struct komeda_format_caps *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (!VAR_5)
  return 0;

 if (!(VAR_5->supported_layer_types & VAR_1))
  return 0;

 if (VAR_0->format_mod_supported)
  return VAR_0->format_mod_supported(VAR_5, VAR_1, VAR_3,
         VAR_4);

 return 1;
}
