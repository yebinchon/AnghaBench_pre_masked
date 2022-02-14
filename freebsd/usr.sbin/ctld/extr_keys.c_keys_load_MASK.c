
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {int pdu_data_len; char* pdu_data; } ;
struct keys {char* keys_data; int keys_data_len; char** keys_values; int ** keys_names; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 size_t FUNC_6 (char*) ;
 int * FUNC_7 (char**,char*) ;

void
FUNC_8(struct keys *VAR_1, const struct pdu *VAR_2)
{
 int VAR_3;
 char *VAR_4;
 size_t VAR_5;

 if (VAR_2->pdu_data_len == 0)
  return;

 if (VAR_2->pdu_data[VAR_2->pdu_data_len - 1] != '\0')
  FUNC_3(1, "protocol error: key not NULL-terminated\n");

 FUNC_0(VAR_1->keys_data == ((void*)0));
 VAR_1->keys_data_len = VAR_2->pdu_data_len;
 VAR_1->keys_data = FUNC_4(VAR_1->keys_data_len);
 if (VAR_1->keys_data == ((void*)0))
  FUNC_2(1, "malloc");
 FUNC_5(VAR_1->keys_data, VAR_2->pdu_data, VAR_1->keys_data_len);




 VAR_4 = VAR_1->keys_data;
 for (VAR_3 = 0;; VAR_3++) {
  if (VAR_3 >= VAR_0)
   FUNC_3(1, "too many keys received");

  VAR_5 = FUNC_6(VAR_4);

  VAR_1->keys_values[VAR_3] = VAR_4;
  VAR_1->keys_names[VAR_3] = FUNC_7(&VAR_1->keys_values[VAR_3], "=");
  if (VAR_1->keys_names[VAR_3] == ((void*)0) || VAR_1->keys_values[VAR_3] == ((void*)0))
   FUNC_3(1, "malformed keys");
  FUNC_1("key received: \"%s=%s\"",
      VAR_1->keys_names[VAR_3], VAR_1->keys_values[VAR_3]);

  VAR_4 += VAR_5 + 1;
  if (VAR_4 == VAR_1->keys_data + VAR_1->keys_data_len)
   break;
  FUNC_0(VAR_4 < VAR_1->keys_data + VAR_1->keys_data_len);
 }
}
