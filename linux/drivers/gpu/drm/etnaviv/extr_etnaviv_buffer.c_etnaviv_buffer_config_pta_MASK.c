
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct etnaviv_cmdbuf {int user_size; } ;
struct etnaviv_gpu {int lock; struct etnaviv_cmdbuf buffer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct etnaviv_cmdbuf*) ;
 int FUNC_2 (struct etnaviv_cmdbuf*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (int *) ;

u16 FUNC_5(struct etnaviv_gpu *VAR_1, unsigned short VAR_2)
{
 struct etnaviv_cmdbuf *VAR_3 = &VAR_1->buffer;

 FUNC_4(&VAR_1->lock);

 VAR_3->user_size = 0;

 FUNC_2(VAR_3, VAR_0,
         FUNC_3(VAR_2));

 FUNC_1(VAR_3);

 VAR_3->user_size = FUNC_0(VAR_3->user_size, 8);

 return VAR_3->user_size / 8;
}
