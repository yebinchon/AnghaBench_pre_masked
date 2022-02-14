
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha512_state {int state; } ;
struct sha256_state {int state; } ;
struct sha1_state {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct shash_desc*,void*) ;
 scalar_t__ FUNC_1 (struct shash_desc*) ;
 scalar_t__ FUNC_2 (struct shash_desc*,char*,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_9,
         char *VAR_10, char *VAR_11,
         int VAR_12)
{
 struct sha1_state VAR_13;
 struct sha256_state VAR_14;
 struct sha512_state VAR_15;
 int VAR_16;

 if (VAR_12 == VAR_2) {
  VAR_16 = FUNC_1(VAR_9) ?:
   FUNC_2(VAR_9, VAR_10, VAR_1) ?:
   FUNC_0(VAR_9, (void *)&VAR_13);
  FUNC_3(VAR_11, VAR_13.state, VAR_2);
 } else if (VAR_12 == VAR_3) {
  VAR_16 = FUNC_1(VAR_9) ?:
   FUNC_2(VAR_9, VAR_10, VAR_4) ?:
   FUNC_0(VAR_9, (void *)&VAR_14);
  FUNC_3(VAR_11, VAR_14.state, VAR_5);

 } else if (VAR_12 == VAR_5) {
  VAR_16 = FUNC_1(VAR_9) ?:
   FUNC_2(VAR_9, VAR_10, VAR_4) ?:
   FUNC_0(VAR_9, (void *)&VAR_14);
  FUNC_3(VAR_11, VAR_14.state, VAR_5);

 } else if (VAR_12 == VAR_6) {
  VAR_16 = FUNC_1(VAR_9) ?:
   FUNC_2(VAR_9, VAR_10, VAR_7) ?:
   FUNC_0(VAR_9, (void *)&VAR_15);
  FUNC_3(VAR_11, VAR_15.state, VAR_8);

 } else if (VAR_12 == VAR_8) {
  VAR_16 = FUNC_1(VAR_9) ?:
   FUNC_2(VAR_9, VAR_10, VAR_7) ?:
   FUNC_0(VAR_9, (void *)&VAR_15);
  FUNC_3(VAR_11, VAR_15.state, VAR_8);
 } else {
  VAR_16 = -VAR_0;
  FUNC_4("Unknown digest size %d\n", VAR_12);
 }
 return VAR_16;
}
