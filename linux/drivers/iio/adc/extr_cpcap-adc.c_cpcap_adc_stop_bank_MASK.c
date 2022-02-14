
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_adc {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct cpcap_adc *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->reg, VAR_0,
       0xffff,
       VAR_1);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_4->reg, VAR_2,
      0xffff,
      VAR_3);
}
