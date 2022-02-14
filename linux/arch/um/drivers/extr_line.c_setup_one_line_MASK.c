
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_driver {int dummy; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct line {int valid; char* init_str; TYPE_2__ port; TYPE_1__* driver; } ;
struct device {int dummy; } ;
struct chan_opts {int dummy; } ;
struct TYPE_3__ {struct tty_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,struct line*,int,struct chan_opts const*,char**) ;
 int FUNC_5 (char*,char*) ;
 struct device* FUNC_6 (TYPE_2__*,struct tty_driver*,int,int *) ;
 int FUNC_7 (struct tty_driver*,int) ;

int FUNC_8(struct line *VAR_3, int VAR_4, char *VAR_5,
     const struct chan_opts *VAR_6, char **VAR_7)
{
 struct line *VAR_8 = &VAR_3[VAR_4];
 struct tty_driver *VAR_9 = VAR_8->driver->driver;
 int VAR_10 = -VAR_0;

 if (VAR_8->port.count) {
  *VAR_7 = "Device is already open";
  goto out;
 }

 if (!FUNC_5(VAR_5, "none")) {
  if (VAR_8->valid) {
   VAR_8->valid = 0;
   FUNC_2(VAR_8->init_str);
   FUNC_7(VAR_9, VAR_4);
   FUNC_4(((void*)0), VAR_8, VAR_4, VAR_6, VAR_7);
   VAR_10 = 0;
  }
 } else {
  char *VAR_11 = FUNC_3(VAR_5, VAR_2);
  if (!VAR_11) {
   *VAR_7 = "Failed to allocate memory";
   return -VAR_1;
  }
  if (VAR_8->valid) {
   FUNC_7(VAR_9, VAR_4);
   FUNC_2(VAR_8->init_str);
  }
  VAR_8->init_str = VAR_11;
  VAR_8->valid = 1;
  VAR_10 = FUNC_4(VAR_11, VAR_8, VAR_4, VAR_6, VAR_7);
  if (!VAR_10) {
   struct device *VAR_12 = FUNC_6(&VAR_8->port,
     VAR_9, VAR_4, ((void*)0));
   if (FUNC_0(VAR_12)) {
    *VAR_7 = "Failed to register device";
    VAR_10 = FUNC_1(VAR_12);
    FUNC_4(((void*)0), VAR_8, VAR_4, VAR_6, VAR_7);
   }
  }
  if (VAR_10) {
   VAR_8->init_str = ((void*)0);
   VAR_8->valid = 0;
   FUNC_2(VAR_11);
  }
 }
out:
 return VAR_10;
}
