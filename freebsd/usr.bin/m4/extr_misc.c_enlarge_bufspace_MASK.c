
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char** VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 int VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned char* FUNC_0 (unsigned char*,int,char*) ;

void
FUNC_1(void)
{
 unsigned char *VAR_7;
 int VAR_8;

 VAR_5 += VAR_5/2;
 VAR_7 = FUNC_0(VAR_3, VAR_5, "too many characters pushed back");
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_1[VAR_8] = (VAR_1[VAR_8]-VAR_3)+VAR_7;
 VAR_2 = (VAR_2-VAR_3)+VAR_7;
 VAR_4 = (VAR_4-VAR_3)+VAR_7;
 VAR_3 = VAR_7;
 VAR_6 = VAR_3+VAR_5;
}
