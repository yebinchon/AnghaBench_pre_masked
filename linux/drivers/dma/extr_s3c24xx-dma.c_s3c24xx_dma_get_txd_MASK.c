
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_txd {int dcon; int dsg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct s3c24xx_txd* FUNC_1 (int,int ) ;

__attribute__((used)) static struct s3c24xx_txd *FUNC_2(void)
{
 struct s3c24xx_txd *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);

 if (VAR_3) {
  FUNC_0(&VAR_3->dsg_list);
  VAR_3->dcon = VAR_1 | VAR_2;
 }

 return VAR_3;
}
