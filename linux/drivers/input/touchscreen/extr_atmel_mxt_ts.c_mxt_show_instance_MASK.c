
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxt_object {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mxt_object*) ;
 int FUNC_1 (struct mxt_object*) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(char *VAR_1, int VAR_2,
     struct mxt_object *VAR_3, int VAR_4,
     const u8 *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_3) > 1)
  VAR_2 += FUNC_2(VAR_1 + VAR_2, VAR_0 - VAR_2,
       "Instance %u\n", VAR_4);

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3); VAR_6++)
  VAR_2 += FUNC_2(VAR_1 + VAR_2, VAR_0 - VAR_2,
    "\t[%2u]: %02x (%d)\n", VAR_6, VAR_5[VAR_6], VAR_5[VAR_6]);
 VAR_2 += FUNC_2(VAR_1 + VAR_2, VAR_0 - VAR_2, "\n");

 return VAR_2;
}
