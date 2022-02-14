
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_msg_hdr {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(void *VAR_1)
{
 struct ti_sci_msg_hdr *VAR_2 = VAR_1;

 return VAR_2->flags & VAR_0 ? 1 : 0;
}
