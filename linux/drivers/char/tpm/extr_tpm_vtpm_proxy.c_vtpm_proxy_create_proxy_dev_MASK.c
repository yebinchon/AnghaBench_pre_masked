
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;
struct proxy_dev {struct tpm_chip* chip; int work; int buf_lock; int wq; } ;


 int VAR_0 ;
 struct proxy_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;
 int FUNC_4 (int *,struct proxy_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct proxy_dev*) ;
 struct proxy_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct tpm_chip* FUNC_9 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct proxy_dev *FUNC_10(void)
{
 struct proxy_dev *VAR_4;
 struct tpm_chip *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_7(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_4->wq);
 FUNC_8(&VAR_4->buf_lock);
 FUNC_1(&VAR_4->work, VAR_3);

 VAR_5 = FUNC_9(((void*)0), &VAR_2);
 if (FUNC_2(VAR_5)) {
  VAR_6 = FUNC_3(VAR_5);
  goto err_proxy_dev_free;
 }
 FUNC_4(&VAR_5->dev, VAR_4);

 VAR_4->chip = VAR_5;

 return VAR_4;

err_proxy_dev_free:
 FUNC_6(VAR_4);

 return FUNC_0(VAR_6);
}
