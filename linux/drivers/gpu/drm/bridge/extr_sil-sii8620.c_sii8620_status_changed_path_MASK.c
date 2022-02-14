
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int* stat; scalar_t__ use_packed_pixel; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sii8620*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sii8620 *VAR_5)
{
 u8 VAR_6;

 if (VAR_5->use_packed_pixel)
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 if (VAR_5->stat[VAR_1] & VAR_4)
  VAR_6 |= VAR_4;

 FUNC_1(VAR_5, FUNC_0(VAR_0),
         VAR_6);
}
