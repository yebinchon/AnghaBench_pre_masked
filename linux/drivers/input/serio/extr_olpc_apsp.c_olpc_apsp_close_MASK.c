
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct olpc_apsp* port_data; } ;
struct olpc_apsp {scalar_t__ open_count; scalar_t__ base; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_2)
{
 struct olpc_apsp *VAR_3 = VAR_2->port_data;
 unsigned int VAR_4;

 if (--VAR_3->open_count == 0) {

  VAR_4 = FUNC_0(VAR_3->base + VAR_1);
  FUNC_1(VAR_4 | VAR_0, VAR_3->base + VAR_1);
 }
}
