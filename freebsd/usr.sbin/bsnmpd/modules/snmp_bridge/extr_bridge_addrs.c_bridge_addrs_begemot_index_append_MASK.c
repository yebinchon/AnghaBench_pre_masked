
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct tp_entry {int* tp_addr; int sysindex; } ;
struct asn_oid {int* subs; scalar_t__ len; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct asn_oid *VAR_1, uint VAR_2,
 const struct tp_entry *VAR_3)
{
 uint VAR_4, VAR_5;
 const char *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_3->sysindex)) == ((void*)0))
  return (-1);

 VAR_5 = FUNC_1(VAR_6);
 VAR_1->len = VAR_2++;
 VAR_1->subs[VAR_1->len++] = VAR_5;

 for (VAR_4 = 1; VAR_4 <= VAR_5; VAR_4++)
  VAR_1->subs[VAR_1->len++] = VAR_6[VAR_4 - 1];

 VAR_1->subs[VAR_1->len++] = VAR_0;
 for (VAR_4 = 1 ; VAR_4 <= VAR_0; VAR_4++)
  VAR_1->subs[VAR_1->len++] = VAR_3->tp_addr[VAR_4 - 1];

 return (0);
}
