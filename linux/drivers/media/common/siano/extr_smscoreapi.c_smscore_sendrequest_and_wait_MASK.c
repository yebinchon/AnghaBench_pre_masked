
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int (* sendrequest_handler ) (int ,void*,size_t) ;int context; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,void*,size_t) ;
 scalar_t__ FUNC_4 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_5(struct smscore_device_t *VAR_3,
  void *VAR_4, size_t VAR_5, struct completion *VAR_6) {
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;
 FUNC_0(VAR_6);

 VAR_7 = VAR_3->sendrequest_handler(VAR_3->context, VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2("sendrequest returned error %d\n", VAR_7);
  return VAR_7;
 }

 return FUNC_4(VAR_6,
   FUNC_1(VAR_2)) ?
   0 : -VAR_1;
}
