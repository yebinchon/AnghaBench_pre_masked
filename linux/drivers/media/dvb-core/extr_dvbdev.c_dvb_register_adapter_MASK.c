
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct dvb_adapter {int num; char const* name; int list_head; int mdev_lock; int mfe_lock; int * mfe_dvbdev; scalar_t__ mfe_shared; struct device* device; struct module* module; int device_list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct dvb_adapter*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char const*) ;

int FUNC_9(struct dvb_adapter *VAR_4, const char *VAR_5,
    struct module *VAR_6, struct device *VAR_7,
    short *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_6(&VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
  VAR_10 = VAR_8[VAR_9];
  if (VAR_10 >= 0 && VAR_10 < VAR_0) {

   if (FUNC_1(VAR_10))
    break;
  } else {
   VAR_10 = FUNC_2();
   break;
  }
  VAR_10 = -1;
 }

 if (VAR_10 < 0) {
  FUNC_7(&VAR_3);
  return -VAR_1;
 }

 FUNC_4 (VAR_4, 0, sizeof(struct dvb_adapter));
 FUNC_0 (&VAR_4->device_list);

 FUNC_8("DVB: registering new adapter (%s)\n", VAR_5);

 VAR_4->num = VAR_10;
 VAR_4->name = VAR_5;
 VAR_4->module = VAR_6;
 VAR_4->device = VAR_7;
 VAR_4->mfe_shared = 0;
 VAR_4->mfe_dvbdev = ((void*)0);
 FUNC_5 (&VAR_4->mfe_lock);





 FUNC_3 (&VAR_4->list_head, &VAR_2);

 FUNC_7(&VAR_3);

 return VAR_10;
}
