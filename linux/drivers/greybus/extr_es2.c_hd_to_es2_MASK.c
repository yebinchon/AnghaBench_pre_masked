
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_host_device {int hd_priv; } ;
struct es2_ap_dev {int dummy; } ;



__attribute__((used)) static inline struct es2_ap_dev *FUNC_0(struct gb_host_device *VAR_0)
{
 return (struct es2_ap_dev *)&VAR_0->hd_priv;
}
