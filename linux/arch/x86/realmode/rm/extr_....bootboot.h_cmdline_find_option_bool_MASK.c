
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long cmd_line_ptr; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int FUNC_0 (unsigned long,char const*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_1)
{
 unsigned long VAR_2 = VAR_0.hdr.cmd_line_ptr;

 if (VAR_2 >= 0x100000)
  return -1;

 return FUNC_0(VAR_2, VAR_1);
}
