
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbg_string {int list; int len; int * buf; } ;
struct drbg_state {int reseed_threshold; int reseed_ctr; int seeded; TYPE_2__* core; TYPE_1__* d_ops; scalar_t__ pr; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* generate ) (struct drbg_state*,unsigned char*,unsigned int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int ,int ) ;
 int FUNC_2 (struct drbg_state*) ;
 unsigned int FUNC_3 (struct drbg_state*) ;
 int FUNC_4 (struct drbg_state*,struct drbg_string*,int) ;
 int FUNC_5 (struct drbg_state*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct drbg_state*,unsigned char*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_10(struct drbg_state *VAR_4,
    unsigned char *VAR_5, unsigned int VAR_6,
    struct drbg_string *VAR_7)
{
 int VAR_8 = 0;
 FUNC_0(VAR_3);

 if (!VAR_4->core) {
  FUNC_7("DRBG: not yet seeded\n");
  return -VAR_2;
 }
 if (0 == VAR_6 || !VAR_5) {
  FUNC_7("DRBG: no output buffer provided\n");
  return -VAR_2;
 }
 if (VAR_7 && ((void*)0) == VAR_7->buf && 0 < VAR_7->len) {
  FUNC_7("DRBG: wrong format of additional information\n");
  return -VAR_2;
 }


 VAR_8 = -VAR_2;
 if (VAR_6 > (FUNC_3(VAR_4))) {
  FUNC_7("DRBG: requested random numbers too large %u\n",
    VAR_6);
  goto err;
 }




 if (VAR_7 && VAR_7->len > (FUNC_2(VAR_4))) {
  FUNC_7("DRBG: additional information string too long %zu\n",
    VAR_7->len);
  goto err;
 }






 if (VAR_4->reseed_threshold < VAR_4->reseed_ctr)
  VAR_4->seeded = 0;

 if (VAR_4->pr || !VAR_4->seeded) {
  FUNC_7("DRBG: reseeding before generation (prediction "
    "resistance: %s, state %s)\n",
    VAR_4->pr ? "true" : "false",
    VAR_4->seeded ? "seeded" : "unseeded");

  VAR_8 = FUNC_4(VAR_4, VAR_7, 1);
  if (VAR_8)
   goto err;

  VAR_7 = ((void*)0);
 }

 if (VAR_7 && 0 < VAR_7->len)
  FUNC_6(&VAR_7->list, &VAR_3);

 VAR_8 = VAR_4->d_ops->generate(VAR_4, VAR_5, VAR_6, &VAR_3);


 VAR_4->reseed_ctr++;
 if (0 >= VAR_8)
  goto err;
 VAR_8 = 0;
err:
 return VAR_8;
}
