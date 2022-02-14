
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct olpc_apsp* port_data; } ;
struct olpc_apsp {scalar_t__ base; int dev; int open_count; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_5)
{
 struct olpc_apsp *VAR_6 = VAR_5->port_data;
 unsigned int VAR_7;
 unsigned long VAR_8;

 if (VAR_6->open_count++ == 0) {
  VAR_8 = FUNC_1(VAR_6->base + VAR_1);
  if (!(VAR_8 & VAR_0)) {
   FUNC_0(VAR_6->dev, "SP cannot accept commands.\n");
   return -VAR_2;
  }


  VAR_7 = FUNC_1(VAR_6->base + VAR_4);
  FUNC_2(VAR_7 & ~VAR_3, VAR_6->base + VAR_4);
 }

 return 0;
}
