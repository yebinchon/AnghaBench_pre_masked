
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct iftable_cfg {int ii; } ;
struct ifentry {int dummy; } ;
struct TYPE_5__ {char* iface; } ;
struct TYPE_6__ {TYPE_1__ k; } ;
typedef TYPE_2__ ipfw_obj_tentry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (void*,struct table_info*,struct ifentry*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, struct table_info *VAR_4,
    ipfw_obj_tentry *VAR_5)
{
 struct iftable_cfg *VAR_6;
 struct ifentry *VAR_7;
 char *VAR_8;

 VAR_6 = (struct iftable_cfg *)VAR_3;
 VAR_8 = VAR_5->k.iface;

 if (FUNC_1(VAR_8, VAR_2) == VAR_2)
  return (VAR_0);

 VAR_7 = (struct ifentry *)FUNC_0(VAR_6->ii, 0, VAR_8);

 if (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_3, VAR_4, VAR_7, VAR_5);
  return (0);
 }

 return (VAR_1);
}
