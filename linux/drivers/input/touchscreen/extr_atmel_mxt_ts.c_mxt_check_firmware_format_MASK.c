
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {unsigned int size; char* data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
         const struct firmware *VAR_2)
{
 unsigned int VAR_3 = 0;
 char VAR_4;

 while (VAR_3 < VAR_2->size) {
  VAR_4 = *(VAR_2->data + VAR_3);

  if (VAR_4 < '0' || (VAR_4 > '9' && VAR_4 < 'A') || VAR_4 > 'F')
   return 0;

  VAR_3++;
 }





 FUNC_0(VAR_1, "Aborting: firmware file must be in binary format\n");

 return -VAR_0;
}
