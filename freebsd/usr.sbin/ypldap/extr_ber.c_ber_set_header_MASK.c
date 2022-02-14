
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int be_class; unsigned long be_encoding; unsigned long be_type; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

void
FUNC_0(struct ber_element *VAR_2, int VAR_3, unsigned long VAR_4)
{
 VAR_2->be_class = VAR_3 & VAR_0;
 if (VAR_4 == VAR_1)
  VAR_4 = VAR_2->be_encoding;
 VAR_2->be_type = VAR_4;
}
