
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {struct evrpc_hook_meta* hook_meta; } ;
struct evrpc_meta {size_t data_size; int * data; int * key; } ;
struct evrpc_hook_meta {int meta_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct evrpc_meta*,int ) ;
 struct evrpc_hook_meta* FUNC_2 () ;
 int FUNC_3 (int *,void const*,size_t) ;
 void* FUNC_4 (size_t) ;
 int * FUNC_5 (char const*) ;
 int VAR_0 ;

void
FUNC_6(void *VAR_1, const char *VAR_2,
    const void *VAR_3, size_t VAR_4)
{
 struct evrpc_request_wrapper *VAR_5 = VAR_1;
 struct evrpc_hook_meta *VAR_6 = ((void*)0);
 struct evrpc_meta *VAR_7 = ((void*)0);

 if ((VAR_6 = VAR_5->hook_meta) == ((void*)0))
  VAR_6 = VAR_5->hook_meta = FUNC_2();

 VAR_7 = FUNC_4(sizeof(struct evrpc_meta));
 FUNC_0(VAR_7 != ((void*)0));
 VAR_7->key = FUNC_5(VAR_2);
 FUNC_0(VAR_7->key != ((void*)0));
 VAR_7->data_size = VAR_4;
 VAR_7->data = FUNC_4(VAR_4);
 FUNC_0(VAR_7->data != ((void*)0));
 FUNC_3(VAR_7->data, VAR_3, VAR_4);

 FUNC_1(&VAR_6->meta_data, VAR_7, VAR_0);
}
