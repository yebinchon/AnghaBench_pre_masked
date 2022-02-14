
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int byte_counter; } ;
struct TYPE_4__ {int stream_bytes; } ;
struct TYPE_6__ {int mutex; TYPE_2__ prngws; TYPE_1__ prnows; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
     struct device_attribute *VAR_6,
     char *VAR_7)
{
 u64 VAR_8;

 if (FUNC_0(&VAR_3->mutex))
  return -VAR_0;
 if (VAR_4 == VAR_2)
  VAR_8 = VAR_3->prnows.stream_bytes;
 else
  VAR_8 = VAR_3->prngws.byte_counter;
 FUNC_1(&VAR_3->mutex);

 return FUNC_2(VAR_7, VAR_1, "%llu\n", VAR_8);
}
