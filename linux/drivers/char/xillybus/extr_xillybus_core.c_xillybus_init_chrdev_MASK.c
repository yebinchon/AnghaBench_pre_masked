
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int owner; } ;
struct xilly_endpoint {int num_channels; int major; int lowest_minor; TYPE_2__ cdev; int dev; TYPE_1__* ephw; } ;
struct device {int dummy; } ;
typedef int devname ;
typedef int dev_t ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*,...) ;
 struct device* FUNC_10 (int ,int *,int ,int *,char*,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int,char*,unsigned char const*) ;
 int FUNC_13 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_14(struct xilly_endpoint *VAR_4,
    const unsigned char *VAR_5)
{
 int VAR_6;
 dev_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 char VAR_12[48];
 struct device *VAR_13;

 VAR_6 = FUNC_4(&VAR_7, 0,
     VAR_4->num_channels,
     VAR_3);
 if (VAR_6) {
  FUNC_9(VAR_4->dev, "Failed to obtain major/minors");
  return VAR_6;
 }

 VAR_4->major = VAR_11 = FUNC_1(VAR_7);
 VAR_4->lowest_minor = VAR_10 = FUNC_2(VAR_7);

 FUNC_7(&VAR_4->cdev, &VAR_2);
 VAR_4->cdev.owner = VAR_4->ephw->owner;
 VAR_6 = FUNC_5(&VAR_4->cdev, FUNC_3(VAR_11, VAR_10),
        VAR_4->num_channels);
 if (VAR_6) {
  FUNC_9(VAR_4->dev, "Failed to add cdev. Aborting.\n");
  goto unregister_chrdev;
 }

 VAR_5++;

 for (VAR_9 = VAR_10, VAR_8 = 0;
      VAR_8 < VAR_4->num_channels;
      VAR_8++, VAR_9++) {
  FUNC_12(VAR_12, sizeof(VAR_12)-1, "xillybus_%s", VAR_5);

  VAR_12[sizeof(VAR_12)-1] = 0;

  while (*VAR_5++)
                     ;

  VAR_13 = FUNC_10(VAR_1,
           ((void*)0),
           FUNC_3(VAR_11, VAR_9),
           ((void*)0),
           "%s", VAR_12);

  if (FUNC_0(VAR_13)) {
   FUNC_9(VAR_4->dev,
     "Failed to create %s device. Aborting.\n",
     VAR_12);
   VAR_6 = -VAR_0;
   goto unroll_device_create;
  }
 }

 FUNC_8(VAR_4->dev, "Created %d device files.\n",
   VAR_4->num_channels);
 return 0;

unroll_device_create:
 VAR_8--; VAR_9--;
 for (; VAR_8 >= 0; VAR_8--, VAR_9--)
  FUNC_11(VAR_1, FUNC_3(VAR_11, VAR_9));

 FUNC_6(&VAR_4->cdev);
unregister_chrdev:
 FUNC_13(FUNC_3(VAR_11, VAR_10), VAR_4->num_channels);

 return VAR_6;
}
