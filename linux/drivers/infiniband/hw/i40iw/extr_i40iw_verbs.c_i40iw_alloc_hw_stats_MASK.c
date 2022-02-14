
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_hw_stats {int dummy; } ;
struct ib_device {int dummy; } ;
struct i40iw_sc_dev {int is_pf; } ;
struct i40iw_device {struct i40iw_sc_dev sc_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct rdma_hw_stats* FUNC_2 (int ,int,unsigned long) ;
 struct i40iw_device* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static struct rdma_hw_stats *FUNC_4(struct ib_device *VAR_4,
        u8 VAR_5)
{
 struct i40iw_device *VAR_6 = FUNC_3(VAR_4);
 struct i40iw_sc_dev *VAR_7 = &VAR_6->sc_dev;
 int VAR_8 = VAR_0 +
  VAR_1;
 unsigned long VAR_9 = VAR_2;

 FUNC_1(FUNC_0(VAR_3) !=
       (VAR_0 +
        VAR_1));





 if (!VAR_7->is_pf)
  VAR_9 = 1000;
 return FUNC_2(VAR_3, VAR_8,
       VAR_9);
}
