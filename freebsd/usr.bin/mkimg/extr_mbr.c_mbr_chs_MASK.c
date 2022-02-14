
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int lba_t ;


 int FUNC_0 (int ,int,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, u_char *VAR_1, u_char *VAR_2, lba_t VAR_3)
{
 u_int VAR_4, VAR_5, VAR_6;

 FUNC_0(VAR_3, 1023, &VAR_4, &VAR_5, &VAR_6);
 *VAR_0 = VAR_4;
 *VAR_1 = VAR_5;
 *VAR_2 = (VAR_6 & 0x3f) | ((VAR_4 >> 2) & 0xc0);
}
