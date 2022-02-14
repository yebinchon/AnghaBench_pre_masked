
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roce_rescan_work {int work; struct ib_device* ib_dev; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct roce_rescan_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct ib_device *VAR_4)
{
 struct roce_rescan_work *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return -VAR_0;

 VAR_5->ib_dev = VAR_4;
 FUNC_0(&VAR_5->work, VAR_3);
 FUNC_2(VAR_2, &VAR_5->work);

 return 0;
}
