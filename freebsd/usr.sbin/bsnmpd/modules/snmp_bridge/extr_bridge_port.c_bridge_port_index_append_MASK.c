
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct bridge_port {char port_no; int sysindex; } ;
struct asn_oid {size_t len; size_t* subs; } ;


 char* FUNC_0 (int ) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct asn_oid *VAR_0, uint VAR_1,
 const struct bridge_port *VAR_2)
{
 uint VAR_3;
 const char *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2->sysindex)) == ((void*)0))
  return (-1);

 VAR_0->len = VAR_1 + FUNC_1(VAR_4) + 1 + 1;
 VAR_0->subs[VAR_1] = FUNC_1(VAR_4);

 for (VAR_3 = 1; VAR_3 <= FUNC_1(VAR_4); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_4[VAR_3 - 1];

 VAR_0->subs[VAR_1 + VAR_3] = VAR_2->port_no;

 return (0);
}
