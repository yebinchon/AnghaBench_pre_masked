
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int length; void* data; void* mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct block* FUNC_1 (size_t) ;
 int FUNC_2 (struct block*,int ,size_t) ;

__attribute__((used)) static struct block *
FUNC_3(void)
{
 struct block *VAR_2;
 size_t VAR_3 = sizeof(*VAR_2) + (2 * VAR_0);

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2 == ((void*)0))
  FUNC_0(VAR_1, "Out of memory");
 FUNC_2(VAR_2, 0, VAR_3);
 VAR_2->data = (void *)(VAR_2 + 1);
 VAR_2->mask = VAR_2->data + VAR_0;
 VAR_2->length = VAR_0;
 return (VAR_2);
}
