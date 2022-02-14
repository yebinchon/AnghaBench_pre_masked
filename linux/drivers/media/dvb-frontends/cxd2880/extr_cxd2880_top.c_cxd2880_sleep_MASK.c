
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct cxd2880_priv {int spi_mutex; int tnrdmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1)
{
 int VAR_2;
 struct cxd2880_priv *VAR_3 = ((void*)0);

 if (!VAR_1) {
  FUNC_4("invalid arg\n");
  return -VAR_0;
 }

 VAR_3 = VAR_1->demodulator_priv;

 FUNC_1(VAR_3->spi_mutex);
 VAR_2 = FUNC_0(&VAR_3->tnrdmd);
 FUNC_2(VAR_3->spi_mutex);

 FUNC_3("tnrdmd_sleep ret %d\n", VAR_2);

 return VAR_2;
}
