
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ibmpex_bmc_data {TYPE_2__* sensors; int bmc_device; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_8__ {TYPE_3__ attr; int show; } ;
struct TYPE_6__ {TYPE_1__* attr; } ;
struct TYPE_5__ {int index; int nr; TYPE_4__ dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 char** VAR_5 ;
 int FUNC_3 (char*,char*,int,char*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct ibmpex_bmc_data *VAR_6, int VAR_7,
    int VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;
 char *VAR_12;

 VAR_12 = FUNC_2(32, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 if (VAR_7 == VAR_3)
  FUNC_3(VAR_12, "temp%d_input%s",
   VAR_8, VAR_5[VAR_10]);
 else if (VAR_7 == VAR_2)
  FUNC_3(VAR_12, "power%d_average%s",
   VAR_8, VAR_5[VAR_10]);

 FUNC_4(&VAR_6->sensors[VAR_9].attr[VAR_10].dev_attr.attr);
 VAR_6->sensors[VAR_9].attr[VAR_10].dev_attr.attr.name = VAR_12;
 VAR_6->sensors[VAR_9].attr[VAR_10].dev_attr.attr.mode = 0444;
 VAR_6->sensors[VAR_9].attr[VAR_10].dev_attr.show = VAR_4;
 VAR_6->sensors[VAR_9].attr[VAR_10].index = VAR_9;
 VAR_6->sensors[VAR_9].attr[VAR_10].nr = VAR_10;

 VAR_11 = FUNC_0(VAR_6->bmc_device,
     &VAR_6->sensors[VAR_9].attr[VAR_10].dev_attr);
 if (VAR_11) {
  VAR_6->sensors[VAR_9].attr[VAR_10].dev_attr.attr.name = ((void*)0);
  FUNC_1(VAR_12);
  return VAR_11;
 }

 return 0;
}
