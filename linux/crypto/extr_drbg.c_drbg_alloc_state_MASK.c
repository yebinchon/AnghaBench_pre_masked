
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drbg_state {int fips_primed; TYPE_2__* d_ops; void* prev; TYPE_1__* core; void* scratchpadbuf; void* scratchpad; void* Cbuf; void* C; void* Vbuf; void* V; } ;
struct TYPE_6__ {int (* crypto_init ) (struct drbg_state*) ;int (* crypto_fini ) (struct drbg_state*) ;} ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (struct drbg_state*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (struct drbg_state*) ;
 TYPE_2__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 unsigned int FUNC_4 (int const) ;
 int FUNC_5 (struct drbg_state*) ;
 void* FUNC_6 (int,int ) ;
 void* FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (struct drbg_state*) ;
 int FUNC_9 (struct drbg_state*) ;

__attribute__((used)) static inline int FUNC_10(struct drbg_state *VAR_8)
{
 int VAR_9 = -VAR_2;
 unsigned int VAR_10 = 0;

 switch (VAR_8->core->flags & VAR_1) {
 default:
  VAR_9 = -VAR_3;
  goto err;
 }

 VAR_9 = VAR_8->d_ops->crypto_init(VAR_8);
 if (VAR_9 < 0)
  goto err;

 VAR_8->Vbuf = FUNC_6(FUNC_5(VAR_8) + VAR_9, VAR_4);
 if (!VAR_8->Vbuf) {
  VAR_9 = -VAR_2;
  goto fini;
 }
 VAR_8->V = FUNC_1(VAR_8->Vbuf, VAR_9 + 1);
 VAR_8->Cbuf = FUNC_6(FUNC_5(VAR_8) + VAR_9, VAR_4);
 if (!VAR_8->Cbuf) {
  VAR_9 = -VAR_2;
  goto fini;
 }
 VAR_8->C = FUNC_1(VAR_8->Cbuf, VAR_9 + 1);

 if (VAR_8->core->flags & 128)
  VAR_10 = 0;
 else if (VAR_8->core->flags & 130)
  VAR_10 = FUNC_5(VAR_8) + FUNC_2(VAR_8) +
     FUNC_5(VAR_8) +
     FUNC_2(VAR_8) +
     FUNC_2(VAR_8) +
     FUNC_5(VAR_8) + FUNC_2(VAR_8);
 else
  VAR_10 = FUNC_5(VAR_8) + FUNC_2(VAR_8);

 if (0 < VAR_10) {
  VAR_8->scratchpadbuf = FUNC_7(VAR_10 + VAR_9, VAR_4);
  if (!VAR_8->scratchpadbuf) {
   VAR_9 = -VAR_2;
   goto fini;
  }
  VAR_8->scratchpad = FUNC_1(VAR_8->scratchpadbuf, VAR_9 + 1);
 }

 if (FUNC_0(VAR_0)) {
  VAR_8->prev = FUNC_7(FUNC_4(VAR_8->core->flags),
         VAR_4);
  if (!VAR_8->prev)
   goto fini;
  VAR_8->fips_primed = 0;
 }

 return 0;

fini:
 VAR_8->d_ops->crypto_fini(VAR_8);
err:
 FUNC_3(VAR_8);
 return VAR_9;
}
