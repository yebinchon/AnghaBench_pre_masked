
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etmv4_config {int * addr_type; } ;
struct etmv4_drvdata {int nr_addr_cmp; struct etmv4_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int FUNC_0(struct etmv4_drvdata *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct etmv4_config *VAR_7 = &VAR_3->config;





 VAR_5 = VAR_3->nr_addr_cmp * 2;


 while (VAR_6 < VAR_5) {
  switch (VAR_4) {
  case 130:
   if (VAR_7->addr_type[VAR_6] == VAR_2 &&
       VAR_7->addr_type[VAR_6 + 1] == VAR_2)
    return VAR_6;


   VAR_6 += 2;
   break;
  case 129:
  case 128:
   if (VAR_7->addr_type[VAR_6] == VAR_2)
    return VAR_6;


   VAR_6 += 1;
   break;
  default:
   return -VAR_0;
  }
 }


 return -VAR_1;
}
