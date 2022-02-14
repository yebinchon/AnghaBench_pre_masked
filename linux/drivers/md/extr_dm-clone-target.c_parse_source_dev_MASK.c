
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dm_arg_set {int dummy; } ;
struct clone {int source_dev; TYPE_1__* ti; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct dm_arg_set*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct clone *VAR_2, struct dm_arg_set *VAR_3, char **VAR_4)
{
 int VAR_5;
 sector_t VAR_6;

 VAR_5 = FUNC_0(VAR_2->ti, FUNC_2(VAR_3), VAR_1,
     &VAR_2->source_dev);
 if (VAR_5) {
  *VAR_4 = "Error opening source device";
  return VAR_5;
 }

 VAR_6 = FUNC_3(VAR_2->source_dev);
 if (VAR_6 < VAR_2->ti->len) {
  FUNC_1(VAR_2->ti, VAR_2->source_dev);
  *VAR_4 = "Device size larger than source device";
  return -VAR_0;
 }

 return 0;
}
