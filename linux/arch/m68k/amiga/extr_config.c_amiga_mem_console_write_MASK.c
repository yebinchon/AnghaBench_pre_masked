
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct savekmsg {int dummy; } ;
struct console {int dummy; } ;
struct TYPE_2__ {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int,char const*,unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct console *VAR_2, const char *VAR_3,
        unsigned int VAR_4)
{
 if (VAR_1->size + VAR_4 <= VAR_0-sizeof(struct savekmsg)) {
  FUNC_0(VAR_1->data + VAR_1->size, VAR_3, VAR_4);
  VAR_1->size += VAR_4;
 }
}
