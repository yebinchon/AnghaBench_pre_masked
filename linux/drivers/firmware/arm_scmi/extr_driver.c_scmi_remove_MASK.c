
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int dummy; } ;
struct scmi_info {struct idr rx_idr; struct idr tx_idr; int node; scalar_t__ users; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct idr*) ;
 int FUNC_1 (struct idr*,int ,struct idr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct scmi_info* FUNC_5 (struct platform_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 int VAR_4 = 0;
 struct scmi_info *VAR_5 = FUNC_5(VAR_3);
 struct idr *VAR_6 = &VAR_5->tx_idr;

 FUNC_3(&VAR_1);
 if (VAR_5->users)
  VAR_4 = -VAR_0;
 else
  FUNC_2(&VAR_5->node);
 FUNC_4(&VAR_1);

 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_6, VAR_2, VAR_6);
 FUNC_0(&VAR_5->tx_idr);

 VAR_6 = &VAR_5->rx_idr;
 VAR_4 = FUNC_1(VAR_6, VAR_2, VAR_6);
 FUNC_0(&VAR_5->rx_idr);

 return VAR_4;
}
