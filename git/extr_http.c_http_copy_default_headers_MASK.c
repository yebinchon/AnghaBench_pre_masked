
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int data; struct curl_slist* next; } ;


 struct curl_slist* FUNC_0 (struct curl_slist*,int ) ;
 struct curl_slist* VAR_0 ;

struct curl_slist *FUNC_1(void)
{
 struct curl_slist *VAR_1 = ((void*)0), *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
  VAR_1 = FUNC_0(VAR_1, VAR_2->data);

 return VAR_1;
}
