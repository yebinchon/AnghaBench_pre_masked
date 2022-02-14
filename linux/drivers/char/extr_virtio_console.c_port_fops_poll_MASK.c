
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int host_connected; int guest_connected; int waitqueue; } ;
struct file {struct port* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (struct port*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct port *VAR_6;
 __poll_t VAR_7;

 VAR_6 = VAR_4->private_data;
 FUNC_0(VAR_4, &VAR_6->waitqueue, VAR_5);

 if (!VAR_6->guest_connected) {

  return VAR_0;
 }
 VAR_7 = 0;
 if (!FUNC_1(VAR_6))
  VAR_7 |= VAR_1 | VAR_3;
 if (!FUNC_2(VAR_6))
  VAR_7 |= VAR_2;
 if (!VAR_6->host_connected)
  VAR_7 |= VAR_0;

 return VAR_7;
}
