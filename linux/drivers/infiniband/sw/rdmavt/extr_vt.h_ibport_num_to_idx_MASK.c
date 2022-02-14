
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int nports; } ;
struct rvt_dev_info {TYPE_1__ dparms; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static inline int FUNC_1(struct ib_device *VAR_1, u8 VAR_2)
{
 struct rvt_dev_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = VAR_2 - 1;
 if ((VAR_4 < 0) || (VAR_4 >= VAR_3->dparms.nports))
  return -VAR_0;

 return VAR_4;
}
