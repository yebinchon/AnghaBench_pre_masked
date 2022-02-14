
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int bv_page; int bv_len; } ;


 void* FUNC_0 (struct bio_vec*,unsigned long*) ;
 int FUNC_1 (void*,unsigned long*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bio_vec *VAR_0)
{
 void *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_0(VAR_0, &VAR_2);
 FUNC_3(VAR_1, 0, VAR_0->bv_len);
 FUNC_2(VAR_0->bv_page);
 FUNC_1(VAR_1, &VAR_2);
}
