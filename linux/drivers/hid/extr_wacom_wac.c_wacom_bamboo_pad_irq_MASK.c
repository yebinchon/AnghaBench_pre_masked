
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {unsigned char* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct wacom_wac*,unsigned char*) ;
 int FUNC_1 (struct wacom_wac*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct wacom_wac *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5 = VAR_3->data;

 if (!((VAR_4 == VAR_0) ||
       (VAR_4 == VAR_1)) ||
     (VAR_5[0] != VAR_2))
  return 0;

 if (VAR_5[1] & 0x01)
  FUNC_0(VAR_3, &VAR_5[1]);

 if (VAR_5[1] & 0x02)
  return FUNC_1(VAR_3, &VAR_5[9]);

 return 0;
}
