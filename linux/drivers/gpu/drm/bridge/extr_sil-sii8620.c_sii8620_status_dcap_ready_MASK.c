
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int* stat; int mode; } ;
typedef enum sii8620_mode { ____Placeholder_sii8620_mode } sii8620_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sii8620*) ;
 int FUNC_1 (struct sii8620*,int) ;
 int FUNC_2 (struct sii8620*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sii8620 *VAR_7)
{
 enum sii8620_mode VAR_8;

 VAR_8 = VAR_7->stat[VAR_5] >= 0x30 ? VAR_4 : VAR_3;
 if (VAR_8 > VAR_7->mode)
  FUNC_1(VAR_7, VAR_8);
 FUNC_0(VAR_7);
 FUNC_2(VAR_7, VAR_6, VAR_0
        | VAR_1 | VAR_2);
}
