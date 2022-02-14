
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int bus_info; int card; int driver; } ;
struct sur40_state {int usbdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct sur40_state* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
     struct v4l2_capability *VAR_4)
{
 struct sur40_state *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_0(VAR_4->card, VAR_0, sizeof(VAR_4->card));
 FUNC_1(VAR_5->usbdev, VAR_4->bus_info, sizeof(VAR_4->bus_info));
 return 0;
}
