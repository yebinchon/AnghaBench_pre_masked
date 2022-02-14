
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct aes_container {char* src_buf; char* dst_buf; } ;


 struct page* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_1(struct aes_container *VAR_0,struct scatterlist *VAR_1,
                       struct scatterlist *VAR_2)
{

    struct page *VAR_3, *VAR_4;

    VAR_4 = FUNC_0(VAR_1);
    VAR_0->src_buf = (char *) VAR_4;

    VAR_3 = FUNC_0(VAR_2);
    VAR_0->dst_buf = (char *) VAR_3;

}
