
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int is_enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dispc_device*,int ,int,int) ;
 int FUNC_1 (struct dispc_device*) ;
 struct dispc_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct dispc_device*) ;
 int FUNC_4 (struct dispc_device*) ;
 int FUNC_5 (struct dispc_device*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct dispc_device *VAR_3 = FUNC_2(VAR_2);







 if (FUNC_0(VAR_3, VAR_0, 2, 1) != VAR_1) {
  FUNC_1(VAR_3);

  FUNC_3(VAR_3);

  FUNC_4(VAR_3);

  FUNC_5(VAR_3);
 }

 VAR_3->is_enabled = 1;

 FUNC_6();

 return 0;
}
