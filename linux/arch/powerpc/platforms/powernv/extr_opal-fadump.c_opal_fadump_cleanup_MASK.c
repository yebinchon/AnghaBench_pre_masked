
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_dump {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fw_dump *VAR_2)
{
 s64 VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0);
 if (VAR_3 != VAR_1)
  FUNC_1("Could not reset (%llu) kernel metadata tag!\n", VAR_3);
}
