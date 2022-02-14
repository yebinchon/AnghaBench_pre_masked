
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int buffer_mng_waitq; } ;
struct smscore_buffer_t {int dummy; } ;


 struct smscore_buffer_t* FUNC_0 (struct smscore_device_t*) ;
 int FUNC_1 (int ,struct smscore_buffer_t*) ;

struct smscore_buffer_t *FUNC_2(struct smscore_device_t *VAR_0)
{
 struct smscore_buffer_t *VAR_1 = ((void*)0);

 FUNC_1(VAR_0->buffer_mng_waitq, (VAR_1 = FUNC_0(VAR_0)));

 return VAR_1;
}
