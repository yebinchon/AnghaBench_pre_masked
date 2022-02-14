
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int * data; } ;
typedef int ssize_t ;
typedef int cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tpm_buf*,int) ;
 int FUNC_1 (struct tpm_buf*) ;
 int FUNC_2 (struct tpm_buf*,int ,int ) ;
 int FUNC_3 (struct tpm_chip*,struct tpm_buf*,size_t,char const*) ;

ssize_t FUNC_4(struct tpm_chip *VAR_9, u32 VAR_10, cap_t *VAR_11,
      const char *VAR_12, size_t VAR_13)
{
 struct tpm_buf VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(&VAR_14, VAR_8, VAR_7);
 if (VAR_15)
  return VAR_15;

 if (VAR_10 == VAR_4 ||
     VAR_10 == VAR_5) {
  FUNC_0(&VAR_14, VAR_10);
  FUNC_0(&VAR_14, 0);
 } else {
  if (VAR_10 == VAR_1 ||
      VAR_10 == VAR_2)
   FUNC_0(&VAR_14, VAR_0);
  else
   FUNC_0(&VAR_14, VAR_3);

  FUNC_0(&VAR_14, 4);
  FUNC_0(&VAR_14, VAR_10);
 }
 VAR_15 = FUNC_3(VAR_9, &VAR_14, VAR_13, VAR_12);
 if (!VAR_15)
  *VAR_11 = *(cap_t *)&VAR_14.data[VAR_6 + 4];
 FUNC_1(&VAR_14);
 return VAR_15;
}
