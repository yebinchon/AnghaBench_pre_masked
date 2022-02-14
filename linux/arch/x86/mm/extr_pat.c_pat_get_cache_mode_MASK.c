
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static enum page_cache_mode FUNC_2(unsigned VAR_6, char *VAR_7)
{
 enum page_cache_mode VAR_8;
 char *VAR_9;

 switch (VAR_6) {
 case 133: VAR_8 = FUNC_0(VAR_0); VAR_9 = "UC  "; break;
 case 130: VAR_8 = FUNC_0(VAR_3); VAR_9 = "WC  "; break;
 case 128: VAR_8 = FUNC_0(VAR_5); VAR_9 = "WT  "; break;
 case 129: VAR_8 = FUNC_0(VAR_4); VAR_9 = "WP  "; break;
 case 131: VAR_8 = FUNC_0(VAR_2); VAR_9 = "WB  "; break;
 case 132: VAR_8 = FUNC_0(VAR_1); VAR_9 = "UC- "; break;
 default: VAR_8 = FUNC_0(VAR_2); VAR_9 = "WB  "; break;
 }

 FUNC_1(VAR_7, VAR_9, 4);

 return VAR_8;
}
