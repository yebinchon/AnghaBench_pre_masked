
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_store {scalar_t__ chunk_size; int userspace_supports_overflow; } ;
typedef int status_type_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;



__attribute__((used)) static unsigned FUNC_1(struct dm_exception_store *VAR_0,
      status_type_t VAR_1, char *VAR_2,
      unsigned VAR_3)
{
 unsigned VAR_4 = 0;

 switch (VAR_1) {
 case 129:
  break;
 case 128:
  FUNC_0(" %s %llu", VAR_0->userspace_supports_overflow ? "PO" : "P",
         (unsigned long long)VAR_0->chunk_size);
 }

 return VAR_4;
}
