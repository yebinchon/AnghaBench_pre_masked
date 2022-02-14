
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {scalar_t__ be_encoding; struct ber_element* be_next; struct ber_element* be_sub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

struct ber_element *
FUNC_0(struct ber_element *VAR_2)
{
 struct ber_element *VAR_3;

 if ((VAR_2->be_encoding == VAR_0 ||
     VAR_2->be_encoding == VAR_1) &&
     VAR_2->be_sub != ((void*)0)) {
  VAR_3 = VAR_2->be_sub;
  VAR_2->be_sub = ((void*)0);
 } else {
  VAR_3 = VAR_2->be_next;
  VAR_2->be_next = ((void*)0);
 }

 return (VAR_3);
}
