
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mfi_query_disk {int present; int array_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mfi_query_disk*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,struct mfi_query_disk*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, uint8_t VAR_4, struct mfi_query_disk *VAR_5)
{

 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_5->array_id = VAR_4;
 if (FUNC_1(VAR_3, VAR_1, VAR_5) < 0)
  return (-1);
 if (!VAR_5->present) {
  VAR_2 = VAR_0;
  return (-1);
 }
 return (0);
}
