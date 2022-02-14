
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ta_foreach_f ;
struct wa_ifidx {void* arg; int * f; } ;
struct table_info {int dummy; } ;
struct iftable_cfg {int ii; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct wa_ifidx*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct table_info *VAR_2, ta_foreach_f *VAR_3,
    void *VAR_4)
{
 struct iftable_cfg *VAR_5;
 struct wa_ifidx VAR_6;

 VAR_5 = (struct iftable_cfg *)VAR_1;

 VAR_6.f = VAR_3;
 VAR_6.arg = VAR_4;

 FUNC_0(VAR_5->ii, VAR_0, &VAR_6);
}
