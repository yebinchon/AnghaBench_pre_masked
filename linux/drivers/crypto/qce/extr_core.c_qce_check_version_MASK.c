
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qce_device {int pipe_pair_id; int dev; int burst_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qce_device*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct qce_device *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_3, &VAR_4, &VAR_5, &VAR_6);





 if (VAR_4 != VAR_2 || VAR_5 == 0)
  return -VAR_0;

 VAR_3->burst_size = VAR_1;
 VAR_3->pipe_pair_id = 1;

 FUNC_0(VAR_3->dev, "Crypto device found, version %d.%d.%d\n",
  VAR_4, VAR_5, VAR_6);

 return 0;
}
