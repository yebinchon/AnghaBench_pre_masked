
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tpm_tis_data {int read_queue; int locality; } ;
struct tpm_chip {int flags; int dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct tpm_tis_data* FUNC_2 (int *) ;
 unsigned long FUNC_3 (struct tpm_chip*,int ) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*,int const*,size_t) ;
 int FUNC_6 (struct tpm_tis_data*,int ,int ) ;
 scalar_t__ FUNC_7 (struct tpm_chip*,int,unsigned long,int *,int) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_5, const u8 *VAR_6, size_t VAR_7)
{
 struct tpm_tis_data *VAR_8 = FUNC_2(&VAR_5->dev);
 int VAR_9;
 u32 VAR_10;
 unsigned long VAR_11;

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_6(VAR_8, FUNC_0(VAR_8->locality), VAR_3);
 if (VAR_9 < 0)
  goto out_err;

 if (VAR_5->flags & VAR_1) {
  VAR_10 = FUNC_1(*((__be32 *) (VAR_6 + 6)));

  VAR_11 = FUNC_3(VAR_5, VAR_10);
  if (FUNC_7
      (VAR_5, VAR_2 | VAR_4, VAR_11,
       &VAR_8->read_queue, 0) < 0) {
   VAR_9 = -VAR_0;
   goto out_err;
  }
 }
 return 0;
out_err:
 FUNC_4(VAR_5);
 return VAR_9;
}
