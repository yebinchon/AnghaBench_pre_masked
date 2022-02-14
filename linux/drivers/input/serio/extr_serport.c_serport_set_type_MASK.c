
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct serport* disc_data; } ;
struct TYPE_2__ {unsigned long proto; unsigned long id; unsigned long extra; } ;
struct serport {TYPE_1__ id; } ;



__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_0, unsigned long VAR_1)
{
 struct serport *VAR_2 = VAR_0->disc_data;

 VAR_2->id.proto = VAR_1 & 0x000000ff;
 VAR_2->id.id = (VAR_1 & 0x0000ff00) >> 8;
 VAR_2->id.extra = (VAR_1 & 0x00ff0000) >> 16;
}
