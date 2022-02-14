
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int dummy; } ;
struct dvb_frontend {struct firedtv* sec_priv; } ;
struct dvb_diseqc_master_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct firedtv*,int ,int ,int ,int,struct dvb_diseqc_master_cmd*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1,
           struct dvb_diseqc_master_cmd *VAR_2)
{
 struct firedtv *VAR_3 = VAR_1->sec_priv;

 return FUNC_0(VAR_3, VAR_0, VAR_0,
          VAR_0, 1, VAR_2);
}
