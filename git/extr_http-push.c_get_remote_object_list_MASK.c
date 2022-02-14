
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (char*,int,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_4)
{
 char VAR_5[] = "objects/XX/";
 static const char VAR_6[] = "0123456789abcdef";
 unsigned int VAR_7 = VAR_4;

 VAR_5[8] = VAR_6[VAR_7 >> 4];
 VAR_5[9] = VAR_6[VAR_7 & 0xf];
 VAR_3[VAR_7] = 0;
 FUNC_0(VAR_5, (VAR_1 | VAR_0),
    VAR_2, &VAR_7);
}
