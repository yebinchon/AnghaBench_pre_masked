
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_msg {int flags; } ;
struct mipi_dsi_host_ops {int (* transfer ) (TYPE_1__*,struct mipi_dsi_msg*) ;} ;
struct mipi_dsi_device {int mode_flags; TYPE_1__* host; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct mipi_dsi_host_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct mipi_dsi_msg*) ;

__attribute__((used)) static ssize_t FUNC_1(struct mipi_dsi_device *VAR_3,
     struct mipi_dsi_msg *VAR_4)
{
 const struct mipi_dsi_host_ops *VAR_5 = VAR_3->host->ops;

 if (!VAR_5 || !VAR_5->transfer)
  return -VAR_0;

 if (VAR_3->mode_flags & VAR_1)
  VAR_4->flags |= VAR_2;

 return VAR_5->transfer(VAR_3->host, VAR_4);
}
