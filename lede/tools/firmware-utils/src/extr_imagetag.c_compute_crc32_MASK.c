
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int readbuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *,int,size_t,int *) ;
 int FUNC_4 (int *,size_t,int ) ;

uint32_t FUNC_5(uint32_t VAR_1, FILE *VAR_2, size_t VAR_3, size_t VAR_4)
{
 uint8_t VAR_5[1024];
 size_t VAR_6;

 FUNC_4(VAR_2, VAR_3, VAR_0);


 while (VAR_2 && !FUNC_1(VAR_2) && !FUNC_2(VAR_2) && (VAR_4 >= sizeof(VAR_5))) {
  VAR_6 = FUNC_3(VAR_5, sizeof(uint8_t), sizeof(VAR_5), VAR_2);
  VAR_1 = FUNC_0(VAR_1, VAR_5, VAR_6);
  VAR_4 = VAR_4 - VAR_6;
 }


 if (VAR_2 && !FUNC_1(VAR_2) && !FUNC_2(VAR_2) && (VAR_4 > 0)) {
  VAR_6 = FUNC_3(VAR_5, sizeof(uint8_t), VAR_4, VAR_2);
  VAR_1 = FUNC_0(VAR_1, VAR_5, VAR_6);
 }

 return VAR_1;
}
