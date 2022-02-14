
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int ch_count; struct srp_rdma_ch* ch; } ;
struct srp_rdma_ch {int req_lim; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct srp_target_port* FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct srp_target_port *VAR_4 = FUNC_1(FUNC_0(VAR_1));
 struct srp_rdma_ch *VAR_5;
 int VAR_6, VAR_7 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->ch_count; VAR_6++) {
  VAR_5 = &VAR_4->ch[VAR_6];
  VAR_7 = FUNC_2(VAR_7, VAR_5->req_lim);
 }
 return FUNC_3(VAR_3, "%d\n", VAR_7);
}
