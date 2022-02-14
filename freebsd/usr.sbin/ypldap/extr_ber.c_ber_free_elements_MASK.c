
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {scalar_t__ be_encoding; struct ber_element* be_val; scalar_t__ be_free; struct ber_element* be_next; struct ber_element* be_sub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ber_element*) ;

void
FUNC_1(struct ber_element *VAR_5)
{
 if (VAR_5->be_sub && (VAR_5->be_encoding == VAR_3 ||
     VAR_5->be_encoding == VAR_4))
  FUNC_1(VAR_5->be_sub);
 if (VAR_5->be_next)
  FUNC_1(VAR_5->be_next);
 if (VAR_5->be_free && (VAR_5->be_encoding == VAR_2 ||
     VAR_5->be_encoding == VAR_0 ||
     VAR_5->be_encoding == VAR_1))
  FUNC_0(VAR_5->be_val);
 FUNC_0(VAR_5);
}
