
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_dump {scalar_t__ dump_active; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fw_dump *VAR_3)
{
 s64 VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0, 0, 0);
 if (VAR_4) {
  FUNC_1("Failed to invalidate - unexpected Error(%lld).\n", VAR_4);
  return -VAR_0;
 }

 VAR_3->dump_active = 0;
 VAR_2 = ((void*)0);
 return 0;
}
