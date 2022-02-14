
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userspace_data {int valid; } ;
struct TYPE_2__ {int kobj; } ;
struct devfreq {TYPE_1__ dev; struct userspace_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct userspace_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct devfreq *VAR_3)
{
 int VAR_4 = 0;
 struct userspace_data *VAR_5 = FUNC_0(sizeof(struct userspace_data),
           VAR_1);

 if (!VAR_5) {
  VAR_4 = -VAR_0;
  goto out;
 }
 VAR_5->valid = 0;
 VAR_3->data = VAR_5;

 VAR_4 = FUNC_1(&VAR_3->dev.kobj, &VAR_2);
out:
 return VAR_4;
}
