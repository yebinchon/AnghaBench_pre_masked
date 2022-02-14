
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_disk_desc {int status; } ;
struct vdc_port {int vio; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static void FUNC_1(struct vdc_port *VAR_1, struct vio_disk_desc *VAR_2)
{
 int VAR_3 = VAR_2->status;

 FUNC_0(&VAR_1->vio, -VAR_3, VAR_0);
}
