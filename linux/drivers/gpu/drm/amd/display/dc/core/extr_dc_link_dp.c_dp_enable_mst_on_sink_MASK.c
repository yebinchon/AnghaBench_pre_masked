
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct dc_link*,int ,unsigned char*,int) ;
 int FUNC_1 (struct dc_link*,int ,unsigned char*,int) ;

void FUNC_2(struct dc_link *VAR_2, bool VAR_3)
{
 unsigned char VAR_4;

 FUNC_0(VAR_2, VAR_0, &VAR_4, 1);
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= (~VAR_1);

 FUNC_1(VAR_2, VAR_0, &VAR_4, 1);
}
