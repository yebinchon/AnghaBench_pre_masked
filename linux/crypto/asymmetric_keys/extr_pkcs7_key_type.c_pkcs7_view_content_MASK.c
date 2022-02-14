
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_preparsed_payload {void* data; size_t datalen; } ;


 int FUNC_0 (struct key_preparsed_payload*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const void *VAR_1, size_t VAR_2,
         size_t VAR_3)
{
 struct key_preparsed_payload *VAR_4 = VAR_0;
 const void *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->data;
 VAR_6 = VAR_4->datalen;
 VAR_4->data = VAR_1;
 VAR_4->datalen = VAR_2;

 VAR_7 = FUNC_0(VAR_4);

 VAR_4->data = VAR_5;
 VAR_4->datalen = VAR_6;
 return VAR_7;
}
