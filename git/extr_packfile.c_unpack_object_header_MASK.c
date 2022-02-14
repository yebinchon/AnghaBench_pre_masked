
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
typedef unsigned long off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned char*,unsigned long,int*,unsigned long*) ;
 unsigned char* FUNC_1 (struct packed_git*,struct pack_window**,unsigned long,unsigned long*) ;

int FUNC_2(struct packed_git *VAR_1,
    struct pack_window **VAR_2,
    off_t *VAR_3,
    unsigned long *VAR_4)
{
 unsigned char *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 enum object_type VAR_8;







 VAR_5 = FUNC_1(VAR_1, VAR_2, *VAR_3, &VAR_6);
 VAR_7 = FUNC_0(VAR_5, VAR_6, &VAR_8, VAR_4);
 if (!VAR_7) {
  VAR_8 = VAR_0;
 } else
  *VAR_3 += VAR_7;

 return VAR_8;
}
