
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_ic_priv {int lock; } ;
struct ipu_ic_csc {int out_cs; int in_cs; } ;
struct ipu_ic {int out_cs; int in_cs; TYPE_1__* reg; struct ipu_ic_priv* priv; } ;
struct TYPE_2__ {int rsc; } ;


 int FUNC_0 (struct ipu_ic*,int,int,int*,int*) ;
 int FUNC_1 (struct ipu_ic*,struct ipu_ic_csc const*,int ) ;
 int FUNC_2 (struct ipu_ic*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ipu_ic *VAR_0,
    const struct ipu_ic_csc *VAR_1,
    int VAR_2, int VAR_3,
    int VAR_4, int VAR_5,
    u32 VAR_6)
{
 struct ipu_ic_priv *VAR_7 = VAR_0->priv;
 u32 VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (!VAR_6) {


  VAR_11 = FUNC_0(VAR_0, VAR_3, VAR_5,
      &VAR_9, &VAR_8);
  if (VAR_11)
   return VAR_11;

  VAR_6 = (VAR_8 << 30) | (VAR_9 << 16);


  VAR_11 = FUNC_0(VAR_0, VAR_2, VAR_4,
      &VAR_9, &VAR_8);
  if (VAR_11)
   return VAR_11;

  VAR_6 |= (VAR_8 << 14) | VAR_9;
 }

 FUNC_3(&VAR_7->lock, VAR_10);

 FUNC_2(VAR_0, VAR_6, VAR_0->reg->rsc);


 VAR_0->in_cs = VAR_1->in_cs;
 VAR_0->out_cs = VAR_1->out_cs;

 VAR_11 = FUNC_1(VAR_0, VAR_1, 0);

 FUNC_4(&VAR_7->lock, VAR_10);
 return VAR_11;
}
