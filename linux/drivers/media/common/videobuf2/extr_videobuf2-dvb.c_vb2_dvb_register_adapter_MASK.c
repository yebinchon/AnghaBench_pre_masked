
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfe_shared; struct media_device* mdev; void* priv; } ;
struct vb2_dvb_frontends {TYPE_1__ adapter; int lock; } ;
struct module {int dummy; } ;
struct media_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*,struct module*,struct device*,short*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct vb2_dvb_frontends *VAR_0,
     struct module *VAR_1,
     void *VAR_2,
     struct device *VAR_3,
     struct media_device *VAR_4,
     char *VAR_5,
     short *VAR_6,
     int VAR_7)
{
 int VAR_8;

 FUNC_1(&VAR_0->lock);


 VAR_8 = FUNC_0(&VAR_0->adapter, VAR_5, VAR_1,
  VAR_3, VAR_6);
 if (VAR_8 < 0) {
  FUNC_2("%s: dvb_register_adapter failed (errno = %d)\n",
         VAR_5, VAR_8);
 }
 VAR_0->adapter.priv = VAR_2;
 VAR_0->adapter.mfe_shared = VAR_7;




 return VAR_8;
}
