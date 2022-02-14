
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {unsigned long be_encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ber_element*,int ,int ) ;
 struct ber_element* FUNC_1 (int,int) ;

struct ber_element *
FUNC_2(unsigned long VAR_2)
{
 struct ber_element *VAR_3;

 if ((VAR_3 = FUNC_1(1, sizeof(*VAR_3))) == ((void*)0))
  return ((void*)0);

 VAR_3->be_encoding = VAR_2;
 FUNC_0(VAR_3, VAR_0, VAR_1);

 return VAR_3;
}
