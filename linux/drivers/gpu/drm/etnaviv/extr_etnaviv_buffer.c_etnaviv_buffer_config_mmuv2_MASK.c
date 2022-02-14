
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int features; } ;
struct etnaviv_cmdbuf {int user_size; } ;
struct etnaviv_gpu {TYPE_1__ identity; int lock; struct etnaviv_cmdbuf buffer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct etnaviv_cmdbuf*) ;
 int FUNC_2 (struct etnaviv_cmdbuf*,int ,int) ;
 int FUNC_3 (struct etnaviv_cmdbuf*,int ,int ) ;
 int FUNC_4 (struct etnaviv_cmdbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;

u16 FUNC_7(struct etnaviv_gpu *VAR_10, u32 VAR_11, u32 VAR_12)
{
 struct etnaviv_cmdbuf *VAR_13 = &VAR_10->buffer;

 FUNC_6(&VAR_10->lock);

 VAR_13->user_size = 0;

 if (VAR_10->identity.features & VAR_9) {
  FUNC_2(VAR_13, VAR_4,
          FUNC_5(VAR_1));
  FUNC_2(VAR_13, VAR_5,
   VAR_11 | VAR_6);
  FUNC_2(VAR_13, VAR_7, VAR_12);
  FUNC_3(VAR_13, VAR_2, VAR_3);
  FUNC_4(VAR_13, VAR_2, VAR_3);
 }

 if (VAR_10->identity.features & VAR_8) {
  FUNC_2(VAR_13, VAR_4,
          FUNC_5(VAR_0));
  FUNC_2(VAR_13, VAR_5,
   VAR_11 | VAR_6);
  FUNC_2(VAR_13, VAR_7, VAR_12);
  FUNC_3(VAR_13, VAR_2, VAR_3);
  FUNC_4(VAR_13, VAR_2, VAR_3);
 }

 FUNC_1(VAR_13);

 VAR_13->user_size = FUNC_0(VAR_13->user_size, 8);

 return VAR_13->user_size / 8;
}
