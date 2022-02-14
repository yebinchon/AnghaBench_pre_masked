
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {int pdu_data_len; } ;



__attribute__((used)) static size_t
FUNC_0(const struct pdu *VAR_0)
{

 if ((VAR_0->pdu_data_len % 4) != 0)
  return (4 - (VAR_0->pdu_data_len % 4));

 return (0);
}
