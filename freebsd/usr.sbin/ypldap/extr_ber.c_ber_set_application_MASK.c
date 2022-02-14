
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber {unsigned long (* br_application ) (struct ber_element*) ;} ;



void
FUNC_0(struct ber *VAR_0, unsigned long (*VAR_1)(struct ber_element *))
{
 VAR_0->br_application = VAR_1;
}
