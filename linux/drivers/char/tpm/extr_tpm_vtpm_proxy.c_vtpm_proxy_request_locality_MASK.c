
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_header {int return_code; } ;
struct tpm_chip {int flags; int dev; } ;
struct tpm_buf {scalar_t__ data; } ;
struct proxy_dev {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct proxy_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_buf*,int) ;
 int FUNC_3 (struct tpm_buf*) ;
 int FUNC_4 (struct tpm_buf*,int ,int ) ;
 int FUNC_5 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct tpm_chip *VAR_6, int VAR_7)
{
 struct tpm_buf VAR_8;
 int VAR_9;
 const struct tpm_header *VAR_10;
 struct proxy_dev *VAR_11 = FUNC_1(&VAR_6->dev);

 if (VAR_6->flags & VAR_3)
  VAR_9 = FUNC_4(&VAR_8, VAR_2,
      VAR_1);
 else
  VAR_9 = FUNC_4(&VAR_8, VAR_5,
      VAR_4);
 if (VAR_9)
  return VAR_9;
 FUNC_2(&VAR_8, VAR_7);

 VAR_11->state |= VAR_0;

 VAR_9 = FUNC_5(VAR_6, &VAR_8, 0, "attempting to set locality");

 VAR_11->state &= ~VAR_0;

 if (VAR_9 < 0) {
  VAR_7 = VAR_9;
  goto out;
 }

 VAR_10 = (const struct tpm_header *)VAR_8.data;
 VAR_9 = FUNC_0(VAR_10->return_code);
 if (VAR_9)
  VAR_7 = -1;

out:
 FUNC_3(&VAR_8);

 return VAR_7;
}
