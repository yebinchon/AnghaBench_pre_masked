
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int open_mutex; } ;
typedef int __u8 ;


 int FUNC_0 (struct vhci_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vhci_data *VAR_0, __u8 VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->open_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->open_mutex);

 return VAR_2;
}
