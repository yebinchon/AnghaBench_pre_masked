
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_cvp_conf {int (* write_data ) (struct altera_cvp_conf*,int ) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct altera_cvp_conf*,int ,int*) ;
 int FUNC_1 (struct altera_cvp_conf*,int ,int) ;
 int FUNC_2 (struct altera_cvp_conf*,int ) ;

__attribute__((used)) static void FUNC_3(struct altera_cvp_conf *VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;


 FUNC_0(VAR_4, VAR_1, &VAR_6);
 VAR_6 &= ~VAR_2;
 VAR_6 |= 1 << VAR_3;
 FUNC_1(VAR_4, VAR_1, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->write_data(VAR_4, 0);
}
