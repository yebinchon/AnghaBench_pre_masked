
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_host_device {int dev; struct gb_hd_driver* driver; } ;
struct gb_hd_driver {int (* cport_shutdown ) (struct gb_host_device*,int ,int ,int ) ;} ;
struct gb_connection {int name; int hd_cport_id; struct gb_host_device* hd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 scalar_t__ FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*,int ) ;
 int FUNC_4 (struct gb_host_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gb_connection *VAR_1,
     u8 VAR_2)
{
 struct gb_host_device *VAR_3 = VAR_1->hd;
 const struct gb_hd_driver *VAR_4 = VAR_3->driver;
 int VAR_5;

 if (FUNC_2(VAR_1))
  return 0;

 if (FUNC_1(VAR_1)) {
  if (!VAR_4->cport_shutdown)
   return 0;

  VAR_5 = VAR_4->cport_shutdown(VAR_3, VAR_1->hd_cport_id, VAR_2,
       VAR_0);
 } else {
  VAR_5 = FUNC_3(VAR_1, VAR_2);
 }

 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "%s: failed to send cport shutdown (phase %d): %d\n",
   VAR_1->name, VAR_2, VAR_5);
  return VAR_5;
 }

 return 0;
}
