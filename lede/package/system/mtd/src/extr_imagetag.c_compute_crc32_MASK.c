
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t ssize_t ;
typedef int readbuf ;
typedef size_t off_t ;


 int FUNC_0 (int ,int *,size_t) ;
 size_t FUNC_1 (int,int *,size_t,size_t) ;

uint32_t FUNC_2(uint32_t VAR_0, off_t VAR_1, size_t VAR_2, int VAR_3)
{
 uint8_t VAR_4[1024];
 ssize_t VAR_5;
 off_t VAR_6 = VAR_1;


 while (VAR_3 && (VAR_2 >= sizeof(VAR_4))) {
  VAR_5 = FUNC_1(VAR_3, VAR_4, sizeof(VAR_4), VAR_6);
  VAR_0 = FUNC_0(VAR_0, VAR_4, VAR_5);
  VAR_2 = VAR_2 - VAR_5;
  VAR_6 += VAR_5;
 }


 if (VAR_3 && (VAR_2 > 0)) {
   VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2, VAR_6);
   VAR_0 = FUNC_0(VAR_0, VAR_4, VAR_5);
 }

 return VAR_0;
}
