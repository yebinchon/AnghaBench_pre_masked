
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbg_string {scalar_t__ len; int list; scalar_t__ buf; } ;
struct TYPE_4__ {unsigned char* buf; unsigned int len; int list; } ;
struct drbg_state {int C; int V; int jent; TYPE_2__ test_data; TYPE_1__* core; } ;
typedef int entropy ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drbg_state*,int *,int) ;
 int FUNC_3 (int ,unsigned char*,unsigned int) ;
 int FUNC_4 (struct drbg_state*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_5 (struct drbg_state*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct drbg_state*) ;
 int FUNC_8 (struct drbg_string*,unsigned char*,unsigned int) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (unsigned char*,unsigned int) ;
 int FUNC_13 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_14(struct drbg_state *VAR_2, struct drbg_string *VAR_3,
       bool VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[((32 + 16) * 2)];
 unsigned int VAR_7 = FUNC_6(VAR_2->core->flags);
 struct drbg_string VAR_8;
 FUNC_1(VAR_1);


 if (VAR_3 && VAR_3->len > (FUNC_5(VAR_2))) {
  FUNC_13("DRBG: personalization string too long %zu\n",
    VAR_3->len);
  return -VAR_0;
 }

 if (FUNC_10(&VAR_2->test_data.list)) {
  FUNC_8(&VAR_8, VAR_2->test_data.buf,
     VAR_2->test_data.len);
  FUNC_13("DRBG: using test entropy\n");
 } else {
  FUNC_0(!VAR_7);
  if (!VAR_4)
   VAR_7 = ((VAR_7 + 1) / 2) * 3;
  FUNC_0((VAR_7 * 2) > sizeof(VAR_6));


  VAR_5 = FUNC_4(VAR_2, VAR_6, VAR_7);
  if (VAR_5)
   goto out;

  if (!VAR_2->jent) {
   FUNC_8(&VAR_8, VAR_6, VAR_7);
   FUNC_13("DRBG: (re)seeding with %u bytes of entropy\n",
     VAR_7);
  } else {

   VAR_5 = FUNC_3(VAR_2->jent,
         VAR_6 + VAR_7,
         VAR_7);
   if (VAR_5) {
    FUNC_13("DRBG: jent failed with %d\n", VAR_5);
    goto out;
   }

   FUNC_8(&VAR_8, VAR_6, VAR_7 * 2);
   FUNC_13("DRBG: (re)seeding with %u bytes of entropy\n",
     VAR_7 * 2);
  }
 }
 FUNC_9(&VAR_8, &VAR_1);






 if (VAR_3 && VAR_3->buf && 0 < VAR_3->len) {
  FUNC_9(&VAR_3->list, &VAR_1);
  FUNC_13("DRBG: using personalization string\n");
 }

 if (!VAR_4) {
  FUNC_11(VAR_2->V, 0, FUNC_7(VAR_2));
  FUNC_11(VAR_2->C, 0, FUNC_7(VAR_2));
 }

 VAR_5 = FUNC_2(VAR_2, &VAR_1, VAR_4);

out:
 FUNC_12(VAR_6, VAR_7 * 2);

 return VAR_5;
}
