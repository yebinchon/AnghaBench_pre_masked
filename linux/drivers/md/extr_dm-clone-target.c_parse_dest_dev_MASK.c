
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dm_arg_set {int dummy; } ;
struct clone {int dest_dev; TYPE_1__* ti; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct dm_arg_set*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct clone *VAR_3, struct dm_arg_set *VAR_4, char **VAR_5)
{
 int VAR_6;
 sector_t VAR_7;

 VAR_6 = FUNC_0(VAR_3->ti, FUNC_2(VAR_4), VAR_1 | VAR_2,
     &VAR_3->dest_dev);
 if (VAR_6) {
  *VAR_5 = "Error opening destination device";
  return VAR_6;
 }

 VAR_7 = FUNC_3(VAR_3->dest_dev);
 if (VAR_7 < VAR_3->ti->len) {
  FUNC_1(VAR_3->ti, VAR_3->dest_dev);
  *VAR_5 = "Device size larger than destination device";
  return -VAR_0;
 }

 return 0;
}
