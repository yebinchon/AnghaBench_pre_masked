
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct ifbpstpreq {scalar_t__ ifbp_portno; } ;



__attribute__((used)) static struct ifbpstpreq *
FUNC_0(uint8_t VAR_0, struct ifbpstpreq *VAR_1,
    uint32_t VAR_2)
{
 uint32_t VAR_3;
 struct ifbpstpreq *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2 / sizeof(struct ifbpstpreq); VAR_3++) {
  VAR_4 = VAR_1 + VAR_3;
  if (VAR_4->ifbp_portno == VAR_0)
   return (VAR_4);
 }

 return (((void*)0));
}
