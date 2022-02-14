
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int data; } ;
struct ishtp_cl_rb {TYPE_1__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;

int FUNC_1(struct ishtp_cl_rb *VAR_3, size_t VAR_4)
{
 if (!VAR_3)
  return -VAR_0;

 if (VAR_4 == 0)
  return 0;

 VAR_3->buffer.data = FUNC_0(VAR_4, VAR_2);
 if (!VAR_3->buffer.data)
  return -VAR_1;

 VAR_3->buffer.size = VAR_4;
 return 0;
}
