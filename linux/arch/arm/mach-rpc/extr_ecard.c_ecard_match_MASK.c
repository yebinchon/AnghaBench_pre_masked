
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct expansion_card {TYPE_1__ cid; } ;
struct ecard_driver {scalar_t__ id; scalar_t__ id_table; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct expansion_card* FUNC_0 (struct device*) ;
 struct ecard_driver* FUNC_1 (struct device_driver*) ;
 int * FUNC_2 (scalar_t__,struct expansion_card*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct expansion_card *VAR_2 = FUNC_0(VAR_0);
 struct ecard_driver *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (VAR_3->id_table) {
  VAR_4 = FUNC_2(VAR_3->id_table, VAR_2) != ((void*)0);
 } else {
  VAR_4 = VAR_2->cid.id == VAR_3->id;
 }

 return VAR_4;
}
