
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_header {void* entry_count; void* version; void* signature; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct index_header *VAR_3, const void *VAR_4)
{
 const struct index_header *VAR_5 = VAR_4;

 VAR_3->signature = FUNC_1(VAR_5->signature);
 if (VAR_3->signature != VAR_0)
  return FUNC_0("incorrect header signature");

 VAR_3->version = FUNC_1(VAR_5->version);
 if (VAR_3->version < VAR_1 ||
  VAR_3->version > VAR_2)
  return FUNC_0("incorrect header version");

 VAR_3->entry_count = FUNC_1(VAR_5->entry_count);
 return 0;
}
