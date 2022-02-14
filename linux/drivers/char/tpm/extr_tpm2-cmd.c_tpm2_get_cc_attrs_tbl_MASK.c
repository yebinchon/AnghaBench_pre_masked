
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {int* cc_attrs_tbl; int nr_commands; int dev; } ;
struct tpm_buf {int * data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (struct tpm_chip*,int ,int*,int *) ;
 int FUNC_4 (struct tpm_buf*,int) ;
 int FUNC_5 (struct tpm_buf*) ;
 int FUNC_6 (struct tpm_buf*,int ,int ) ;
 int FUNC_7 (struct tpm_chip*,struct tpm_buf*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_12)
{
 struct tpm_buf VAR_13;
 u32 VAR_14;
 __be32 *VAR_15;
 u32 VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_3(VAR_12, VAR_11, &VAR_14, ((void*)0));
 if (VAR_18)
  goto out;

 if (VAR_14 > 0xFFFFF) {
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_12->cc_attrs_tbl = FUNC_2(&VAR_12->dev, 4, VAR_14,
       VAR_2);

 VAR_18 = FUNC_6(&VAR_13, VAR_9, VAR_8);
 if (VAR_18)
  goto out;

 FUNC_4(&VAR_13, VAR_3);
 FUNC_4(&VAR_13, VAR_6);
 FUNC_4(&VAR_13, VAR_14);

 VAR_18 = FUNC_7(VAR_12, &VAR_13, 9 + 4 * VAR_14, ((void*)0));
 if (VAR_18) {
  FUNC_5(&VAR_13);
  goto out;
 }

 if (VAR_14 !=
     FUNC_1((__be32 *)&VAR_13.data[VAR_10 + 5])) {
  FUNC_5(&VAR_13);
  goto out;
 }

 VAR_12->nr_commands = VAR_14;

 VAR_15 = (__be32 *)&VAR_13.data[VAR_10 + 9];
 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++, VAR_15++) {
  VAR_12->cc_attrs_tbl[VAR_17] = FUNC_1(VAR_15);
  VAR_16 = VAR_12->cc_attrs_tbl[VAR_17] & 0xFFFF;

  if (VAR_16 == VAR_5 || VAR_16 == VAR_7) {
   VAR_12->cc_attrs_tbl[VAR_17] &=
    ~(FUNC_0(2, 0) << VAR_4);
   VAR_12->cc_attrs_tbl[VAR_17] |= 1 << VAR_4;
  }
 }

 FUNC_5(&VAR_13);

out:
 if (VAR_18 > 0)
  VAR_18 = -VAR_1;
 return VAR_18;
}
