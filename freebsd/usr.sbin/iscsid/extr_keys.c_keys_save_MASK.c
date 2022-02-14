
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {char* pdu_data; size_t pdu_data_len; } ;
struct keys {char** keys_names; char** keys_values; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4(struct keys *VAR_1, struct pdu *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5;




 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1->keys_names[VAR_5] == ((void*)0))
   break;



  VAR_4 += FUNC_3(VAR_1->keys_names[VAR_5]) +
      FUNC_3(VAR_1->keys_values[VAR_5]) + 2;
 }

 if (VAR_4 == 0)
  return;

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 == ((void*)0))
  FUNC_0(1, "malloc");

 VAR_2->pdu_data = VAR_3;
 VAR_2->pdu_data_len = VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1->keys_names[VAR_5] == ((void*)0))
   break;
  VAR_3 += FUNC_2(VAR_3, "%s=%s",
      VAR_1->keys_names[VAR_5], VAR_1->keys_values[VAR_5]);
  VAR_3 += 1;
 }
}
