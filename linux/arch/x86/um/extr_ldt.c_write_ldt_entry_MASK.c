
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int dummy; } ;
struct mm_id {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (struct mm_id*,int ,unsigned long*,int ,void**,int) ;
 long FUNC_1 (struct mm_id*,unsigned long*,int,void**,void**) ;

__attribute__((used)) static long FUNC_2(struct mm_id *VAR_1, int VAR_2,
       struct user_desc *VAR_3, void **VAR_4, int VAR_5)
{
 long VAR_6;
 void *VAR_7;
 VAR_6 = FUNC_1(VAR_1, (unsigned long *)VAR_3,
    (sizeof(*VAR_3) + sizeof(long) - 1) &
        ~(sizeof(long) - 1),
    VAR_4, &VAR_7);
 if (!VAR_6) {
  unsigned long VAR_8[] = { VAR_2,
      (unsigned long)VAR_7,
      sizeof(*VAR_3),
      0, 0, 0 };
  VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_8,
           0, VAR_4, VAR_5);
 }

 return VAR_6;
}
