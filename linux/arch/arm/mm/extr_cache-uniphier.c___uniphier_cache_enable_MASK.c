
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_cache_data {scalar_t__ ctrl_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uniphier_cache_data *VAR_4, bool VAR_5)
{
 u32 VAR_6 = 0;

 if (VAR_5)
  VAR_6 = VAR_3 | VAR_2 | VAR_1;

 FUNC_0(VAR_6, VAR_4->ctrl_base + VAR_0);
}
