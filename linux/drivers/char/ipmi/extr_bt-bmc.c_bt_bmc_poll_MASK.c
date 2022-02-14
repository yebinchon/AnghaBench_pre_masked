
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct file {int dummy; } ;
struct bt_bmc {int queue; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bt_bmc*,int ) ;
 struct bt_bmc* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_6, poll_table *VAR_7)
{
 struct bt_bmc *VAR_8 = FUNC_1(VAR_6);
 __poll_t VAR_9 = 0;
 u8 VAR_10;

 FUNC_2(VAR_6, &VAR_8->queue, VAR_7);

 VAR_10 = FUNC_0(VAR_8, VAR_0);

 if (VAR_10 & VAR_2)
  VAR_9 |= VAR_4;

 if (!(VAR_10 & (VAR_3 | VAR_1)))
  VAR_9 |= VAR_5;

 return VAR_9;
}
