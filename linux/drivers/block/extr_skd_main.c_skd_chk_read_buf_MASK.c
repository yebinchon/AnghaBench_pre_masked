
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_special_context {unsigned char* data_buf; } ;
struct skd_device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct skd_device *VAR_1,
       struct skd_special_context *VAR_2)
{
 unsigned char *VAR_3 = VAR_2->data_buf;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3[VAR_4] != (VAR_4 & 0xFF))
   return 1;

 return 0;
}
