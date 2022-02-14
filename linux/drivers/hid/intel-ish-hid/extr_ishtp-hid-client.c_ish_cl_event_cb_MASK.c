
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct ishtp_cl_rb {size_t buf_idx; TYPE_1__ buffer; } ;
struct ishtp_cl_device {int dummy; } ;
struct ishtp_cl {int dummy; } ;


 int FUNC_0 (struct ishtp_cl_rb*) ;
 struct ishtp_cl_rb* FUNC_1 (struct ishtp_cl*) ;
 struct ishtp_cl* FUNC_2 (struct ishtp_cl_device*) ;
 int FUNC_3 (struct ishtp_cl*,int ,size_t) ;

__attribute__((used)) static void FUNC_4(struct ishtp_cl_device *VAR_0)
{
 struct ishtp_cl *VAR_1 = FUNC_2(VAR_0);
 struct ishtp_cl_rb *VAR_2;
 size_t VAR_3;

 if (!VAR_1)
  return;

 while ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0)) {
  if (!VAR_2->buffer.data)
   return;

  VAR_3 = VAR_2->buf_idx;


  FUNC_3(VAR_1, VAR_2->buffer.data, VAR_3);

  FUNC_0(VAR_2);
 }
}
