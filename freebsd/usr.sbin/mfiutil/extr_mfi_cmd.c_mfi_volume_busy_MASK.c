
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_query_disk {scalar_t__ open; } ;


 scalar_t__ FUNC_0 (int,int ,struct mfi_query_disk*) ;

int
FUNC_1(int VAR_0, uint8_t VAR_1)
{
 struct mfi_query_disk VAR_2;


 if (FUNC_0(VAR_0, VAR_1, &VAR_2) < 0)
  return (0);
 return (VAR_2.open != 0);
}
