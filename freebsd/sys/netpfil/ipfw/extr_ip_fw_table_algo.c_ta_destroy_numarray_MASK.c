
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int dummy; } ;
struct numarray_cfg {struct numarray_cfg* main_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct numarray_cfg*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, struct table_info *VAR_2)
{
 struct numarray_cfg *VAR_3;

 VAR_3 = (struct numarray_cfg *)VAR_1;

 if (VAR_3->main_ptr != ((void*)0))
  FUNC_0(VAR_3->main_ptr, VAR_0);

 FUNC_0(VAR_3, VAR_0);
}
