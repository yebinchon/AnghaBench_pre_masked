
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

unsigned char FUNC_4(unsigned short VAR_4)
{
 unsigned char VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_3, VAR_6);
 FUNC_1((VAR_4 & 0xff00) >> 8, VAR_1);
 FUNC_1((VAR_4 & 0x00ff), VAR_2);
 VAR_5 = FUNC_0(VAR_0);
 FUNC_3(&VAR_3, VAR_6);

 return VAR_5;
}
