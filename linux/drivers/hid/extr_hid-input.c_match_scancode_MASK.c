
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {unsigned int hid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct hid_usage *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 return (VAR_2->hid & (VAR_1 | VAR_0)) == VAR_4;
}
