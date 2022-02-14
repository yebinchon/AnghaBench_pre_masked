
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ type; unsigned int code; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct hid_usage *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{



 return (VAR_1->type == VAR_0 && VAR_1->code == VAR_3);
}
