
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct proxy_dev {int state; int buf_lock; } ;


 int VAR_0 ;
 struct proxy_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct tpm_chip *VAR_1, u8 VAR_2)
{
 struct proxy_dev *VAR_3 = FUNC_0(&VAR_1->dev);
 bool VAR_4;

 FUNC_1(&VAR_3->buf_lock);

 VAR_4 = !(VAR_3->state & VAR_0);

 FUNC_2(&VAR_3->buf_lock);

 return VAR_4;
}
