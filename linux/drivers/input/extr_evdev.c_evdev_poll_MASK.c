
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct evdev_client* private_data; } ;
struct evdev_client {scalar_t__ packet_head; scalar_t__ tail; int revoked; struct evdev* evdev; } ;
struct evdev {scalar_t__ exist; int wait; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_6, poll_table *VAR_7)
{
 struct evdev_client *VAR_8 = VAR_6->private_data;
 struct evdev *VAR_9 = VAR_8->evdev;
 __poll_t VAR_10;

 FUNC_0(VAR_6, &VAR_9->wait, VAR_7);

 if (VAR_9->exist && !VAR_8->revoked)
  VAR_10 = VAR_3 | VAR_5;
 else
  VAR_10 = VAR_1 | VAR_0;

 if (VAR_8->packet_head != VAR_8->tail)
  VAR_10 |= VAR_2 | VAR_4;

 return VAR_10;
}
